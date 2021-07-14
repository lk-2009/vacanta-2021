#include <iostream>
using namespace std;
int a,b;
int main()
{
    //Luka, type your code below!
	cin >> a;
	while(a != 0){
		if(a % 2 == 0){
			b++;
			
		}
		cin>> a;
	}
	if ( b == 0){
		cout << "NU EXISTA";
	}else
		cout << b;
	return 0;
}
