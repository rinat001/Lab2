#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int x, y, z;
	double e=2.7, a, b;
	cin >> x >> y >> z;
	a = ((1 + y) * (x + y) * (x * x + 4)) / ( pow(e, - x - 2) + 1) / (x * x + 4);
	b = (1 + cos(y - 2)) / (x * x * x * x) / (2 + (sin(z)) * (sin(z)));
	cout << a << " " << b;

		

return 0;
}

