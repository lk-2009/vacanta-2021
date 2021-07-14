#include <iostream>
using namespace std;
int a,b,c,d,e,mx2,mx3, mx,S;
int main()
{
    //Luka, type your code below!
	cin >> a >> b >> c >> d >> e;
	if(a > b && a > c && a > d && a > e){
		mx = a;
		a = 0;
	}else if(b > a && b > c && b > d && b > e){
			mx = b;
			b = 0;
	}else if(c > a && c > b && c > d && c > e){
		mx=c;
		c = 0;
	}else if(d > a && d > b && d > c && d > e){
		mx = d;
		d = 0;
	}else if(e > a && e > b && e > c && e > d){
		mx = e;
		e = 0;
	}
	
	
	if(a > b && a > c && a > d && a > e){
		mx2 = a;
		a = 0;
	}else if(b > a && b > c && b > d && b > e){
			mx2 = b;
			b = 0;
	}else if(c > a && c > b && c > d && c > e){
		mx2=c;
		c = 0;
	}else if(d > a && d > b && d > c && d > e){
		mx2 = d;
		d = 0;
	}else if(e > a && e > b && e > c && e > d){
		mx2 = e;
		e = 0;
	}
	
	
	if(a > b && a > c && a > d && a > e){
		mx3 = a;
		a = 0;
	}else if(b > a && b > c && b > d && b > e){
			mx3 = b;
			b = 0;
	}else if(c > a && c > b && c > d && c > e){
		mx3=c;
		c = 0;
	}else if(d > a && d > b && d > c && d > e){
		mx3 = d;
		d = 0;
	}else if(e > a && e > b && e > c && e > d){
		mx3 = e;
		e = 0;
	}
	S = mx + mx2 + mx3;
	cout << S;
	
	return 0;
}
