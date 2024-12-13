#include <iostream>
#include <fstream>
#include <string>
#include "state.h"

using namespace std;

// Function Prototypes
void getStates(state states[NUM_STATES], const string& filename);
void searchViaAbbreviation(const state state[], const string& st_abbr);
void searchViaYear(const state state[], int year);

int main() {
    const int NUM_STATES = 50;
    state states[NUM_STATES];

    // Load states from the file
    getStates(states, "USStates.txt");

    int select;

    // do-while loop
    do {
        cout << "\nChoose an option:\n"
            << "1. Search by state abbreviation.\n"
            << "2. Search by year of statehood.\n"
            << "3. Quit.\n"
            << "Enter your selection (1-3): ";
        cin >> select;

        if (select == 1) {
            string st_abbr;
            cout << "Enter state abbreviation (e.g., MI): ";
            cin >> st_abbr;
            searchViaAbbreviation(states, st_abbr);
        }
        else if (select == 2) {
            int year;
            cout << "Enter year of statehood: ";
            cin >> year;
            searchViaYear(states, year);
        }
        else if (select == 3) {
            cout << "Exiting the program!" << endl;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (select != 3);

    return 0;
}

// Load states from the file
void getStates(state states[NUM_STATES], const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Error: Can't be open file. " << filename << endl;
        return;
    }

    string abbr, name, capital;
    int population, year, numCongress;
    int i = 0;

    while (inputFile >> name >> abbr >> capital >> population >> year >> numCongress && i < NUM_STATES) {
        states[i].setStateAbbr(abbr);
        states[i].setStateName(name);
        states[i].setCapital(capital);
        states[i].setPopulation(population);
        states[i].setYear(year);
        states[i].setCongress(numCongress);
        i++;
    }

    inputFile.close();
}

// Search for a state by abbreviation
void searchViaAbbreviation(const state state[], const string& st_abbr) {
    for (int i = 0; i < NUM_STATES; ++i) {
        if (state[i].getStateAbbr() == st_abbr) {
            state[i].display();
            return;
        }
    }
    cout << "Abbreviation " << st_abbr << " was not found." << endl;
}

// Search for states by year of statehood
void searchViaYear(const state state[], int year) {
    bool found = false;
    for (int i = 0; i < NUM_STATES; ++i) {
        if (state[i].getYear() == year) {
            state[i].display();
            found = true;
        }
    }
    if (!found) {
        cout << "No state found with the year " << year << endl;
    }
}
