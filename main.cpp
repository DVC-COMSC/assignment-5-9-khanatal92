
#include <iostream>
using namespace std;

int main()
{
	int prev, current;
	
	cin >> prev;

	while (cin >> current)
	{
		if (current <= prev)
	{
		cout << current << " ";
	}
	else
	{
	cout << endl;
	break;
	}
	}

	return 0;
}
