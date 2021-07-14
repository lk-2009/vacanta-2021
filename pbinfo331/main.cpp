#include <iostream>
using namespace std;
int n,a;
int main()
{
    //Luka, type your code below!
	a = 1;
	cin >> n;
	for(int i = n; a <= n; i--){
			cout << (2 * i) - 1 << " ";
			a++;
	}
		
	return 0;
}
