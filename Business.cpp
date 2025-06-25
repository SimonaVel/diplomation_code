#include <iostream>
#include "Business.h"

Business::Business(double revenue) : revenue(revenue) {}

Business::Business() : revenue(0.0) {} // Default constructor initializes revenue to 0.0

Business::~Business() {}

double Business::getRevenue() const { return revenue; }

void Business::setRevenue(const double newRevenue) { revenue = newRevenue; }

void Business::display() const {
    std::cout << "Revenue: " << revenue << std::endl;
}