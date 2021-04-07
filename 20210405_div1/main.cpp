#include <iostream>
using namespace std;

/**/

int a,b,k,c,d;
int main()
{
    //Luka, type your code below!
	cin >> a >> b >> k;
	d = a;
	while(a <= d && b >= d){
		if(d % k == 0){
			c = c + 1;
		}
		d++;
	}
	cout << c;
	return 0;
}
