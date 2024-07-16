#include "lab1.h"
#include <iostream>

// Default constructor
Rectangle::Rectangle() : width(1.0), height(1.0) {}
// Parameterized constructor
Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

// Get methods
double Rectangle::getWidth() {
    return width;
}
double Rectangle::getHeight() {
    return height;
}
// Set methods
void Rectangle::setWidth(double w) {
    width = w;
}
void Rectangle::setHeight(double h) {
    height = h;
}

double Rectangle::getArea() {
    return width * height;
};
double Rectangle::getPerimeter() {
    return ((width + height) * 2);
};


// Default constructor
EvenNumber::EvenNumber() : current(0)  {}
// Parameterized constructor
EvenNumber::EvenNumber(int start) : current(start) {}

// Get methods
int EvenNumber::getValue() {
    return current;
}
int EvenNumber::getNext() {
    current += 2;
    return current;
}
int EvenNumber::getPrevious() {
    current -= 2;
    return current;
}