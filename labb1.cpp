#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double a, b, c, h, s, p, v;
	cout << "Enter four numbers";
	cin >> a >> b >> c >> h;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	v = (s * h) / 3;
	cout << v;

return 0;
}	

