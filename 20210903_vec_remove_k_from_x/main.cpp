#include <iostream>
using namespace std;
int v[1000],n,k;
int main()
{
    //Luka, type your code below!
	cout<< "n= ";cin>>n;
	cout << "k= ";cin>>k;
	for(int i = 1;i<=n;i++)
		v[i]=i;
	for(int i = k;i<=n;i++){
		v[i]=v[i+1];
	}
	for(int i = 1;i<=n-1;i++)
		cout<<v[i] << " ";
	return 0;
}
