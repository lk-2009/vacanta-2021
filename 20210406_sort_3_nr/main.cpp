#include <iostream>
using namespace std;
int a,b,c,aux;
int main()
{
    //Luka, type your code below!
	cin >>a >> b >> c;
	if(a > b){
		aux = a;
		a = b;
		b = aux;
	}
	if(b > c){
		aux = b;
		b = c;
		c = aux;
	}
	if(a > b){
	a = a + b;
	b = a - b;
	a = a - b;
	}
	cout << a << " " << b << " " << c;
	return 0;
}
