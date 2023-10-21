#include <iostream>
#include "Point.h"

int main() {
    // Create a Point object and initialize it
    Point myPoint(1.0, 2.0);

    // Display the initial coordinates
    std::cout << "Initial ";
    myPoint.affiche();

    // Move the point
    myPoint.deplace(3.0, 4.0);

    // Display the updated coordinates
    std::cout << "After Translation ";
    myPoint.affiche();

    return 0;
}
