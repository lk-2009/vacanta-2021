#include <iostream>
using namespace std;
int a,inv;
int main()
{
    //Luka, type your code below!
	cin >> a;
	while(a > 0 ){
		inv  = inv * 10 + a % 10;
		a/= 10;
	}
	cout << inv;
	return 0;
}
