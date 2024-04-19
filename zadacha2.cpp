#include <iostream>
#include <fstream>
#include <vector>

void flipCards(std::vector<int>& cards, int index) {
    if (index > 0) {
        cards[index - 1] = 1 - cards[index - 1];
    }
    cards[index] = 0;
    if (index < cards.size() - 1) {
        cards[index + 1] = 1 - cards[index + 1];
    }
}

int main() {
    std::ifstream inputFile("cards.txt");
    std::ofstream outputFile("output.txt");
    if (!inputFile || !outputFile) {
        std::cerr << "Cannot open the file" << std::endl;
        return 1;
    }

    std::vector<int> cards;
    int card;
    while (inputFile >> card) {
        cards.push_back(card);
    }

    int N = 5;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < cards.size(); ++j) {
            if (cards[j] == 1) {
                flipCards(cards, j);
            }
        }
        for (const auto &card : cards) {
            outputFile << card;
        }
        outputFile << "\n";
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
