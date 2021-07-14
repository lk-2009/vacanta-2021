#include <iostream>
using namespace std;
int a, d;
int main()
{
    //Luka, type your code below!
	cin >> a;
	cout << "divizorii sunt:  ";
	d = 1;
	while ( d <= a){
		if(a % d == 0){
			cout << d << " " ;
		}
		d++;
	}
	return 0;
}
