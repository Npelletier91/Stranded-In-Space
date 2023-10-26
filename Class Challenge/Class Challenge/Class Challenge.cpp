#include <cmath>
#include <string>
#include <iostream>

using namespace std;


class Shape {
public:
    string color;
    virtual void GetArea() const {
        cout << "unknown" << " \n";
    }
};

class Rectangle : public Shape {
public:
    int height;
    int width;

    Rectangle(int h, int w) {
        height = h;
        width = w;
    }

    void GetArea() const override {
        int area = height * width;
        cout << "Area of this Rectangle is : " << area << endl;
    }
};

class Triangle : public Shape {
public:
    int base;
    int height;

    Triangle(int b, int h) {
        base = b;
        height = h;
    }

    void GetArea() const override {
        float area = 0.5 * base * height;
        cout << "Area of this Triangle is : " << area << endl;
    }
};

class Circle : public Shape {
public:
    int radius;

    Circle(int r) {
        radius = r;
    }

    void GetArea() const override {
        double area = 3.14159265358979323846 * radius * radius;
        cout << "Area of this Circle is : " << area << endl;
    }
};




int main()
{
    Rectangle rectangle(5, 4);
    Triangle triangle(3, 6);
    Circle circle(2);

    rectangle.GetArea();
    triangle.GetArea();
    circle.GetArea();

    return 0;
}

