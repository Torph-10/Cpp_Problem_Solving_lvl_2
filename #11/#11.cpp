#include <iostream>
using namespace std;

void read_marks(float &mark1, float &mark2, float &mark3)
{
	cout << "Please enter mark1 ?" << endl;
	cin >> mark1;
	cout << "Please enter mark2 ?" << endl;
	cin >> mark2;
	cout << "Please enter mark3 ?" << endl;
	cin >> mark3;
}
float average_of_marks(float mark1, float mark2, float mark3)
{
	float average = (mark1 + mark2 + mark3) / 3;
	return (average);
}
void print_marks(float average)
{
	cout << average << endl;
	if (average >= 50)
		cout << "PASS" << endl;
	else
		cout << "FAIL" << endl;
}
int main()
{
	float mark1, mark2, mark3;
	read_marks(mark1, mark2, mark3);
	print_marks(average_of_marks(mark1, mark2, mark3));
}