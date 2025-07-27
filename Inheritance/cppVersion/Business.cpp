#include <iostream>
#include "Business.h"

double Business::taxRate = 0.0;

Business::Business(double revenue) : revenue(revenue) {}

Business::Business() : revenue(0.0) {} // Default constructor initializes revenue to 0.0

Business::~Business() {}

double Business::getRevenue() const { return revenue; }

void Business::setRevenue(const double newRevenue) { revenue = newRevenue; }

double Business::getTaxRate() { return Business::taxRate; }

void Business::setTaxRate(double newTaxRate) { Business::taxRate = newTaxRate; }

void Business::display() const {
    std::cout << "Revenue: " << revenue << std::endl;
}

double inline Business::calculateTax(double revenue) { return revenue * Business::taxRate; }