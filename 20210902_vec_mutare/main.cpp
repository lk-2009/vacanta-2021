#include <iostream>
using namespace std;

int main()
{
    //Luka, type your code below!
	int v[]={1,2,3,4,5,6,7,8};
	int n=8;
	cout << "Original vector:   ";
	for(int i = 0; i<n;i++) cout << v[i] << " "; cout << endl;
	int aux=v[0];
	for(int x = 0;x<n-1;x++)
		v[x]= v[x+1];
	v[n-1]=aux;
	cout << "Permutated vector: ";
	for(int j = 0;j<=7;j++){
		cout<<v[j] << " ";
	}
	return 0;
}
