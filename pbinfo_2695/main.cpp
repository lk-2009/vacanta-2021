#include <iostream>
#include <cmath>
using namespace std;
int n,x,p;


int main()
{
    // Luka, type your code below!
    cin >> n;
    for(int i = 1; i <= n; i++) {
		cin >> x;
		if((int)cbrt(x) == cbrt(x))
			cout << "DA" << endl;
		else
			cout << "NU" << endl;
    }
	return 0;
}


int main2()
{
    //Luka, type your code below!
	cin >> n;
	string raspuns;
	for(int i = 1; i <= n; i++){
		cin >> x;
		x= abs(x);
		p=1;
		raspuns = "NU";
		while(p<=x){
			if(x == p*p*p)
				raspuns = "DA";
			p++;
		}
			cout << raspuns << endl;
	}

	return 0;
}


