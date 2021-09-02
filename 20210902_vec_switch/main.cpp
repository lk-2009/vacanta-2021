#include <iostream>
using namespace std;
int aux,n;
int main()
{
    //Luka, type your code below!
	int v[]={1,2,3,4,5,6,7,8};
	n=8;
	cout << "Original vector:";
	for(int i = 0; i< n ; i++) cout << v[i] << " ";
	cout << endl;
	for(int i = 0;i < n/2;i++){
		aux=v[i];
		v[i]=v[n-i-1];
		v[n-i-1]=aux;
	}
	cout << "Reversed vector:";
	for(int i = 0;i< 8;i++){
		cout<< v[i]<< " ";
	}
	return 0;
}
