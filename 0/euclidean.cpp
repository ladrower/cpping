
#include <iostream>

using namespace std;
 

int gcd(int a, int b)
{
	int t;
	while (b != 0) {
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main() 
{
	int x, y;
	cout << "Enter two integers: ";
	if (!(cin >> x >> y)) {
		cout << "Please enter only integers" << endl;
	} else {
		cout << "gcd(" << x << ", " << y << ") = " << gcd(x,y) << endl;
	}
	return 0;
}	
