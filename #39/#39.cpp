#include <iostream>
#include <string>
using namespace std;

float read_billvalue(string mess)
{
	float number = 0;
	cout << mess;
	cin >> number;
	return (number);
}
float add_servicefee()
{
	float bill_value = (read_billvalue("Please enter bill value ?\n")) * 1.1 * 1.16;
	return (bill_value);
}

int main()
{
	cout << "Total Bill : " << add_servicefee() << endl;

	return (0);
}