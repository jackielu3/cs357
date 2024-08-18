/*
(Geometry: The Circle2D class) Define the Circle2D class that contains:

- Two double data fields named x and y that specify the center of the circle with
constant get functions.
- A double data field radius with a constant get function.
- A no-arg constructor that creates a default circle with (0, 0) for (x, y) and 1 for
radius.
- A constructor that creates a circle with the specified x, y, and radius.
- A constant function getArea() that returns the area of the circle.
- A constant function getPerimeter() that returns the perimeter of the circle.
- A constant function contains(double x, double y) that returns true if
the specified point (x, y) is inside this circle. See Figure 11.8a.
- A constant function contains(const Circle2D& circle) that returns
true if the specified circle is inside this circle. See Figure 11.8b.
- A constant function overlaps(const Circle2D& circle) that returns
true if the specified circle overlaps with this circle. See Figure 11.8c.

Draw the UML diagram for the class. Implement the class. Write a test program
that creates a Circle2D object c1(2, 2, 5.5), c2(2, 2, 5.5), and c3(4,
5, 10.5), displays c1’s area and perimeter, the result of c1.contains(3, 3),
c1.contains(c2), and c1.overlaps(c3).
*/

#include <iostream>
#include <cmath>

using namespace std;

class Circle2D {
private:
    double x, y, radius;

public:
    // Default Constructor
    Circle2D() : x(0), y(0), radius(1) {}

    Circle2D(double x, double y, double radius) : x(x), y(y), radius(radius) {}

    double getX() const { return x; }
    double getY() const { return y; }
    double getRadius() const { return radius; }

    double getArea() const {
        return M_PI * radius * radius;
    }

    double getPerimeter() const {
        return 2 * M_PI * radius;
    }

    bool contains(double px, double py) const {
        double distance = sqrt((px - x) * (px - x) + (py - y) * (py - y)); // found on stackexchange, a modification of Pythagorean
        return distance < radius;
    }

    bool contains(const Circle2D& circle) const {
        double distance = sqrt((circle.getX() - x) * (circle.getX() - x) + (circle.getY() - y) * (circle.getY() - y)); // again, found on stackexchange
        return distance + circle.getRadius() <= radius;
    }

    bool overlaps(const Circle2D& circle) const {
        double distance = sqrt((circle.getX() - x) * (circle.getX() - x) + (circle.getY() - y) * (circle.getY() - y));
        return distance < (radius + circle.getRadius()) && distance > abs(radius - circle.getRadius());
    }
};

int main() {
    Circle2D c1(2, 2, 5.5);
    Circle2D c2(2, 2, 5.5);
    Circle2D c3(4, 5, 10.5);

    std::cout << "Circle c1's area: " << c1.getArea() << std::endl;
    std::cout << "Circle c1's perimeter: " << c1.getPerimeter() << std::endl;

    std::cout << "c1 contains the point (3, 3): " << (c1.contains(3, 3) ? "true" : "false") << std::endl;

    std::cout << "c1 contains c2: " << (c1.contains(c2) ? "true" : "false") << std::endl;

    std::cout << "c1 overlaps with c3: " << (c1.overlaps(c3) ? "true" : "false") << std::endl;

    return 0;
}
