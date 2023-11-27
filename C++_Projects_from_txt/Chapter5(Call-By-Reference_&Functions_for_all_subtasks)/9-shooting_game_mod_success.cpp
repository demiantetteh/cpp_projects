#include <iostream>
#include <ctime>
#include <cstdlib>

// GLOBAL DUEL VARIABLES
double aaronAccuracy = 1 / 3.0;
double bobAccuracy = 1 / 2.0;
double charlieAccuracy = 1;
bool aaronAlive = true, bobAlive = true, charlieAlive = true;

void shoot(bool &targetAlive, double accuracy);
/**
 * shoot: Simulates a single shooting @targetAlive
 * @targetAlive: The one being shot at
 * @accuracy: The accuracy of the shooter
 */

std::string startDuel();
/**
 * startDuel: Simulates shooting duel till last man standing
 *            Uses the shoot function, and strategy of killing
 *            the most accurate shooter
 * return: The name of the winner
 */

void reset();
/**
 * reset: Resets everyones Alive status back to true
 */

int main()
{
    // variables to keep track of winners scores
    int scoreA = 0, scoreB = 0, scoreC = 0;
    std::string winner;

    srand(time(NULL));

    for (int cnt = 1; cnt <= 500; cnt++)
    {
        winner = "NONE";
        winner = startDuel();
        std::cout << "\n------------------------\n";
        std::cout << "Winner is " << winner << std::endl;
        std::cout << "--------------------------\n";

        if (winner == "Aaron")
            scoreA += 1;
        else if (winner == "Bob")
            scoreB += 1;
        else if (winner == "Charlie")
            scoreC += 1;

        reset();
    }
    std::cout << "\n========================\n"
              << "    TOTAL DUEL SCORES   \n"
              << "========================\n";
    std::cout << "AARON: " << scoreA << std::endl;
    std::cout << "BOB: " << scoreB << std::endl;
    std::cout << "CHARLIE: " << scoreC << std::endl;
    std::cout << "\n\nTHANKS FOR PLAYING\\BETTING\n\n";
}

void reset()
{
    aaronAlive = true;
    bobAlive = true;
    charlieAlive = true;
}

void shoot(bool &targetAlive, double accuracy)
{
    double shot = rand() / static_cast<double>(RAND_MAX);

    if (shot < accuracy)
        targetAlive = false;
    else
        targetAlive = true;
    
    //You can comment the below statement out
    std::cout << "\nRandom Accuracy of shot: " << shot;
}
std::string startDuel()
{

    bool twoAlive = true;
    int round = 1;
    std::string winner;
    int miss = 1; // Aaron's intentional miss in order to keep him alive
                  // since Bob and Charlie would shoot at each other
                  // occurs just once after a winner is declared
    while (twoAlive)
    {
        std::cout << "\n*******************\n"
                  << "ROUND " << round << " START!!\n"
                  << "*******************\n";

        if (aaronAlive)
        {
            if (charlieAlive)
            {
                if (miss == 1)
                {
                    std::cout << "\nAaron shot at Charlie and missed\n"
                              << "Intentional" << std::endl;
                }
                else
                {
                    shoot(charlieAlive, aaronAccuracy);
                    std::cout << "\nAaron shot at Charlie";
                    if (charlieAlive)
                        std::cout << " and missed the shot\n";
                    else if (!charlieAlive)
                    {
                        std::cout << " and hit the target\n";
                        std::cout << "KILL FOR AARON\n";
                    }
                }
            }
            else if (bobAlive)
            {
                // this if statement would never occur
                if (miss == 1)
                {
                    std::cout << "\nAaron shot at Bob and missed\n"
                              << "Intentional" << std::endl;
                }
                else
                {
                    shoot(bobAlive, aaronAccuracy);
                    std::cout << "\nAaron shot at Bob";
                    if (bobAlive)
                        std::cout << " and missed the shot\n";
                    else if (!bobAlive)
                    {
                        std::cout << " and hit the target\n";
                        std::cout << "KILL FOR AARON\n";
                    }
                }
            }
        }
        if (bobAlive)
        {
            if (charlieAlive)
            {
                shoot(charlieAlive, bobAccuracy);
                std::cout << "\nBob shot at Charlie";
                if (charlieAlive)
                    std::cout << " and missed the shot\n";
                else if (!charlieAlive)
                {
                    std::cout << " and hit the target\n";
                    std::cout << "KILL FOR BOB\n";
                }
            }
            else if (aaronAlive)
            {
                shoot(aaronAlive, bobAccuracy);
                std::cout << "\nBob shot at Aaron";
                if (aaronAlive)
                    std::cout << " and missed the shot\n";
                else if (!aaronAlive)
                {
                    std::cout << " and hit the target\n";
                    std::cout << "KILL FOR BOB\n";
                }
            }
        }
        if (charlieAlive)
        {
            if (bobAlive)
            {
                shoot(bobAlive, charlieAccuracy);
                std::cout << "\nCharlie shot at Bob";
                if (bobAlive)
                    std::cout << " and missed the shot\n";
                else if (!bobAlive)
                {
                    std::cout << " and hit the target\n";
                    std::cout << "KILL FOR CHARLIE\n";
                }
            }
            else if (aaronAlive)
            {
                shoot(aaronAlive, charlieAccuracy);
                std::cout << "\nCharlie shot at Aaron";
                if (aaronAlive)
                    std::cout << " and missed the shot\n";
                else if (!aaronAlive)
                {
                    std::cout << " and hit the target\n";
                    std::cout << "KILL FOR CHARLIE\n";
                }
            }
        }

        if (aaronAlive == true && bobAlive == false && charlieAlive == false)
        {
            twoAlive = false;
            winner = "Aaron";
        }
        if (aaronAlive == false && bobAlive == true && charlieAlive == false)
        {
            twoAlive = false;
            winner = "Bob";
        }
        if (aaronAlive == false && bobAlive == false && charlieAlive == true)
        {
            twoAlive = false;
            winner = "Charlie";
        }

        round++;
        miss = rand() + 3;
    }
    return (winner);
}