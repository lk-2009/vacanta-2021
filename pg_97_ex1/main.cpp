#include <iostream>
using namespace std;
int n,k,S;
float v[1000],x;
int main()
{
    //Luka, type your code below!
	cin>> n;
	for(int i = 1;i<=n;i++){
		cout<<"v["<<i<<"]= ";
		cin>> x;
		if(int(x)== x) {
			k++:
			S=S+x;
		}
	}
	cout<<k<< " suma componentelor este "<< S;
	return 0;
}
