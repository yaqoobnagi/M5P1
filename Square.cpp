#include "Square.h"

Square::Square(double s, string n) : Rectangle(s, s) {
    side = s;
    setName(n);
}
