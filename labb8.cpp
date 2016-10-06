#include <iostream>
#include <cmath>

using namespace std;

int main ()
{      
	double r1, r2, r3 ,r0;
	cin >> r1 >> r2 >> r3;
	r0 = 1 / (1 / r1 + 1 / r2 + 1 / r3);
	cout << r0;
	

return 0;
}
