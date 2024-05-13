#include <iostream>
using namespace std;

//  class Shape
//  {
//  public:
//      void print() { cout << "Shape " << endl; }
//  };

class Shape
{
public:
    virtual void print() = 0; //{ cout << "Shape " << endl; }
};

class Triangle : public Shape
{
public:
    void print() { cout << "Triangle " << endl; }
};

class Rectangle : public Shape
{
public:
    void print() { cout << "Rectangle" << endl; }
};

int main()
{
    Shape * ptr = nullptr;
    Triangle tri;
    Rectangle rect;
    tri.print();
    rect.print();

//  Shape shape, * ptr;
//  Triangle tri;
//  Rectangle rect;
//  shape.print();
//  tri.print();
//  rect.print();

//  ptr = &shape;
//  ptr->print();
//  no delete
      
//  ptr = new&tri;
//  ptr->print();
//  delete ptr;

//  ptr = &rect;
//  ptr->print();
//  delete ptr;

//  ptr = new Triangle;
//  ptr->print();
//  delete ptr;

    return 0;
}
