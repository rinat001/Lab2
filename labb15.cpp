#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double a, b, c, la, lb, lc;
	cin >> a>> b>> c;
	la = sqrt(b * c * (b + c) * (b + c) - a * a) / (b + c);
	lb = sqrt(a * c * (a + c) * (a + c) - b * b) / (a + c);			
	lc = sqrt(b * a * (a + b) * (a + b) - c * c) / (a + b);
	cout << la << " " << lb << " " << lc;

return 0;
}

