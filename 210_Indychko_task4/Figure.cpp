#include "Figure.hpp"

Figure::Figure(double _x, double _y)
: x_center(_x), y_center(_y) {}

Figure::~Figure() {}

/////////////////////////////////////

Circle::Circle(double _x, double _y, double _rad)
: Figure(_x, _y), radius(_rad) {}

Circle::~Circle() {}

void Circle::Increase(double k) { radius *= k; }

double Circle::GetSquare() { return 3.1415 * radius; }

/////////////////////////////////////

Square::Square(double _x, double _y, double _x_A, double _y_A, double _side)
: Figure(_x, _y), x_A(_x_A), y_A(_y_A), side_length(_side) {}

Square::~Square() {}

void Square::Increase(double k) {
    side_length *= k;
    x_A *= k;
    y_A *= k;
}

double Square::GetSquare() { return side_length * side_length; }

/////////////////////////////////////

Triangle::Triangle(double _x, double _y, double _x_A, double _y_A, double _rad)
: Figure(_x, _y), x_A(_x_A), y_A(_y_A), inscr_rad(_rad) {}

Triangle::~Triangle() {}

void Triangle::Increase(double k) {
    inscr_rad *= k;
    x_A *= k;
    y_A *= k;
}
