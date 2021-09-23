#include <iostream>

using namespace std;

int main()
{
	int v = 0;
	int t = 0;
	int S = 109;
	cin >> v >> t;
	cout << " " << (v * t % 109 + 109) % 109;

	return 0;
}