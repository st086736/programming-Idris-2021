#include <iostream>

using namespace std;

int nod(int m, int n)
{
	int prom = 0;

	while (m != n)
	{
		if (m > n)
		{
			prom = m;
			m = n;
			n = prom;
		}
		n = n - m;
	}
	return m;
}

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int nok = 0;

	cin >> m >> n;

	nok = (m * n) / nod(m, n);

	cout << nok << endl;

	return EXIT_SUCCESS;
}