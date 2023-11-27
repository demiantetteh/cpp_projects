#include <iostream>

double calcMarkAsPercentage(int questions, int correct, int wrong);
/**
 * calcMarkAsPercentage: Calculates the student's final mark%
 * @questions: #Questions
 * @correct: #Correct answers
 * @wrong: #Wrong answers
 * Return: Percentage of student's final mark
 */

int main()
{
    char ans;
    do
    {
        int questions, correct, wrong;
        double score;
        std::cout << "************************************\n"
                  << "         EXAM FINAL MARKS           \n"
                  << "************************************\n\n";

        //1 point = 1 correct answer
        //-0.25 = 1 wrong answer
        
        std::cout << "Enter the #number of Questions: ";
        std::cin >> questions;
        std::cout << "Enter the #number of Correct Answers: ";
        std::cin >> correct;
        std::cout << "Enter the #number of Wrong Answers: ";
        std::cin >> wrong;

        std::cout << '\n';

        if((correct + wrong == questions) && (wrong >= 0) && (correct >= 0))
        {   
            score = calcMarkAsPercentage(questions,correct, wrong);
            std::cout.setf(std::ios::fixed);
            std::cout.setf(std::ios::showpoint);
            std::cout.precision(2);

            std::cout << "--------RESULTS---------\n"
                      << "Score(Correct): " << correct << std::endl
                      << "Score(Wrong): " << (wrong * -0.25) << std::endl
                      << "Questions: " << questions << std::endl
                      << "-------------------------\n"
                      << "PERCENTAGE: " << score << "%" << std::endl;
        }
        else{
            std::cout << "Please Enter valid #numbers for input\n"
                      << "RESTART the program\n";
        }
        std::cout << "\nPress 'R' to restart the program\n"
                  << "Press any other key to exit\n=>";
        std::cin >> ans;
        std::cout << '\n';

    }
    while (ans == 'R' || ans == 'r');
}
double calcMarkAsPercentage(int questions, int correct, int wrong)
{
    double score = correct - (0.25 * wrong);
    double percentage = (score / questions) * 100;

    return (percentage);
}