#include <iostream>
#include <ctime>

//random events of a soccer game and a random event commentary;
int main()
{
    int events, comm;
    int score1 = 0, score2 = 0;
    srand(time(NULL));

    events = (rand() % 15) + 1;

    for(int i = 1; i <= events; i++)
    {
        comm = (rand() % 6) + 1;
        
        std::cout << "\n[EVENT " << i << "]" << std::endl;
        std::cout << "===Commentary===\n";
        std::cout << "\n";
        switch(comm)
        { 
            case 1:
                std::cout << "Home Team scores a stunning goal\n";
                std::cout << "------------------------------\n\n";
                score1 += 1;
                break;
            case 2:
                std::cout << "Away Team scores a beautiful goal\n";
                std::cout << "------------------------------\n\n";
                score2 += 1;
                break;
            case 3:
                std::cout << "Home Team commits an offside\n";
                std::cout << "------------------------------\n\n";
                break;
            case 4:
                std::cout << "Away Team commits an offside\n";
                std::cout << "------------------------------\n\n";
                break;
            //this was the first time I encountered a jump to case error
            //I definitely corrected it and I obviously learned something new.
            case 5:{
                std::cout << "Home Team gets a PENALTY\n"
                          << "You can really feel the pressure on the striker\n"
                          << "Let's see if He can convert the scoreline\n";

                int x = (rand() % 4) + 1;
                if(x == 1)
                {
                    std::cout << "GOOOOOAAAALLLLL!!!\n"
                              << "He does convert the scoreline\n"
                              << "What a glorious Strike\n";
                    score1 += 1;
                }
                if(x == 2)
                {
                    int y = (rand() % 2) + 1;
                    if(y == 1)
                    {
                        std::cout << "WHAT A SAVE by the goalkeeper\n"
                                  << "The striker failed to convert the scoreline\n"
                                  << "The manager doesn't look happy\n";
                    }
                    else{
                        std::cout << "WHAT A MISS\n"
                                  << "I can't believe He missed the shot by a mile\n"
                                  << "He put wayyy too much power behind the ball\n"
                                  << "The manager is very infuriated\n";
                    }
                }
                if(x == 3)
                {
                    std::cout << "Away Team concedes a yellow card\n"
                              << "The Scoreline is shaky, let's see if the striker can convert\n";
                    int y = (rand() % 2) + 1;
                    if(y == 1)
                    {
                        std::cout << "GOOOOOOAAALLLLL\n"
                                  << "He does convert the scoreline\n"
                                  << "What a glorious strike\n"
                                  << "The fans are sooo electric and so is the manager\n";
                        score1 += 1;
                    }
                    else{
                        std::cout << "THE BALL IS SAVED\n"
                                  << "Such a shot doesn't bother a goalkeeper of such quality\n"
                                  << "He fails to convert, what a poor strike\n";
                    }
                }
                if(x == 4)
                {
                    std::cout << "GOODNESS, Away Team concedes a RED CARD\n"
                              << "They are less a man, and it's time for Home Team to convert\n";
                    int y = (rand() % 2) + 1;
                    if(y == 1)
                    {
                        std::cout << "GOODNESS ME, He does put the ball behind the goalkeeper\n"
                                  << "What a beautiful strike\n"
                                  << "He kept his cool and put the ball in the top corner\n";
                        score1 += 1;
                    }
                    else{
                        int r = (rand() % 2) + 1;
                        if(r == 1)
                        {
                            std::cout << "OH MY GOODNESS, the POST PREVENTED the GOAL\n"
                                      << "He was soo close, He beat the gooalkeeper but not the post\n"
                                      << "Sooo UNLUCKY\n";
                        }
                        else{
                            std::cout << "HE MISSED the shot\n"
                                      << "That was sooo close to the target\n";
                        }
                    }

                }
                std::cout << "------------------------------\n\n";
                break;
            }
            case 6:{
                std::cout << "Away Team gets a PENALTY\n"
                          << "The Team really needs that goal\n"
                          << "Let's see if He can convert the scoreline\n";

                int x = (rand() % 4) + 1;
                if(x == 1)
                {
                    std::cout << "GOOOOOAAAALLLLL!!!\n"
                              << "OHHHHHHH HE changes the scoreline\n"
                              << "Superb, It was a well struck shot\n";
                    score2 += 1;
                }
                if(x == 2)
                {
                    int y = (rand() % 2) + 1;
                    if(y == 2)
                    {
                        std::cout << "WHAT A SAVE by the goalkeeper\n"
                                  << "He jumped into the top right corner to save the ball\n"
                                  << "The striker is dissapointed\n"
                                  << "The manager has his hands on his head\n";
                    }
                    else{
                        std::cout << "WHAT A MISS\n"
                                  << "I can't believe He missed it\n"
                                  << "You can see the dissapointment on his face\n"
                                  << "He'll be kicking himself in the locker room for sure\n";
                    }
                }
                if(x == 3)
                {
                    std::cout << "The referee shows Home Team's player a yellow\n"
                              << "He showed some leniency with the choice of card\n"
                              << "Let's see if the striker can make use of this golden opportunity\n";
                    int y = (rand() % 2) + 1;
                    if(y == 1)
                    {
                        std::cout << "GOOOOOOAAALLLLL\n"
                                  << "The goalkeeper couldn't hold on to the ball\n"
                                  << "There was sooo much power behind the ball\n"
                                  << "A top class strike from a top class player\n"
                                  << "This goal has electrified the Stadium\n";
                        score2 += 1;
                    }
                    else{
                        std::cout << "THE BALL IS SAVED\n"
                                  << "A shot of such quality wouldn't bother the keeper\n"
                                  << "He has a lot of training to do if He wants to score penalties\n";
                    }
                }
                if(x == 4)
                {
                    std::cout << "GOODNESS, Home Team picks a RED CARD\n"
                              << "They are less a man, and it's time for Home Team to take the advantage\n";
                    int y = (rand() % 2) + 1;
                    if(y == 1)
                    {
                        std::cout << "OHHHH HEAVENS, He sent the keeper the wrong way with style\n"
                                  << "What a cheeky strike\n"
                                  << "Had a beautiful run up and put the ball in the left corner\n";
                        score2 += 1;
                    }
                    else{
                        int r = (rand() % 2) + 1;
                        if(r == 1)
                        {
                            std::cout << "OH MY GOODNESS, the VERTICAL BAR denies Him his goal\n"
                                      << "Just when He thought He had made it past the goalkeeper\n"
                                      << "Sooo UNFORTUNATE\n"
                                      << "Scoreline remains the same\n";
                        }
                        else{
                            std::cout << "HE MISSED the shot\n"
                                      << "That wayyy off the target\n";
                        }
                    }

                }
                std::cout << "------------------------------\n\n";
                break;
            }
        }
    }

    std::cout << "\nIt's full time, what an electric game this has been\n"
              << "[FULL TIME RESULTS]\n"
              << score1 << " : " << score2;
    if(score1 > score2)
        std::cout << "\nThe Home team wins\n";
    else if(score1 < score2)
        std::cout << "\nThe Away team is tonight's winner\n";
    else if(score1 == score2)
        std::cout << "\nIt's a Draw\n";

    return (0);
}