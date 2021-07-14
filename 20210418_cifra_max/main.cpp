#include <iostream>
using namespace std;
int a,mx,mn,uc;
int main()
{
    //Luka, type your code below!
	cin >> a;
	cout << "max = ";
	while(a > 0){
		uc = a % 10;
		if(uc > mx || mx == 0){
			mx = uc;
		}
		if(uc < mn || mn == 0){
			mn = uc;
		}
		a/=10;
	}
	cout << mx << endl << "min = "<< mn;
	return 0;
}
