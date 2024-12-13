#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <string>

using namespace std;

const int NUM_STATES = 50;

class state {
private:
    string stAbrr, stName, capital;
    int population;
    int year;
    int numCongress;

public:
    // Constructor
    state();
    state(const string& st_abrr, const string& st_name, const string& the_Cap, int the_population, int the_year, int num_congress);

    // Getter Methods
    string getStateAbbr() const;
    string getStateName() const;
    string getCapital() const;
    int getPopulation() const;
    int getYear() const;
    int getCongress() const;

    // Setter Methods
    void setStateAbbr(const string& st_abrr);
    void setStateName(const string& st_name);
    void setCapital(const string& the_Cap);
    void setPopulation(int the_population);
    void setYear(int the_year);
    void setCongress(int num_congress);

    // Utility Method
    float residents() const;

    // Method to output the state information
    void display() const;

};

#endif
