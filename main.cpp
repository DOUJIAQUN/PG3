#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main()
{
    IShape* shape[2];

    float radius = 7.0f;

    float width = 5.0f;
    float height = 3.0f;

    shape[0] = new Circle(radius);
    shape[1] = new Rectangle(width, height);

    for (int i = 0; i < 2; i++) {
        shape[i]->Size();
        shape[i]->Draw();
    }

    for (int i = 0; i < 2; i++) {
        delete shape[i];
    }
}