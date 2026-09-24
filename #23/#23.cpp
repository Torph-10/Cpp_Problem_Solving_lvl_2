#include <iostream>
using namespace std;

void read_circcle_area_described_aroundan_arbitrary_triangle(int &a, int &b, int &c)
{
	cout << "Please enter a ?\n";
	cin >> a ;
	cout << "Please enter b ?\n";
	cin >> b ;
	cout << "Please enter c ?\n";
	cin >> c;
}
void calculate_circcle_area_described_aroundan_arbitrary_triangle(int a, int b, int c)
{
	float p = (a + b + c) / 2;
	float Area, T;
	T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	T = T * T;
	Area = 3.14 * T;
	cout << Area << endl;
}
int main()
{
	int a, b, c;
	read_circcle_area_described_aroundan_arbitrary_triangle(a, b, c);
	calculate_circcle_area_described_aroundan_arbitrary_triangle(a, b, c);
}