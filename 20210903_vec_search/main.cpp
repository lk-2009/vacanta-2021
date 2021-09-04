#include <iostream>
using namespace std;
int v[1000],n,x,ok;
int main()
{
    //Luka, type your code below!
	cout<< "n= ";cin>>n;
	cout<< "x= ";cin>>x;
	for(int i = 0;i<n;i++)
		v[i]=i;
		
		int i=0;
		while(i<n&&v[i]!=x){
			i++;
		}
		cout<< i;
	/*
	for(int i = 1;i<=n;i++){
		if(v[i]==x){
			cout<< i;
			ok=1;
			break;
		}
		
	}
	if(ok==0)cout<< v[n+1];*/
	return 0;
}
