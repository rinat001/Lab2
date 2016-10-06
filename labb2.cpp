#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double R, r, s, l, h, v, p=3.14;
	cin >> R >> r >> h;
	v = p * (R * R + R * r + r * r)/3;
	l = sqrt(h * h + (R - r) * (R - r));
	s = p * (R + r) * l;
	cout << v << " " << s;

return 0;
}

