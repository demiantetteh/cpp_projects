#include <iostream>
#include <cctype>

using namespace std;

string getEmailAddress() {
    string email;
    cout << "Enter an email address (firstname.lastname@uleth.ca): ";
    cin >> email;
    return email;
}

void extract(const string& email, string& firstname, string& lastname) {
    int dotIndex = email.find('.');
    int atIndex = email.find('@');
    
    firstname = email.substr(0, dotIndex);
    lastname = email.substr(dotIndex + 1, atIndex - dotIndex - 1);
}

string capitalize(const string& str) {
    string result = str;
    result[0] = toupper(result[0]);
    return result;
}

void display(const string& firstname, const string& lastname) {
    cout << capitalize(lastname) << ", " << capitalize(firstname) << endl;
}

int main() {
    char choice;
    do {
        string email = getEmailAddress();
        string firstname, lastname;
        
        extract(email, firstname, lastname);
        display(firstname, lastname);
        
        cout << "Try again (Y/N) -- ";
        cin >> choice;

    } while (toupper(choice) == 'Y');

    cout << "Good bye!" << endl;

    return 0;
}