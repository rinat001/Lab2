#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double a, b, c, ma, mb, mc;
	cin >> a >> b >> c;
	ma = 0.5 * sqrt(2 * (b * b + c * c) - a * a);
	mb = 0.5 * sqrt(2 * (a * a + c * c) - b * b);		
	mc = 0.5 * sqrt(2 * (b * b + a * a) - c * c);
	cout << ma << " " << mb << " " << mc;

return 0;
}

