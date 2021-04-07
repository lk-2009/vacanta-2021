#include <iostream>
using namespace std;
int a,b,x;
int main()
{
	cin >> a >> b;
	//x = b / a;
	
	if(a == 0){
		if(b == 0){
			cout << "valori infinite";
		}else
			cout << "nu are valori";
	}else{
		x = b / a;
		cout << x;
	}
	return 0;
}
