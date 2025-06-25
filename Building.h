#include <string>

#ifndef BUILDING_H
#define BUILDING_H

using namespace std;

class Building {
public:
    Building(string address);
    ~Building();
    string getAddress() const;
    void setAddress(const string& newAddress);
    virtual void display() const;

    // Experiment for diamond problem
    double getRevenue() const;
    void setRevenue(double revenue);

private:
    string address;
};

#endif