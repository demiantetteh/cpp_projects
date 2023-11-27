#include <iostream>
#include <ctime>

// solving this programming project without functions at first

int main()
{
    int compsecret, usersecret, compguess, userguess;
    bool compwin = false, userwin = false;

    srand(time(NULL));

    std::cout << "********************************\n"
              << "   RANDOM NUMBER GUESSING GAME  \n"
              << "********************************\n\n";

    std::cout << "-------------[STIPULATIONS/RULES]------------\n"
              << "COMPUTER VS USER\n"
              << "COMPUTER guesses a number(1-100) and so would YOU(1-100)\n"
              << "YOU then guess the secret number guessed by COMPUTER\n"
              << "COMPUTER also tries to guess YOUR secret number\n"
              << "WHOEVER FINDS THE SECRET NUMBER FIRST IS DECLARED WINNER\n"
              << "---------------------------------------------------------\n\n";

    compsecret = (rand() % 100) + 1;
    std::cout << "COMPUTER has decided it's secret number(1-100)\n";

    do
    {
        std::cout << "\nEnter your secret guess(1-100)\n=>";
        std::cin >> usersecret;
    } while (usersecret > 100 || usersecret < 1);

    do
    {
        compguess = (rand() % 100) + 1;
        std::cout << "COMPUTER just guessed your guess\n"
                  << "GUESS: " << compguess << std::endl;
        if (compguess == usersecret)
        {
            std::cout << "COMPUTER'S GUESS MATCHES YOUR SECRET NUMBER\n"
                      << "Computer GUSSED RIGHT\n";
            compwin = true;
            std::cout << '\n';
        }
        else
        {
            if (compguess > usersecret)
                std::cout << "COMPUTER guess is too HIGH\n";
            else if (compguess < usersecret)
                std::cout << "COMPUTER guess is too LOW\n\n";
        }
        do
        {
            std::cout << "\nEnter a guess for COMPUTER'S secret Number(1-100)\n=>";
            std::cin >> userguess;
        } while (userguess > 100 || userguess < 1);
        if (userguess == compsecret)
        {
            std::cout << "YOUR GUESS MATCHES GOMPUTER'S SECRET NUMBER\n"
                      << "YOU GUESSED RIGHT\n";
            userwin = true;
            std::cout << '\n';
        }
        else
        {
            if (userguess > compsecret)
                std::cout << "YOUR guess is too HIGH\n";
            else if (userguess < compsecret)
                std::cout << "YOUR guess is too LOW\n";
            std::cout << '\n';
        }

    } while (compwin == false && userwin == false);
}