#include <iostream>
using namespace std;

void read_fullname(string &fname, string &lname)
{
	cout << "Please enter your first name ?" << endl;
	cin >> fname;
	cout << "Please enter your last name ?" << endl;
	cin >> lname;
}
void print_full_name(string fname, string lname)
{
	string full_name = fname + " " + lname;
	cout << full_name << endl;
}
int main()
{
	string first_name;
	string last_name;
	read_fullname(first_name, last_name);
	print_full_name(first_name, last_name);
}