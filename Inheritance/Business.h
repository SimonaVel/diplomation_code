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

    static double getTaxRate();
    static void setTaxRate(double newTaxRate);
    virtual void display() const;

    static inline double calculateTax(double revenue);

private:
    double revenue;
    static double taxRate;
};

#endif // BUSINESS
