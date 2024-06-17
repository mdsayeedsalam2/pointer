// classes example
#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h)
    {
    }
    Rectangle()
    {
        width = 2;
        height = 2;
    }
    int area() { return width * height; }
};

int main()
{
    Rectangle rect(3, 4), yy;

    cout << "myarea: " << rect.area();
    cout << "area: " << rect.area();
    cout << "area: " << yy.area();
    return 0;
}