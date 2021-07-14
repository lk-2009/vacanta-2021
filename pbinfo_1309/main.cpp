#include <iostream>
using namespace std;
int a,b,d,l,L;
int main()
{
    //Luka, type your code below!
	cin >> a >> b >> d;
	
	l = a / d;
	if(a % d != 0)	 l++ ;
	
	L = b / d;
	if(b % d != 0) L++ ;
	
	cout << L * l;
	
	return 0;
}
