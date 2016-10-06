#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double a, b, h, angle, s;
	cin >> a >> b >> angle;
	s = ((a + b) * (a - b)) / 4 * sin(angle) / sin(90 - angle);
	printf("%.5f", s);	
	
		

return 0;
}

