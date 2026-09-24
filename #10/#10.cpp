#include <iostream>
using namespace std;

void read_numbers(float &mark1, float &mark2, float &mark3, string mess)
{
	cout << mess << "1 ?\n";
	cin >> mark1;
	cout << mess << "2 ?\n";
	cin >> mark2;
	cout << mess << "3 ?\n";
	cin >> mark3;
}
void average_3_num(float mark1, float mark2, float mark3)
{
	float average;
	average = (mark1 + mark2 + mark3) / 3;
	cout << average << endl;
}
int main()
{
	float mark1, mark2, mark3;
	read_numbers(mark1, mark2, mark3, "Please enter mark ");
	average_3_num(mark1, mark2, mark3);
}