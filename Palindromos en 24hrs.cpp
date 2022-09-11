

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	
	int hrs = 00, min = 00, a,b;
	
	
		for (hrs = 00; hrs <= 23; hrs++)
		{
			
			a=hrs%10;
			b = hrs / 10;
			
			cout << b << a << " : " << a << b<< endl;
			
			
		}
	
}