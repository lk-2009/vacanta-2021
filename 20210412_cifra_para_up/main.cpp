#include <iostream>
using namespace std;
int a,inv,uc,invinv;
int main()
{
    //Luka, type your code below!
	cin >> a;
	while(a > 0){
		uc = a % 10;
		if(uc % 2 == 0){
			uc++;
		}
		inv = inv * 10 + uc;
		a/=10;
	}
	while(inv > 0){
		a = a * 10 +inv % 10;
		inv/=10;
	}
	cout << a;
	return 0;
}
