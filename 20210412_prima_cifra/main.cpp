#include <iostream>
using namespace std;
int n;
int main()
{
    //Luka, type your code below!
	cin >> n;
	while(n >= 10){
		n/=10;
	}
	cout << n;
	return 0;
}
