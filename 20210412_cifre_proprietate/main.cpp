#include <iostream>
using namespace std;
int a,inv,uc,p;
int main()
{
    //Luka, type your code below!
	cin >> a;
	p = 1;
	/*while(a > 0){
		uc = a % 10;
		if(uc % 2 == 1){
			inv = inv * 10 + uc;
		}
		a/= 10;
	}
	while(inv > 0){
		a = a * 10 + inv % 10;
		inv/= 10;
	}
	 cout << a;
	  */
 while(p*10 <= a){
	 p*=10;
 }
 while(a > 0){
	 cout << a / p << " ";
	 a = a % p;
	 p/=10;
 }
	return 0;
}
