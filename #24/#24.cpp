#include <iostream>
#include <string>
using namespace std;

int read_age(string mess)
{
	int age;
	cout << mess;
	cin >> age;
	return (age);
}
void check_age(int age)
{
	if (age >= 18 && age <= 45)
		cout << "Valid Age\n";
	else
		cout << "Invalid Age\n";
}
int main()
{
	check_age(read_age("Please enter your age ?\n"));
}