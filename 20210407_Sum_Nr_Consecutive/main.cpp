#include <iostream>
using namespace std;
int a,b,x,v1,v2,v3;
// pb info: 1740
int main()
{
    //Luka, type your code below!
	cin >> a >> b;
	x = (a-(b-1)* b / 2); 
	if( x % b == 0){
		cout << "DA ";
	}else
		cout << "NU ";
	return 0;
}
