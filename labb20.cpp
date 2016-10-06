#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int x, y, z;
	double a, b;
	cin >> x >> y >> z;
	a = (1 + (sin(x + y)) * (sin(x + y))) / (2 + abs(x - 2 * x / (1 + x * x * y * y))) + x ;
	b = cos(atan(1 / z)) * cos (atan(1 / z));
	cout << a << " " << b;		

return 0;
}
