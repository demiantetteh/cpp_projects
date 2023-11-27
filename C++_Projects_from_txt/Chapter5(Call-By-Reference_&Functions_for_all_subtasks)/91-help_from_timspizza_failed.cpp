#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

#define MAX_RANGE 1.0

// global variables
double accuracy[3] = {1.0, 0.5, 1.0/3.0};
bool is_alive[3] = {true};
string names[3] = {"Charles", "Bob", "Aaron"};
 //Sorted on their accuracy
void shoot(bool &targetAlive, double accuracy);
string startDuel(int &count);
bool is_finished();
int find_deadlist(int self_num);

int main(void)
{
    int count = 0;
    int scores[3] = {0};
    for (int i = 0; i < 1000; i++)
    {
        memset(is_alive, true, 3 * sizeof(bool));
        string winner = startDuel(count);
        if (winner == "Aaron")
        {
            ++scores[2];
        }
        else if (winner == "Bob")
        {
            ++scores[1];
        }
        else
        {
            ++scores[0];
        }
    }

    return 0;
}

void shoot(bool &targetAlive, double accuracy)
{
    double random = rand() / (double)RAND_MAX;
    // rand() returns a random value range from [0, RAND_MAX]
    //AND HERE'S THE PROBLEM, if you dont convert RAND_MAX to double, "random" will be int instead double, that's really annoying for beginners 
    if (random < accuracy)
    {
        targetAlive = false;
    }
}

string startDuel(int &count)
{

    ++count;
    bool is_first_round = true;
    while (!is_finished())
    {
        // 1. find the deadlist shooter
        /* 2. fire in turns starting with Aaron, followed by
                Bob, and then by Charlie */
        for (int i = 2; i >= 0 && !is_finished(); i--)
        {
            if (!is_alive[i])
            {
                continue;
            }
            if (i == 0 && is_first_round) // charles kills nobody in his 1st round
            {
                is_first_round = false;
                continue;
            }
            int deadlist = find_deadlist(i);
            shoot(is_alive[deadlist], accuracy[i]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (is_alive[i])
        {
            return names[i];
        }
    }
    return ("0"); // wont be reached, just to avoid warnings
}

bool is_finished()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        count += is_alive[i]; // false = 0, true = 1
    }
    return count == 1; // if count == 1, return true, else false
}

int find_deadlist(int self_num)
{
    for (int i = 0; i < 3; i++)
    {
        if (i == self_num)
        {
            continue;
        }
        if (is_alive[i])
        {
            return i;
        }
    }
    return (0); // wont be reached, just to avoid warnings
}