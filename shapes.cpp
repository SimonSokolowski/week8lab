#include "shapes.h"
#include <iostream>
#include <vector>

Shape::Shape(std::string name)
{
  this->name = name;
}

Shape::~Shape()
{
}

std::string Shape::description()
{
  return name + " has area: " + std::to_string(area());
}

Square::Square(double width) : Shape("Square")
{
  this->width = width;
}

double Square::area()
{
  return width * width;
}

Circle::Circle(double radius) : Shape("Circle")
{
    this->radius = radius;
}

double Circle::area()
{
  return 3.14 * this->radius * this->radius;
}

Rectangle::Rectangle(double width, double height) : Shape("Rectangle")
{
    this->width = width;
    this->height = height;
}

double Rectangle::area()
{
  return this->height * this->width;
}

int main() {
  std::vector<Shape *> shapes;

  shapes.push_back(new Square(5));
  shapes.push_back(new Circle(5));
  shapes.push_back(new Rectangle(5, 2));

  for (Shape* shape : shapes) {
    std::cout << shape->description() << std::endl;
    delete shape;
  }

  return 0;
}