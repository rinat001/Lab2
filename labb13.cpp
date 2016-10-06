#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double a, b, c, ha , hb, hc, p, s;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	ha = 2 * s / a;
	hb = 2 * s / b;
	hc = 2 * s / c;
	cout << ha << " " << hb << " " << hc;

		

return 0;
}

