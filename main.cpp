#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main() {
    BasicShape* shapes[5];

    shapes[0] = new Rectangle(4, 5, "Big Rectangle");
    shapes[1] = new Rectangle(2, 3, "Small Rectangle");
    shapes[2] = new Circle(0, 0, 3, "Large Circle");
    shapes[3] = new Circle(1, 1, 1.5, "Tiny Circle");
    shapes[4] = new Square(4, "Perfect Square");

    for (int i = 0; i < 5; i++) {
        cout << "Shape: " << shapes[i]->getName()
             << " | Area: " << shapes[i]->getArea() << endl;
    }

    for (int i = 0; i < 5; i++) {
        delete shapes[i];
    }

    return 0;
}
