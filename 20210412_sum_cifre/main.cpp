#include <iostream>
using namespace std;
int a,S;
int main()
{
    //Luka, type your code below!
	cin >> a;
	while(a > 0){
		S = S + a % 10;
		a /= 10;
	}
	cout << S;
	return 0;
}
