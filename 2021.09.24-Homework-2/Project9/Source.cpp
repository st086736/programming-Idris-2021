#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int M = 0;
	int x = 0;
	int y = 0;
	cin >> N >> M >> x >> y;
	if (N>x && M>y)
	{
		cout << x << " " << y - 1 << endl;
	}
	{
		cout << x - 1 << " " << y << endl;
	}
	{
		cout << x << " " << y + 1 << endl;
	}
	{
		cout << x + 1 << " " << y << endl;
	}

	return EXIT_SUCCESS;
}