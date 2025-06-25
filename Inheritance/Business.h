#include <string>

#ifndef BUSINESS_H
#define BUSINESS_H

using namespace std;

class Business {
public:
    Business(double revenue);
    Business(); 
    ~Business();
    double getRevenue() const;
    void setRevenue(const double newRevenue);
    virtual void display() const;

private:
    double revenue;
};

#endif // BUSINESS
