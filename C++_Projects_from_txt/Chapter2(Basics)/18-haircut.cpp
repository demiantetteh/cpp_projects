#include <iostream>

int main()
{
    int gender, story, food;

    std::cout << "***************************************\n"
              << "          HAIRCUT DETERMINER           \n"
              << "***************************************\n\n";

    std::cout << "ENTER THE DIGIT OF THE OPTION YOU CHOOSE\n\n";

    std::cout << "Are you a Male(0) or Female(1): ";
    std::cin >> gender;

    if(gender == 0)
    {
        std::cout << "You are a male\n";
        std::cout << '\n';
        std::cout << "Do you love Superheroes(0) or Super Villians(1): ";
        std::cin >> story;
        if(story == 0)
        {
            std::cout << "You love Superheroes!!!\n";
            std::cout << '\n';
            std::cout << "Do you love Steak(0) or Sushi(1): ";
            std::cin >> food;

            if(food == 0)
            {
                std::cout << "Of course Steak is very tasty!!\n";
                std::cout << '\n'
                          << "YOU SHOULD GET A FLAT TOP <3 <3 <3 !!\n\n";
            }
            else if(food == 1)
            {
                std::cout << "Sushi is yummy!!\n"
                          << '\n'
                          << "YOU SHOULD GET A POMPADOUR <3 <3 <3 !!\n\n";
            }
            else{
                std::cout << "PLEASE RESTART THE APP AND ENTER  A VALID DIGIT(OPTION)\n";
            }
        }
        else if(story == 1)
        {
            std::cout << "You're a fan of Villians!!!\n";
            std::cout << '\n';
            std::cout << "YOU SHOULD GET A MOHAWK <3 <3 <3!!\n\n";
        }
        else{
            std::cout << "PLEASE RESTART THE APP AND ENTER A VALID DIGIT(OPTION)\n";
        }
    }
    else if(gender == 1)
    {
        std::cout << "You are a female\n";
        std::cout << '\n';
        std::cout << "Do you love Superheroes(0) or Super Villians(1): ";
        std::cin >> story;
        if(story == 0)
        {
            std::cout << "You love Superheroes!!!\n";
            std::cout << '\n';
            std::cout << "Do you love Anime(0) or Sitcom(1): ";
            std::cin >> food;

            if(food == 0)
            {
                std::cout << "Of course Anime is the BESTTTTTT!!\n";
                std::cout << '\n'
                          << "YOU SHOULD GO WITH BANGS <3 <3 <3 !!\n\n";
            }
            else if(food == 1)
            {
                std::cout << "Sitcoms are amazing!!\n"
                          << '\n'
                          << "YOU SHOULD GET A BOB <3 <3 <3 !!\n\n";
            }
            else{
                std::cout << "PLEASE RESTART THE APP AND ENTER  A VALID DIGIT(OPTION)\n";
            }
        }
        else if(story == 1)
        {
            std::cout << "You're a fan of Villians!!!\n";
            std::cout << '\n';
            std::cout << "YOU SHOULD GET A MOHAWK <3 <3 <3!!\n\n";
        }
        else{
            std::cout << "PLEASE RESTART THE APP AND ENTER A VALID DIGIT(OPTION)\n";
        }
    }
    else{
        std::cout << "PLEASE RESTART THE APP AND ENTER A VALID DIGIT(OPTION)";
    }
}