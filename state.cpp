#include "state.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor
state::state() : stAbrr(), stName(), capital(), population(0), year(0), numCongress(0) {}

state::state(const string& st_abrr, const string& st_name, const string& the_Cap, int the_population, int the_year, int num_congress)
    : stAbrr(st_abrr), stName(st_name), capital(the_Cap), population(the_population), year(the_year), numCongress(num_congress) {
}

// Getter Methods
string state::getStateAbbr() const { return stAbrr; }
string state::getStateName() const { return stName; }
string state::getCapital() const { return capital; }
int state::getPopulation() const { return population; }
int state::getYear() const { return year; }
int state::getCongress() const { return numCongress; }

// Setter Methods
void state::setStateAbbr(const string& st_abrr) { stAbrr = st_abrr; }
void state::setStateName(const string& st_name) { stName = st_name; }
void state::setCapital(const string& the_Cap) { capital = the_Cap; }
void state::setPopulation(int the_population) { population = the_population; }
void state::setYear(int the_year) { year = the_year; }
void state::setCongress(int num_congress) { numCongress = num_congress; }

// Calculate residents per representative
float state::residents() const {
    (numCongress == 0) ? 0.00 : static_cast<double>(population) / numCongress;
    return 0;
}

// Display state information
void state::display() const {
    cout << left << setw(6) << "State"
        << setw(15) << "Name"
        << setw(12) << "Capital"
        << setw(12) << "Population"
        << setw(6) << "Year"
        << setw(6) << "#Congress" << endl
        << left << setw(6) << stAbrr
        << setw(15) << stName
        << setw(12) << capital
        << setw(12) << population
        << setw(6) << year;
    cout << setw(6) << numCongress << endl;
}