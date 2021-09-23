#include <iostream>

using namespace std;

int main()
{
	int K = 0;
	cin >> K;
	cout << (K / 100) + (K % 100) / 10 + (K % 100) % 10;
	return 0;

}