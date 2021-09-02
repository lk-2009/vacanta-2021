#include <iostream>
using namespace std;
int v[10000],n,j,r[2929292929],mn;
int main()
{
    //Luka, type your code below!
	cout<< "n=";cin>> n;
	for(int i = 1; i<=n;i++){
		cout<< "v[" << i << "] = ";
		cin>> v[i];
		cout<< endl;
	}
	mn=v[1];
	for(int i = 1; i<= n;i++){
		if(mn>v[i]){
			mn=v[i];
			for(int j = 1;j<=n;j++){
				r[j]=0;
			}
			j=1;
			r[j]=i;
		}else if(mn==v[i]){
			j++;
			r[j]=i;
		}
	}
	cout<<"min= "<< mn<< endl;
	for(int i = 1;i <=n; i++){
		if(r[i]  != 0)
			cout<< r[i] << " ";
	}

	return 0;
}
