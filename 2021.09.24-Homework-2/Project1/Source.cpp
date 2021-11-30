#include <iostream>
#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{

	setlocale(LC_ALL, "Russian");

	int n = 0;
	cin >> n;

	switch (n / 100)
	{
	case 1:
		cout << "ńňî ";
		break;
	case 2:
		cout << "äâĺńňč ";
		break;
	case 3:
		cout << "ňđčńňŕ ";
		break;
	case 4:
		cout << "÷ĺňűđĺńňŕ ";
		break;
	case 5:
		cout << "ď˙ňüńîň ";
		break;
	case 6:
		cout << "řĺńňüńîň ";
		break;
	case 7:
		cout << "ńĺěüńîň ";
		break;
	case 8:
		cout << "âîńĺěüńîň ";
		break;
	case 9:
		cout << "äĺâ˙ňüńîň ";
		break;
	}

	switch (n % 100 / 10) {
	case 1: {
		switch (n % 10)
		{
		case 0:
			cout << "äĺń˙ňü ";
			break;
		case 1:
			cout << "îäčííŕäöŕňü ";
			break;
		case 2:
			cout << "äâĺíŕäöŕňü ";
			break;
		case 3:
			cout << "ňđčíŕäöŕňü ";
			break;
		case 4:
			cout << "÷ĺňűđíŕäöŕňü ";
			break;
		case 5:
			cout << "ď˙ňíŕäöŕňü ";
			break;
		case 6:
			cout << "řĺńňíŕäöŕňü ";
			break;
		case 7:
			cout << "ńĺěíŕäöŕňü ";
			break;
		case 8:
			cout << "âîńĺěíŕäöŕňü ";
			break;
		case 9:
			cout << "äĺâ˙ňíŕäöŕňü ";
			break;
		}
		cout << "áŕíŕíîâ" << endl;
	}
		  break;
	case 2:
		cout << "äâŕäöŕňü ";
		break;
	case 3:
		cout << "ňđčäöŕňü ";
		break;
	case 4:
		cout << "ńîđîę ";
		break;
	case 5:
		cout << "ď˙ňüäĺń˙ň ";
		break;
	case 6:
		cout << "řĺńňüäĺń˙ň ";
		break;
	case 7:
		cout << "ńĺěüäĺń˙ň ";
		break;
	case 8:
		cout << "âîńĺěüäĺń˙ň ";
		break;
	case 9:
		cout << "äĺâ˙íîńňî ";
		break;
	}

	if (n % 100 / 10 != 1) {
		switch (n % 10)
		{
		case 1:
			cout << "îäčí ";
			break;
		case 2:
			cout << "äâŕ ";
			break;
		case 3:
			cout << "ňđč ";
			break;
		case 4:
			cout << "÷ĺňűđĺ ";
			break;
		case 5:
			cout << "ď˙ňü ";
			break;
		case 6:
			cout << "řĺńňü ";
			break;
		case 7:
			cout << "ńĺěü ";
			break;
		case 8:
			cout << "âîńĺěü ";
			break;
		case 9:
			cout << "äĺâ˙ňü ";
			break;
		}
		cout << "áŕíŕí";
		switch (n % 10)
		{
		case 1:
			break;
		case 2: case 3: case 4: cout << "ŕ" << endl;
			break;
		default: cout << "îâ" << endl;
		}
	}

	return EXIT_SUCCESS;
}