#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int x, y, z;
	double a, b, p=3.14; 
	cin >> x >> y >> z;
	a = (2 * cos(x - p / 6)) / (0.5 + sin(y) * sin (y));
	b = 1  + ((z * z) / (3 + z * z / 5));
	cout <<a << " " << b;		

return 0;
}

