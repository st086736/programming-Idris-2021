#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
	int t = 0;
	int s = 0;
	cin»t;
	cout«endl;
	for (int i = 1; i <= t; ++i)
	{
		s = s + i;
		cout«i«" ";
	}
	cout«endl;
	cout«s«endl;

	return EXIT_SUCCESS;
}