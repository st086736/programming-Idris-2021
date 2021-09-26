#include <iostream>

#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;

	if (a*a+b*b==c*c)
	{
		cout << "right" << endl;
	}

		if (a * a + b * b < c * c && a + b > c)
		{
			cout << "acute" << endl;
		}
	
	if (a * a + b * b > c * c && a + b > c)
	{
		cout << "obtuse" << endl;
	}
	if (a + b <= c)
	{
		cout << "impossible"<<endl;
	}
	return EXIT_SUCCESS;
}