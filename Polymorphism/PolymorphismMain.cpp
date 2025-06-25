#include <iostream>
#include <string>
#include "Rectangle.cpp"
#include "Square.cpp"

using namespace std;
int main() {
    // Create a Rectangle object
    Rectangle myRectangle(3.0, 4.0);
    // Display the rectangle information
    myRectangle.display();

    cout << "Area of Rectangle: " << myRectangle.area() << endl;
    cout << "Circumference of Rectangle: " << myRectangle.circumference() << endl;

    // Create a Square object
    Square mySquare(4.0);
    // Display the square information
    mySquare.display();
    cout << "Area of Square: " << mySquare.area() << endl;
    cout << "Circumference of Square: " << mySquare.circumference() << endl;

    return 0;
}