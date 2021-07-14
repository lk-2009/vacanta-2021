#include <iostream>
using namespace std;
int n,cc,s;
int main()
{
    //Luka, type your code below!
	cin >> n;
	while(n >= 10){
		s = s+ n % 10;
		n = n / 10;
		if(n == 0){
			n = s;
			s = 0;
		}
	}
	cc = n;
	cout << cc;
	return 0;
}
