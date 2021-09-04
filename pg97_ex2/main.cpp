#include <iostream>
using namespace std;
int n,S;
float v[1000],x;
int main()
{
    //Luka, type your code below!
	cin>> n;
	for(int i = 1;i<=n;i++){
		cout<<"v["<<i<<"]= ";
		cin>> x;
		if(int(x)== x) {
			S=S+x;
		}
	}
	cout<< " suma componentelor este "<< S;
	return 0;
}
