#include <iostream>
#include <cmath>
using namespace std;
long long n,x,c,inv,cx,pc,a,copx,nr;
int main()
{
    //Luka, type your code below!
	cin>>n;
while(n>0){
	cin >> x;
	cx = x;
	inv = 0;
	while(x>0){
		x = x / 10;
		c++;
	}
	while(c > 0){
		pc = cx/ (int)pow(10,c-1); 
		if(pc % 2 == 0) x = x * 10 + pc;
		cx = cx % (int)pow(10,c-1);
		c--;
		
	}
	copx = x;
	 while(copx > 0){
		 inv = inv* 10 + copx % 10;
		 copx/=10;
	 }
	 if(x == inv){
		 nr++;
	 }
	 n--;
}
cout << nr;
	return 0;
}
