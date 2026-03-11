#include <iostream>
using namespace std;
int main()
{
	int num, count = 0;
	cout << "Please enter num: ";
	cin >> num;
	for(; num != 0; num /= 10)
	{
		count++;
	}
	cout << "Digits = " << count;
}
