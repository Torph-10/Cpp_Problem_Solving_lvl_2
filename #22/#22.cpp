#include <iostream>
//#include <cmath> // For M_PI

using namespace std;

void read_circle_area_inscribed_in_isosceles_triangle(double &a, double &b)
{
    cout << "Please enter A ?\n";
    cin >> a;
    cout << "Please enter B ?\n";
    cin >> b;
}
void calculate_circle_area_inscribed_in_isosceles_triangle(double a, double b)
{
    double Area;
    Area = 3.14 * ((b * b) / 4.0) * ((2.0 * a) - b) / ((2.0 * a) + b);
    cout << Area << endl;
}
int main()
{
    double a, b;
    read_circle_area_inscribed_in_isosceles_triangle(a, b);
    calculate_circle_area_inscribed_in_isosceles_triangle(a, b);

    return 0;
}