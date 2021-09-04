#include <iostream>
using namespace std;
int v[10000],n,x,k;
int main()
{
    //Luka, type your code below!
	cout << "n= ";cin>>n;
	cout << "x= ";cin>>x;
	cout << "k= ";cin>>k;
	for(int i = 1;i<= n;i++){
		v[i]= i;
	cout<< v[i]<<" ";}
	cout<<endl;
	
	for(int i = n+1;i>k;i--)
		v[i]=v[i-1];
	v[k]=x;
	for(int i = 1;i<=n+1;i++)
		cout<<v[i]<<" ";
	return 0;
}
