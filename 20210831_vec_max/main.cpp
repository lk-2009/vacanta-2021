#include <iostream>
using namespace std;
int v[100],n,x,Max,k;
int main()
{
    //Luka, type your code below!
	k = 1;
	cout<< "n=";cin >> n;
	for(int i = 1; i <= n; i++ ){
		cout << "x["<< i <<"]="; cin >> x;
		v[i] = x;
	}
	for(int i = 1;i<= n; i++){
		if(Max < v[i] ) {Max = v[i]; k = 1;}
		else if(Max == v[i]) k++;
	}
	cout << "max="<<Max<< endl;
	cout << "max apare de " << k << " ori";
	return 0;
}
