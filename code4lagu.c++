#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

void animate_text(const std::string& text, double delay, const std::string& color) {
    std::cout << color;
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::duration<double>(delay));
    }
    std::cout << "\033[0m" << std::endl;
}
int main(){
    std::vector<std::string> lyrics = {
        "By - Natusss Devvvv",
        "Lemon nipis",
        "Taguling-guling",
        "Ade ko cantik",
        "Pipi congka hitam manis",
        "Kaka so lapis",
        "Cinta  di belis",
        "Ko tau aman saja kaka yang tangkis",
        "Aman saja mo ngapain mo repot",
        "Tunjangan sampe tua",
        "Turun dari freeport",
        "Honeymoon di Inggris di Paris di Jerman",
        "Su pasti deng sa barang jalan aman",
    };

    std::vector<std::string> colors = {
        "\033[31m", // Red
        "\033[32m", // Green
        "\033[33m", // Yellow
        "\033[34m", // Blue
        "\033[35m", // Magenta
        "\033[36m"  // Cyan
    };
    std::vector<double> delays = {
        0, 0.2, 0.1, 0.1, 0.1, 0.2, 0.2, 0.1, 0.1f, 0.2
    };
    for (int i = 0; i < lyrics.size(); i++) {
        animate_text(lyrics[i], delays[i % delays.size()], colors[i % colors.size()]);
    }
    return 0;
}