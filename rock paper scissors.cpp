#include <iostream>
#include <cstdlib>  // for srand() and rand()
#include <ctime>    // for time()

class RockPaperScissors {
public:
    RockPaperScissors() {
        // Seed the random number generator
        srand(time(0));
    }

    void displayMenu() {
        std::cout << "Welcome to Rock, Paper, Scissors Game!\n";
        std::cout << "1. Play\n";
        std::cout << "2. Exit\n";
    }

    void playGame() {
        while (true) {
            displayGameMenu();
            int playerChoice = getPlayerChoice();
            int computerChoice = getComputerChoice();
            determineWinner(playerChoice, computerChoice);

            std::cout << "Do you want to play again? (y/n): ";
            char playAgain;
            std::cin >> playAgain;
            if (playAgain != 'y' && playAgain != 'Y') {
                break;
            }
        }
    }

    void run() {
        int choice;
        do {
            displayMenu();
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    playGame();
                    break;
                case 2:
                    std::cout << "Exiting the game. Goodbye!\n";
                    break;
                default:
                    std::cout << "Invalid choice. Please try again.\n";
                    break;
            }
        } while (choice != 2);
    }

private:
    void displayGameMenu() {
        std::cout << "Choose:\n";
        std::cout << "1. Rock\n";
        std::cout << "2. Paper\n";
        std::cout << "3. Scissors\n";
    }

    int getComputerChoice() {
        return (rand() % 3) + 1;
    }

    int getPlayerChoice() {
        int choice;
        std::cout << "Enter your choice (1-3): ";
        std::cin >> choice;

        // Validate the input
        while (choice < 1 || choice > 3) {
            std::cout << "Invalid choice. Please enter 1, 2, or 3: ";
            std::cin >> choice;
        }
        return choice;
    }

    void determineWinner(int playerChoice, int computerChoice) {
        std::string choices[3] = {"Rock", "Paper", "Scissors"};
        
        std::cout << "You chose " << choices[playerChoice - 1] << "\n";
        std::cout << "Computer chose " << choices[computerChoice - 1] << "\n";

        if (playerChoice == computerChoice) {
            std::cout << "It's a tie!\n";
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            std::cout << "You win!\n";
        } else {
            std::cout << "You lose!\n";
        }
    }
};

int main() {
    RockPaperScissors game;
    game.run();
    return 0;
}

