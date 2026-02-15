#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void color(int c){
    SetConsoleTextAttribute(hConsole, c);
}

bool gameOver;
const int width = 40;
const int height = 20;

int x, y;
int foodX, foodY;
int score;

int tailX[100], tailY[100];
int nTail;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void Setup(){
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    srand(time(0));
    foodX = rand() % (width-2) + 1;
    foodY = rand() % (height-2) + 1;
    score = 0;
}

void Draw(){
    system("cls");

    color(9);
    for(int i=0;i<width+2;i++) cout<<"#";
    cout<<endl;

    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            if(j==0){
                color(9);
                cout<<"#";
            }

            if(i==y && j==x){
                color(10);
                cout<<"O";
            }
            else if(i==foodY && j==foodX){
                color(12);
                cout<<"F";
            }
            else{
                bool printTail=false;
                for(int k=0;k<nTail;k++){
                    if(tailX[k]==j && tailY[k]==i){
                        color(10);
                        cout<<"o";
                        printTail=true;
                        break;
                    }
                }
                if(!printTail){
                    cout<<" ";
                }
            }

            if(j==width-1){
                color(9);
                cout<<"#";
            }
        }
        cout<<endl;
    }

    color(9);
    for(int i=0;i<width+2;i++) cout<<"#";

    color(14);
    cout<<"\nScore: "<<score<<endl;
}

void Input(){
    if(_kbhit()){
        switch(_getch()){
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameOver = true; break;
        }
    }
}

void Logic(){
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for(int i=1;i<nTail;i++){
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch(dir){
        case LEFT: x--; break;
        case RIGHT: x++; break;
        case UP: y--; break;
        case DOWN: y++; break;
        default: break;
    }

    if(x>=width || x<0 || y>=height || y<0){
        gameOver = true;
    }

    for(int i=0;i<nTail;i++){
        if(tailX[i]==x && tailY[i]==y)
            gameOver=true;
    }

    if(x==foodX && y==foodY){
        score += 10;
        foodX = rand() % (width-2) + 1;
        foodY = rand() % (height-2) + 1;
        nTail++;
    }
}

int main(){
    Setup();
    while(!gameOver){
        Draw();
        Input();
        Logic();
        Sleep(80);
    }

    system("cls");
    color(12);
    cout<<"GAME OVER\n";
    color(14);
    cout<<"Final Score: "<<score<<endl;

    color(7);
    return 0;
}
