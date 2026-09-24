#include <iostream>
using namespace std;

void read_triangle_area(float &a, float &h)
{
	cout << "Please enter A ?\n";
	cin >> a;
	cout << "Please enter H ?\n";
	cin >> h;
}
void calculate_triangle_area(float a, float h)
{
	float Area;
	Area = (a / 2) * h ;
	cout << Area << endl;
}
int main()
{
	float a, h;
	read_triangle_area(a, h);
	calculate_triangle_area(a, h);
	
	return (0);
}