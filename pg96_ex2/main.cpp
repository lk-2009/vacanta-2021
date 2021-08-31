#include <iostream>
using namespace std;
int n;
float x,f,S;
int main()
{
    //Luka, type your code below!
	cin >> x;
	f = x- int(x);
	x=f* 1000;
	n = int(x);
	//S=int(x)%10+int(x)/10%10+int(x)/100%1000+int(x)/1000%10000;
	cout << n;
	while(n>0){
		S = S +n%10;
		n/=10;
		
	}
	cout << S;
	return 0;
}
