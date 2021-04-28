#include <iostream>
#include <vector>

using std::vector;

class Shape {    // Abstract Base class
private:
      // attributes common to all shapes
public:
    virtual void draw() = 0;     // pure virtual function
    virtual void rotate() = 0;   // pure virtual function
    virtual ~Shape() {}   // virtual destructor
};

class Open_Shape: public Shape {  // Still an abstract class
public:
    virtual ~Open_Shape() {}
};

class Closed_Shape : public Shape { // Still an abstract class
public:
    virtual ~Closed_Shape() {};
};

class Line: public Open_Shape {  // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line() {}
};

class Circle: public Closed_Shape {  // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle() {}
};

class Square: public Closed_Shape {  // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square() {}
};

void screen_refresh(const vector<Shape *> &shapes) {
    std::cout << "Refreshing" << std::endl;
    for (const auto p: shapes) 
        p->draw();
}

int main() {
//    Shape s;  // Shape can't be instantiated since it has pure virtual methods
//    Shape *p = new Shape();

    std::cout << std::endl;
    Circle c;
    c.draw();
    Shape *ptr = new Circle();
    ptr->draw();
    ptr->rotate();

    std::cout << std::endl;
    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    vector<Shape *> shapes {s1,s2,s3};
    for (const auto p: shapes) 
        p->draw();

    std::cout << std::endl;
    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;

    return 0;
}