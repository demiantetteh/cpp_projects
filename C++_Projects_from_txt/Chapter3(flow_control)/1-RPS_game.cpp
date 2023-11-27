#include <iostream>

int main ()
{
    char player1, player2, res;

    std::cout << "************************************************\n"
              << "             ROCK, PAPER, SCISSORS              \n"
              << "************************************************\n\n"
              << "Hit ENTER after entering your INPUT\n";

    std::cout << "'R' for Rock\n"
              << "'P' for Paper\n"
              << "'S' for Scissors\n\n";
    do{

        std::cout << "Player 1: ";
        std::cin >> player1;
        std::cout << "Player 2: ";
        std::cin >> player2;
        switch(player1)
        {
            case 'r':
            case 'R':
                std::cout << '\n';
                if(player2 == 'r' || player2 == 'R')
                {
                    std::cout << "It's a tie!\n";
                    std::cout << "Nobody Wins!\n";
                }
                else if(player2 == 'p' || player2 == 'P')
                {
                    std::cout << "Paper covers Rock!!\n";
                    std::cout << "Player 2 wins\n";
                }
                else if(player2 == 's' || player2 == 'S')
                {
                    std::cout << "Rock breaks Scissors!!\n";
                    std::cout << "Player 1 wins\n";
                }
                else{
                    std::cout << "WRONG INPUT\n";
                    std::cout << "PLEASE ENTER INPUT FROM THE OPTIONS PROVIDED\n";
                    std::cout << "RESTART THE APP\n";
                }
                break;
            case 'p':
            case 'P':
                std::cout << '\n';
                if(player2 == 'p' || player2 == 'P')
                {
                    std::cout << "It's a tie!\n";
                    std::cout << "Nobody Wins!\n";
                }
                else if(player2 == 'r' || player2 == 'R')
                {
                    std::cout << "Paper covers Rock!!\n";
                    std::cout << "Player 1 wins\n";
                }
                else if(player2 == 's' || player2 == 'S')
                {
                    std::cout << "Scissors cut Paper!!\n";
                    std::cout << "Player 2 wins\n";
                }
                else{
                    std::cout << "WRONG INPUT\n";
                    std::cout << "PLEASE ENTER INPUT FROM THE OPTIONS PROVIDED\n";
                    std::cout << "RESTART THE APP\n";
                }
                break;
            case 's':
            case 'S':
                std::cout << '\n';
                if(player2 == 's' || player2 == 'S')
                {
                    std::cout << "It's a tie!\n";
                    std::cout << "Nobody Wins!\n";
                }
                else if(player2 == 'p' || player2 == 'P')
                {
                    std::cout << "Scissors cut Paper!!\n";
                    std::cout << "Player 1 wins\n";
                }
                else if(player2 == 'r' || player2 == 'R')
                {
                    std::cout << "Rock breaks Scissors!!\n";
                    std::cout << "Player 2 wins\n";
                }
                else{
                    std::cout << "WRONG INPUT\n";
                    std::cout << "PLEASE ENTER INPUT FROM THE OPTIONS PROVIDED\n";
                    std::cout << "RESTART THE APP\n";
                }
                break;
            default:
                std::cout << "WRONG INPUT\n";
                std::cout << "PLEASE ENTER INPUT FROM THE OPTIONS PROVIDED\n";
                std::cout << "RESTART THE APP\n";
                break;
        }
        std::cout << "\nPress 'R' to RESTART or Any other Key to exit the game\n->";
        std::cin >> res;
        std::cout << "*****************************************************\n";
    }while(res == 'r' || res == 'R');
}