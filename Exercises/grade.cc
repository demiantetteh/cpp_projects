/**
 * This program reads input from a filename entered by the user
 * takes in the student's name and scores from the input filename,
 * calculates the student's average grade, and then the classaverage.
*/


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAX_STUDENTS = 100;
const int MAX_GRADES = 100;
const double TERMINATING_VALUE = -99.0;



void openFile(ifstream& fileStream);
/**
 * openFile: Prompts the user to enter a file name, and opens it
 * @fileStream: the object name(variable) for the class ifstream
*/

void closeFile(ifstream& fileStream);
/**
 * closeFile: closes the open file
 * @fileStream: the object name(variable) for the class ifstream
*/

void getData(ifstream& fileStream, string names[], double averages[], int& count);
/**
 * getData: reads from the file student names, and grades and calculates
 *          the average for a student
*/

double classAvg(double averages[], int count);
/**
 * classAvg: Calculates the average of the class
 * Return:   The classaverage value.
*/

void display(string names[], double averages[], int count, double classAverage);
/**
 * display: Displays the student names, their averages, and the class
 *          average in a formatted ouput.
*/

int main() {
    ifstream inFile;
    string studentNames[MAX_STUDENTS];
    double studentAverages[MAX_STUDENTS];

    openFile(inFile);

    int studentCount = 0;
    getData(inFile, studentNames, studentAverages, studentCount);

    closeFile(inFile);

    double classAverage = classAvg(studentAverages, studentCount);

    display(studentNames, studentAverages, studentCount, classAverage);

    return 0;
}

void openFile(ifstream& fileStream) {
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;

    fileStream.open(fileName);

    while (!fileStream.is_open()) {
        cerr << "Error opening file. Please enter a valid file name: ";
        cin >> fileName;
        fileStream.open(fileName);
    }
}

void closeFile(ifstream& fileStream) {
    fileStream.close();
}

void getData(ifstream& fileStream, string names[], double averages[], int& count) {
    string name;
    double grade;

    while (fileStream >> name) {
        fileStream >> grade;

        double sum = 0.0;
        int gradeCount = 0;

        while (grade != TERMINATING_VALUE) {
            sum += grade;
            gradeCount++;
            fileStream >> grade;
        }

        names[count] = name;
        averages[count] = (gradeCount > 0) ? sum / gradeCount : 0.0;
        count++;
    }
}

double classAvg(double averages[], int count) {
    if (count == 0) {
        return 0.0;
    }

    double sum = 0.0;
    for (int i = 0; i < count; ++i) {
        sum += averages[i];
    }

    return sum / count;
}

void display(string names[], double averages[], int count, double classAverage) {
    cout << setw(15) << left << "Student Name" << setw(10) << right << "Average" << endl;

    for (int i = 0; i < count; ++i) {
        cout << setw(15) << left << names[i] << fixed << setprecision(2) << setw(10) << right << averages[i] << endl;
    }

    cout << "\nClass Average -- " << fixed << setprecision(2) << classAverage << endl;
}
