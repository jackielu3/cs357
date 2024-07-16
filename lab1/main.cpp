#include "lab1.h"
#include <iostream>

int main() {
    Rectangle rect1(4, 40), rect2(3.5, 35.9);

    std::cout << "First Rectangle: Width: " << rect1.getWidth() << ", Height: " << rect1.getHeight() << ", Area: " << rect1.getArea() << ", Perimeter: " << rect1.getPerimeter() << std::endl;
    std::cout << "Second Rectangle: Width: " << rect2.getWidth() << ", Height: " << rect2.getHeight() << ", Area: " << rect2.getArea() << ", Perimeter: " << rect2.getPerimeter() << std::endl;

    std::cout << std::endl;

    EvenNumber e(16);

    std::cout << "Start: " << e.getValue() << std::endl;
    std::cout << "Next: " << e.getNext() << std::endl;
    std::cout << "Next: " << e.getNext() << std::endl;
    std::cout << "Next: " << e.getNext() << std::endl;
    std::cout << "Previous: " << e.getPrevious() << std::endl;
    std::cout << "Previous: " << e.getPrevious() << std::endl;

    return 0;
}