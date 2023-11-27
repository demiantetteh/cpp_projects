#include <iostream>
#include <cmath>

double basalmetabolicrate(double weight);
//returns: calories needed for basal metabolism

double physicalactivity(double intensity, double weight, double minutes);
//returns: calories required for physical activities

int main()
{
    double weight, mins, intensity;
    double basal,  activity, calperserving;
    double totalcal, digestion, servings;


    std::cout << "Enter your weight in Pounds(lbs): ";
    std::cin >> weight;
    std::cout << "Enter the number of minutes for which you exercise daily: ";
    std::cin >> mins;
    std::cout << "Enter the intensity of the physical activities: ";
    std::cin >> intensity;
    std::cout << "Enter the #number of calories in your favorite food per serving: ";
    std::cin >> calperserving;

    basal = basalmetabolicrate(weight);
    activity = physicalactivity(intensity, weight, mins);
    totalcal = basal + activity;
    digestion = totalcal * 0.1;
    totalcal += digestion;
    servings = totalcal / calperserving;

    std::cout << "\nYou'll require " << servings << " servings of your favorite food\n"
              << "to maintain your current weight, carry out basal metabolism, and physical activities\n";
    
    return (0);
}
double basalmetabolicrate(double weight)
{
    double x;
    x = 70 * pow((weight/22.0),0.756);
    return (x);
}
double physicalactivity(double intensity, double weight, double minutes)
{
    double x;
    x = 0.035 * intensity * weight * minutes;
    return (x);
}