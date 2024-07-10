#include <iostream>

class Rectangle {
    public:
    Rectangle() {
        width = 1.0;
        height = 1.0;
    }

    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    double getWidth() {
        return width;
    }
    double getHeight() {
        return height;
    }
    void setWidth(double w) {
        width = w;
    }
    void setHeight(double h) {
        height = h;
    }
    double getArea() {
        return width * height;
    };
    double getPerimeter() {
        return ((width + height) * 2);
    };
    private:
    double width;
    double height;
};

class EvenNumber {
    public:
    EvenNumber()  {
        current = 0;
    }
    EvenNumber(int start) {
        current = start;
    }
    int getValue() {
        return current;
    }
    int getNext() {
        current += 2;
        return current;
    }
    int getPrevious() {
        current -= 2;
        return current;
    }

    private:
    int current;
};

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