#include <iostream>
using namespace std;
int v[10],i,n;
int main()
{
    //Luka, type your code below!
	cin>>n;
	i=1;
	while(n>0){
		v[i]=n%10;
		n/=10;
		i++;
	}
	for(int x = 1;x<i;x++){
		cout<< v[x]<<endl;
	}
	return 0;
}
