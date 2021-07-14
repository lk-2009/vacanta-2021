#include <iostream>
#include <cmath>
using namespace std;
int n,x,p,ok;
int main()
{
    //Luka, type your code below!
	cin >> n;
	for(int i = 1; i <= n; i++ ){
		cin >> x;
		
		if ((int)sqrt(x) == sqrt(x)) cout << "DA" << endl;
	   else cout << "NU" << endl;
	}
	return 0;
}



/*
 *
string raspuns;
int main()
{
    //Luka, type your code below!
	cin >> n;
	
	for(int i = 1; i <= n; i++ ){
		p = 1;
		cin >> x;
		//raspuns = "NU";
		while(p <= x/2){
			if(p * p == x){
			//	raspuns = "DA";
				break;
			} 
			p++;
		}
		//cout << raspuns << endl;
		if (x == p*p) cout << "DA" << endl;
	   else cout << "NU" << endl;
	}
	return 0;
}

 * */