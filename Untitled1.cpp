#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int n , a , s = 0;
	
	cout<<"Enter a number:"<<endl;
	cin>>n;
	
	while ( n > 0  || n < 0 )
	{
		a = n % 10;
		s = s * 10 + a;
		n = n / 10;
	}
	cout<<"Reversed is:"<<s;
}
