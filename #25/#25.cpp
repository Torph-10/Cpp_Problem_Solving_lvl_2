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
	if (age < 18 || age > 45)
	{
		do {
			cout << "Invalid Age\nPlease enter a valid age\n";
			cin >> age;
		} while (age < 18 || age > 45);
	}
	cout << "Valide Age" << endl;
}

int main()
{
	check_age(read_age("Please enter your age ?\n"));
}