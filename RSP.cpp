// RSP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random>

void CPUrps() {
    int rps = 1+ rand()%3;
    if (rps == 1) {
        ;
        std::cout << "They chose Rock\n";
    }
    else if (rps == 2) {
        std::cout << "They chose Paper\n";
    }
    else {
        std::cout << "They chose Scissors\n";
    }
}

int main()
{
    int wins = 0;
    int loses = 0;
    int ties = 0;
    int rounds = 0;
    bool fun = true;
    int rps;
    std::string choice;

    int check;
    while (fun = true){
        std :: cout << "Rock, Paper, or Scissors? Type 'quit' to quit.";
        std :: cin >> choice;
        if (choice == "Quit" || "quit" || "QUIT") {
            std :: cout << "You won " << wins << " times\n" << "You lost " << loses << " times\n"
                << "You tied " << ties << " times\n" << "You played " << rounds << " times\n";
            if (wins > loses) {
                std :: cout << "YOU WIN!";
            }
            else if (loses > wins) {
                std :: cout << "YOU LOSE! Haha";
            }
            else {
                std::cout << "Tie!";
            }
            fun = false;
        }
        else {
            rounds++;
            CPUrps();
                if (choice == "rock" || "ROCK" || "Rock") {
                    if (rps == 1) {
                        std::cout << "You both picked Rock! Tie.\n";
                        ties++;
                    }
                    else if (rps == 2) {
                        std::cout << "Paper beats Rock! You lose.\n";
                        loses++;
                    }
                    else {
                        std::cout << "Rock beats Scissors! You win.\n";
                            wins++;
                    }
                }
                else if (choice == "Paper" || "paper" || "PAPER") {
                    if (rps == 1) {
                        std::cout << "Paper beats Rock! You win.\n";
                        wins++;
                    }
                    else if (rps == 2) {
                        std::cout << "You both picked Paper! Tie.\n";
                        ties++;
                    }
                    else {
                        std::cout << "Scissors beats Paper! You lose.\n";
                        loses++;
                    }
                }else if (choice == "scissors" || "SCISSORS" || "Scissors") {
                    if (rps == 1) {
                        std::cout << "Rock beats Scissors! You lose.\n";
                        loses++;
                    }
                    else if (rps == 2) {
                        std::cout << "Scissors beats Paper! You win.\n";
                        wins++;
                    }
                    else {
                        std::cout << "You both picked Scissors! Tie.\n";
                        ties++;
                    }

        }
    }
}









// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
