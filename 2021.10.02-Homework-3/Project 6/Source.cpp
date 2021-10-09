#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int x = 0;
	int z = 0;
	int p = 0;
	int n = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> x;
		if (x == 0)
		{
			z++;
		}
		else if (x > 0)
		{
			p++;
		}
		else if (x < 0)
		{
			n++;
		}
	}
	cout << " " << z << " " << p << " " << n << endl;

	return EXIT_SUCCESS;
}