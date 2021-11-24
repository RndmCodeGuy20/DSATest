#include <iostream>
using namespace std;

void AreaPeri(int r, float *Area, float *Peri)
{
    *Area = 3.14*r*r;
    *Peri = 2*3.14*r;
}

int main()
{
    int rad;
    float area, peri;

    rad = 5;

    AreaPeri(rad, &area, &peri);

    cout << "Area of Circle = " << area << "\n"
         << "Perimeter of Circle = " << peri << endl;

    return 0;
}