#include <iostream>
using namespace std;
int v[10000],mn,n,x,k;
int main()
{
    //Luka, type your code below!
	cout<< "n= ";cin>> n;
	for(int i = 1;i <= n;i++){
		cout<<"v["<<i<<"]=";
		cin>>v[i];
		
		}
	mn=v[1];
	k=1;
	for(int i = 2;i<=n;i++){
		if(mn>v[i]){
			mn=v[i];
			k=1;
		}else if(mn==v[i]) k++;
	}
	cout<<k;
	return 0;
}
