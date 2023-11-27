#include <iostream>
#include <ctime>
#include <cstdlib>

void shoot(bool &targetAlive, double accuracy);
/**
 * shoot: Simulates a single shot at targetAlive
 * @targetAlive: The person being shot at
 * @accuracy: The accuracy of the shooter
 */

std::string startDuel(int &count);
/**
 * startDuel: uses shoot() with strategy of
 *            killing the deadliest shooter first
 *            loops until last man standing.
 * @count: Checks for how many times it looped
 * return: the name of the last man standing
 */

int main()
{
    int count = 0, scoreA = 0, scoreB = 0, scoreC = 0, i;
    for (i = 0; i < 1000; i++)
    {
        std::string win = startDuel(count);

        std::cout << "----END------\n"
                  << "Winner: " << win << std::endl;
        if (win == "Bob")
            scoreB += 1;
        else if (win == "Aaron")
            scoreA += 1;
        else if (win == "Charles")
            scoreC += 1;
    }
    std::cout << "Aaron: " << scoreA << std::endl;
    std::cout << "Bob: " << scoreB << std::endl;
    std::cout << "Charles: " << scoreC << std::endl;

    std::cout << "Count: " << count << std::endl;
    std::cout << "Iterations: " << i << std::endl;
}
void shoot(bool &targetAlive, double accuracy)
{
    double check, point;
    check = (static_cast<double>(rand())) / (RAND_MAX);
    point = accuracy / 2.0;

    if (check >= point && check < accuracy) // target is hit when check is less than the accuracy(like taking shots in FIFA)
        targetAlive = false;
    else
        targetAlive = true;
}
std::string startDuel(int &count)
{
    srand(time(NULL));
    std::string winner = "None";

    bool AaronAlive = true;
    bool BobAlive = true;
    bool CharlieAlive = true;

    double AaronAccuracy = 1.0 / 3.0;
    double BobAccuracy = 1.0 / 2.0;
    double CharlieAccuracy = 1.0;

    int firstshot = 1;

    do
    {
        // To compensate for the inequities in their marksmanship skills, it is decided
        // that the contestants would fire in turns with lowest accuracy first

        // Aaron's turn
        //Aaron misses first shot

        if (AaronAlive)
        {
            if(firstshot = 1)
            {
                shoot(CharlieAlive, 0);
                firstshot = 100;
            }
            else if (CharlieAlive)
                shoot(CharlieAlive, AaronAccuracy);
            else if (BobAlive)
                shoot(BobAlive, AaronAccuracy);
        }

        // Bob's turn
        if (BobAlive)
        {
            if (CharlieAlive)
                shoot(CharlieAlive, BobAccuracy);
            else if (AaronAlive)
                shoot(BobAlive, BobAccuracy);
        }

        // Charlie's turn
        if (CharlieAlive)
        {
            if (BobAlive)
                shoot(BobAlive, CharlieAccuracy);
            else if (AaronAlive)
                shoot(AaronAlive, CharlieAccuracy);
        }

        // Declaring Winner
        if (AaronAlive == true && CharlieAlive == false && BobAlive == false)
            winner = "Aaron";
        else if (AaronAlive == false && CharlieAlive == true && BobAlive == false)
            winner = "Charlie";
        else if (AaronAlive == false && CharlieAlive == false && BobAlive == true)
            winner = "Bob";

        count++;

    } while (winner == "None");

    return (winner);
}