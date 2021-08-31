#include <iostream>
#include <cmath>
using namespace std;
int  n,c1,c2,x,invn,c,cn,pc;
int main()
{
    //Luka, type your code below!
	cin >> n>>c1>>c2;
	cn=n;
	while(n>0){
		c++;
		n=n/10;
	}
	while(c>0){
		pc=cn/pow(10,c-1);
		cn = cn%(int)pow(10,c-1);
		if(pc == c1) pc = c2;
		n= n* 10 + pc;
		c--;
		}

		if(n ==0 && c1 == 0){
			n = c2;
		}
		cout << n;
	
	return 0;
}


/*

cin >> n >> c1 >> c2;
		while(n > 0){
		invn = invn* 10 + n % 10;
		n/=10;
	}
	while(invn > 0){
		if(invn%10 == c1){
			x=x* 10 + c2;
		}else
			x=x*10+invn%10;
		invn/=10;
	}
	if(n == 0 && n == c1){
		x = c2;
	}
	cout << x;
*/