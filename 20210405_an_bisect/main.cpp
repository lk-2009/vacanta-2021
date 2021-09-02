#include <iostream>
using namespace std;
int x;
int main()
{
    //Luka, type your code below!
	cout << "Anul de verificat: ";cin >> x;
	/*if(x % 4 == 0 && x % 100 > 0){
		cout << x << " este an bisect";
	}else
		if(x % 400 == 0){
		cout << "an bisect";
		}else
		cout << "an obisnuit";
		*/
	cout <<"Anul " << x << " este ";
	if(x % 4 > 0) cout << "an obisnuit";
	else
		if(x % 100 > 0) cout << "an bisect";
	else
		if(x % 400 == 0) cout << "an bisect";
	else
		cout << "an obisnuit";
	return 0;
}
