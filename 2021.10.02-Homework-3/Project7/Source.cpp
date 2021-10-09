#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int z = 0;
	int g = 0;
	cin >> x >> y >> z >> g;
	cout << endl;
	for (int i = 0; i <= 1000; ++i)
	{
		if ((x * i * i * i + y * i * i + z * i + g) == 0)
		{
			cout << " " << i << " ";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}