#include <iostream>
#include <string>
using namespace std;

int read_day(string mess)
{
	int day = 0;
	cout << "1 print sunday\n" << "2 print monday\n" << "3 print tuesday\n" << "4 print wednesday\n" << "5 print thursday\n" << "6 print friday\n" << "7 print saturady\n";
	cout << mess; 
	cin >> day;

	return (day);
}
void print_day()
{
	int day = read_day("Please enter a day ? \n");
	if (day == 1)
		cout << "It's Sunday\n";
	else if (day == 2)
		cout << "It's Monday\n";
	else if (day == 3)
		cout << "It's Tuesday\n";
	else if (day == 4)
		cout << "It's Wednesday\n";
	else if (day == 5)
		cout << "It's Thursady\n";
	else if (day == 6)
		cout << "It's Friday\n";
	else if (day == 7)
		cout << "It's Saturday\n";
	else
		cout << "Wrong Day\n";
}
int main()
{
	print_day();

	return (0);
}