#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    char playAgain;

    do {
        int first_number = rand() % 101;
        int second_number = rand() % 101;
        int answer = first_number * second_number;
        int input = 0;
        int attempts = 1;

        std::cout << "#########################\n";
        std::cout << "Math Game #1 \n";
        std::cout << "Answer this equation: " << first_number << " * " << second_number << '\n';

        std::cin >> input;

        while (input != answer) {
            std::cout << "Wrong! Try again: ";
            std::cin >> input;
            attempts++;
        }

        std::cout << "Right! The number of tries: " << attempts << '\n';

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing!\n";

    return 0;
}