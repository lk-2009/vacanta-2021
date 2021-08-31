#include <iostream>
using namespace std;
float x,y,n,Min;
int main()
{
    //Luka, type your code below!
	cin >>n;
	cin >> x;
	Min=x;
	for(int i = 1; i < n; i++){
		cin >> x;
		if(Min > x) Min = x;
	}
	cout.precision(3);
	cout << Min;
	return 0;
}
