#include <iostream>

double calculate_annual_mortgage_cost(double initial_loan_balance);
//calculates annual mortgage cost

double calculate_annual_after_tax_cost(double annual_mortgage_cost, double tax_savings);
//calculates annual after tax cost
int main() {
    double price_of_house, down_payment, initial_loan_balance;
    double annual_mortgage_cost, tax_savings, annual_after_tax_cost;
    const double tax_rate = 0.35; // 35% tax rate

    char repeat_calculation;
    do {
        // Input the price of the house and down payment
        std::cout << "Enter the price of the house: $";
        std::cin >> price_of_house;

        std::cout << "Enter the down payment: $";
        std::cin >> down_payment;

        // Calculate the initial loan balance
        initial_loan_balance = price_of_house - down_payment;

        // Calculate the annual mortgage cost
        annual_mortgage_cost = calculate_annual_mortgage_cost(initial_loan_balance);

        // Calculate the tax savings
        tax_savings = tax_rate * (0.06 * initial_loan_balance);

        // Calculate the annual after-tax cost
        annual_after_tax_cost = calculate_annual_after_tax_cost(annual_mortgage_cost, tax_savings);

        // Display the result
        std::cout << "The annual after-tax cost of the new house for the first year is: $"
                  << annual_after_tax_cost << std::endl;

        // Ask the user if they want to repeat the calculation
        std::cout << "Do you want to calculate for another house? (y/n): ";
        std::cin >> repeat_calculation;
    } while (repeat_calculation == 'y' || repeat_calculation == 'Y');

    std::cout << "Thank you for using the program. Goodbye!" << std::endl;

    return 0;
}
// Function to calculate the annual mortgage cost
double calculate_annual_mortgage_cost(double initial_loan_balance) {
    double principal_payment = 0.03 * initial_loan_balance; // 3% of the initial loan balance
    double interest_payment = 0.06 * initial_loan_balance;  // 6% of the initial loan balance
    return principal_payment + interest_payment;
}

// Function to calculate the annual after-tax cost
double calculate_annual_after_tax_cost(double annual_mortgage_cost, double tax_savings) {
    return annual_mortgage_cost - tax_savings;
}
