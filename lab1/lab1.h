#ifndef LAB1_H_
#define LAB1_H_

class Rectangle {
    public:
    Rectangle();
    Rectangle(double w, double h);
    double getWidth();
    double getHeight();
    void setWidth(double w);
    void setHeight(double h);
    double getArea();
    double getPerimeter();
    private:
    double width;
    double height;
};

class EvenNumber {
    public:
    EvenNumber();
    EvenNumber(int start);
    int getValue();
    int getNext();
    int getPrevious();
    private:
    int current;
};

#endif