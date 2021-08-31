#include <iostream>
using namespace std;
int n;
float x,y,sum,med;
int main()
{
    //Luka, type your code below!
	cout << "n=";
	cin>> n;
	for(int i = 1;i <= n;i++){
		cout << "x=";cin>> x;
		sum = sum+x;
	}
	med = sum/n;
	cout.precision(2);
	cout << "media aritmetica=" << med;
}
