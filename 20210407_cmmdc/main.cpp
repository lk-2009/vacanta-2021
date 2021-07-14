#include <iostream>
using namespace std;
int a, b ,r, p;
int main()
{
    //Luka, type your code below!
	cin >> a >> b;
	p = a * b;
	while(b > 0){
		r = a % b;
		a = b;
		b = r;
	}
	cout << "cmmdc:   " <<a << endl;	
	cout << "cmmmc:   " <<p/ a << endl;

	return 0;
}
