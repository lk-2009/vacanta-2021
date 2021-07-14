#include <iostream>
using namespace std;
long long a,inv,copie;
int main()
{
    //Luka, type your code below!
	cin >> a;

	while(a > inv){
		inv = inv * 10 + a % 10;
		a/=10;
	}
	
	cout << inv << endl;
	cout << a << endl;
	if(a == inv/10 || a == inv){
		cout << "da";
	}else
		cout << "nu";
	/*copie = a;
	while(a > 0){
		inv = inv * 10 + a % 10;
		a/=10;
	}
	if(inv == copie){
		cout << "este palindrom";
	}else
		cout << "nu";
	*/return 0;
}
