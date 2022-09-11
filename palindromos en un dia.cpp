

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

	int hrs = 00, min = 00, a, b,c,d;


	for (hrs = 00; hrs < 16; hrs++)
	{

		a = hrs % 10;
		b = hrs / 10;
		
			cout << b << a << " : " << a << b << endl;
			

	}
	for (hrs = 20; hrs <= 23; hrs++)
	{
		c = hrs % 10;
		d = hrs / 10;
		cout << d << c << " : " << c << d << endl;
	}
}