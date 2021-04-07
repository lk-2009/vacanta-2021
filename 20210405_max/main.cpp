#include <iostream>
using namespace std;
int mx,a,b,c,d,e;
int main()
{
	cin >>a >> b >> c >> d >> e;
    //Luka, type your code below!
	mx = a;
	if(b > mx) mx = b;
	if (c > mx) mx = c;
	if(d > mx) mx = d;
	if(e > mx ) mx = e;
/*	if(a > b && a > c) {
		mx = a;
	}
	if(b > a && b > c){hb b 
		mx = b;
	}
	if(c > a && c > b){ 
		mx = c;
		} */
	cout << endl << mx;
	return 0;
}
