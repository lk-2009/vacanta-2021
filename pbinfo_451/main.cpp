#include <iostream>
using namespace std;
int a,s,c,p,x;
int main()
{
    //Luka, type your code below!
	cin >> a;
	c = a;
	p = 1;
	if(a > 100){
		cout << a << " nu are maxim 2 cifre";
		return -1;
		
	}
	if(a <= 15) {
		x = a * a;
		cout << x;
	}
	if(a >= 16 &&  a <= 30 ){
		while(a > 0){
			s = s + a % 10;
			a = a / 10;
		}
		cout << s;
	}
	if(c > 30){
		while(c > 0){
			p = p * (c % 10);
			c = c / 10;
		}
		cout << p;
	}
	return 0;
}
