#include <iostream>
using namespace std;
int n,a,d,c;
int main()
{
    //Luka, type your code below!
	cin >> n;
	a = 2;
	while(a <= n){
		d = 2;
		c = 0;
		while(d <= a/2){

			if(a % d == 0){
				c++;
			}
			d++;
		}
		
		if(c == 0){
			cout << a << " ";
		}
		a++;
	}
	return 0;
}
