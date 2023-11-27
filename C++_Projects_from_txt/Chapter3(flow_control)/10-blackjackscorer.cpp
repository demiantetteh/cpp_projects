#include <iostream>

int main()
{
    int cards, score;
    int total = 0;
    char ans, facevalue;
    std::string special;

    do{
        std::cout << "**************************************\n"
                  << "      BLACK JACK [1 PLAYER SCORER]      \n"
                  << "**************************************\n\n"
                  << "-----------------[DISCLAIMER]--------------------\n"
                  << "This program is not the game of blackjack,\n"
                  << "Rather, its the scorer for just one player\n"
                  << "i.e. It determines the score for just one player\n"
                  << "--------------------------------------------------\n";

        std::cout << "\nInput the number of cards you have(2-5): ";
        std::cin >> cards;

        if(cards >= 2 && cards <= 5)
        {
            std::cout << "\n-----------[FACE VALUES]-------------\n"
                      << "King = 'K'\tQueen = 'Q'\tCard #10 = 'T'\n"
                      << "Ace = 'A'\tJack = 'J'\tCard # = '#itslelf'\n"
                      << "------------------------------------------\n";

            for(int i = 1; i <= cards; i++)
            {
                if(i == 1)
                {
                    std::cout << "\nEnter the face value of the " << i << "st card\n->";
                    std::cin >> facevalue;
                }
                else if(i == 2)
                {
                    std::cout << "Enter the face value of the " << i << "nd card\n->";
                    std::cin >> facevalue;
                }
                else if(i == 3)
                {
                    std::cout << "Enter the face value of the " << i << "rd card\n->";
                    std::cin >> facevalue;
                }
                else{
                    std::cout << "Enter the face value of the " << i << "th card\n->";
                    std::cin >> facevalue;
                }

                switch(facevalue)
                {
                    case '1':
                        score = 1;
                        break;
                    case '2':
                        score = 2;
                        break;
                    case '3':
                        score = 3;
                        break;
                    case '4':
                        score = 4;
                        break;
                    case '5':
                        score = 5;
                        break;
                    case '6':
                        score = 6;
                        break;
                    case '7':
                        score = 7;
                        break;
                    case '8':
                        score = 8;
                        break;
                    case '9':
                        score = 9;
                        break;
                    case 't':
                    case 'T':
                    case 'k':
                    case 'K':
                    case 'q':
                    case 'Q':
                    case 'j':
                    case 'J':
                        score = 10;
                        break;
                    case 'a':
                    case 'A':
                        score = 11;
                        special = "Ace";
                        break;
                    default:
                        std::cout << "PLEASE ENTER A VALID FACE VALUE\n";
                        i -= 1;
                        break;
                }
                total += score;
                score = 0;
            }
            if(special == "Ace")
            {
                if(total >= 21)
                    total -= 10;
                std::cout << special;
            }
            if(total > 21)
                std::cout << "You BUST\n";
            if(total <= 21)
                std::cout << "Score: " << total ;
        }
        else{
            std::cout << "\nPLEASE ENTER A VALID NUMBER OF CARDS WITHIN THE RANGE\n"
                      << "RESTART THE PROGRAM\n";
        }

        std::cout << "\nPress 'R' to restart the program" << std::endl;
        std::cout << "Press any other key to EXIT\n->";
        std::cin >> ans;
        std::cout << '\n';
    }while(ans == 'r' || ans == 'R');
}