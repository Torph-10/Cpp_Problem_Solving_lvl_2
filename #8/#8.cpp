#include <iostream>
using namespace std;

int read_mark(string mess)
{
	int mark;
	cout << mess << endl;
	cin >> mark;
	return (mark);
}

bool check_mark(int mark)
{
	if (mark >= 50)
		return (1);
	else
		return (0);
}
void print_result(bool result)
{
	if (result == 1)
		cout << "PASS" << endl;
	else
		cout << "FAIL" << endl;
}
int main()
{
	print_result(check_mark(read_mark("Please enter your mark ?")));
}