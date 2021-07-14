#include <iostream>
using namespace std;
int a,c,d;
int main()
{
    //Luka, type your code below!
	cin >> a;
	d = 2;
	while(d <= a / 2){
		if(a % d == 0){
			c++;
		}
		d++;
	}
	if(c == 0){
		cout << "numarul "<< a << " este prim";
	}else
		cout << "numarul "<< a << " nu este prim";
	return 0;
}
