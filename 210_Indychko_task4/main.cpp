#include <iostream>
#include "Figure.hpp"

int main() {
    double square_check = 0;
    Circle c1;
    square_check += c1.GetSquare();
    std::cout << "Circle square = " << c1.GetSquare() << std::endl;
    Square s1(0, 0, 1, 1, 2);
    square_check += s1.GetSquare();
    std::cout << "Square square = " << s1.GetSquare() << std::endl;
    Triangle t1;
    square_check += t1.GetSquare();
    std::cout << "Triangle square = " << t1.GetSquare() << std::endl;
    std::cout << "Total square = " << square_check << std::endl << std::endl;
    Draft d1(3);
    d1.AddFigure(&c1);
    d1.AddFigure(&s1);
    d1.AddFigure(&t1);
    std::cout << "Total square in draft = " << d1.GetSquare() << std::endl << std::endl;
    d1.Increase(2);
    std::cout << "AFTER INCREASING:" << std::endl;
    std::cout << "Circle square = " << c1.GetSquare() << std::endl;
    std::cout << "Square square = " << s1.GetSquare() << std::endl;
    std::cout << "Triangle square = " << t1.GetSquare() << std::endl;
    square_check = 0;
    square_check += c1.GetSquare();
    square_check += s1.GetSquare();
    square_check += t1.GetSquare();
    std::cout << "Total square = " << square_check << std::endl << std::endl;
    std::cout << "Total square in draft = " << d1.GetSquare() << std::endl << std::endl;
    return 0;
}
