#include <iostream>
using namespace std;
int n,nrp,nri;
int main()
{
    //Luka, type your code below!
	cin >> n;
	while(n > 0){
		nrp = nrp + 1 - n % 2;
		nri = nri + n % 2;
		n/=10;
	}
	cout << nrp << " " << nri;
	return 0;
}
