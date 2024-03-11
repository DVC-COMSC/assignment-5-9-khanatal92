#include <iostream>
using namespace std;

int main()
{
	int prev, current;
	cin >> prev;
	cout << prev; 
	

	while (true) {
		cin >> current;
		if (current > prev){
			break;
		} else if (current != prev)
		{
			cout << ' ';
			cout << current;
			current = prev;
		}
	}
	return 0;
}