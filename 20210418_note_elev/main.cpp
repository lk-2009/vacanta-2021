#include <iostream>
using namespace std;
long n,p,S,c;
int main()
{
    //Luka, type your code below!
	n = 58109810;
	p=1;
	while(p * 10 < n){
		p*=10;
	}
	while(n > 0){
	c++;
		if(n / p == 1){
			if(n / (p/10) == 10){
				cout << 10 << " ";
				n%=p;
				p/=10;
				S = S + 10;
			}
			cout << c << endl;
		}else
			cout << n / p << " " ;
			S = S + n / p;
			cout << c << endl;
		n%=p;
		p/=10;
		
	}
	cout << endl << "media aritmetica este:" << S  << " " << c<<" " << S/ c ;
	return 0;
}
