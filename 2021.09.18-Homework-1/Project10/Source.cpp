#include <iostream>

#include <stdlib.h>;

using namespace std;

int main()
{
	int a, b, max, min;
	cin >> a >> b;
	max = (a + b + abs(a - b)) / 2;
	min = (a + b - abs(a - b)) / 2;
	cout << "max" << max << endl;
	return 0;

}