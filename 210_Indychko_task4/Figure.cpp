#include "Figure.hpp"
#include <math.h>
#include <iostream>

Figure::Figure(double _x, double _y)
: x_center(_x), y_center(_y) {}

Figure::~Figure() {}

/*///////////////////////////////////*/

Circle::Circle(double _x, double _y, double _rad)
: Figure(_x, _y), radius(_rad) {}

Circle::~Circle() {}

///Function multiplies radius by k
void Circle::Increase(double k) { radius *= k; }

double Circle::GetSquare() { return M_PI * radius * radius; }

/*///////////////////////////////////*/

Square::Square(double _x, double _y, double _x_A, double _y_A, double _side)
: Figure(_x, _y), x_A(_x_A), y_A(_y_A), side_length(_side) {}

Square::~Square() {}

///Function multiplies side_length by k
void Square::Increase(double k) {
    side_length *= k;
    x_A *= k;
    y_A *= k;
}

double Square::GetSquare() { return side_length * side_length; }

/*///////////////////////////////////*/

Triangle::Triangle(double _x, double _y, double _x_A, double _y_A, double _rad)
: Figure(_x, _y), x_A(_x_A), y_A(_y_A), inscr_rad(_rad) {}

Triangle::~Triangle() {}

///Function multiplies side_length by k
void Triangle::Increase(double k) {
    inscr_rad *= k;
    x_A *= k;
    y_A *= k;
}

double Triangle::GetSquare() { return inscr_rad * inscr_rad * 6 * sqrt(3); }

/*///////////////////////////////////*/

Draft::Draft(int _size)
: size(_size), current_size(0)
{
    arr = new Figure*[size];
}

Draft::~Draft() { delete [] arr; }


///Function adds new element to the end of array
void Draft::AddFigure(Figure* _figure) {
    if(current_size < size) {
        arr[current_size] = _figure;
        current_size++;
    } else {
        std::cout << "The draft is full!" << std::endl;
    }
}

///Function deletes arr[pos] and moves the tail of array 
void Draft::DeleteFigure(int pos) {
    if(pos >= current_size) {
        std::cout << "The pos is incorrect!" << std::endl;
        return;
    }
    for(int i = pos; i < current_size; i++) {
        arr[i] = arr[i + 1];
    }
}

///Function increases all the elements in array by k 
void Draft::Increase(double k) {
    for(int i = 0; i < current_size; i++) {
        arr[i]->Increase(k);
    }
}

///Function returns total square of all array elements
double Draft::GetSquare() {
    double square = 0;
    for(int i = 0; i < current_size; i++) {
        square += arr[i]->GetSquare();
    }
    return square;
}
