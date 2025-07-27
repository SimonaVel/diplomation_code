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

private:
    string address;
};
#endif