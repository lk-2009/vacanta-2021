#include <iostream>
using namespace std;
int n,S;
int main()
{
    //Luka, type your code below!
	cin >> n;
	for(int i = 0; i <= n; i++){
		S= S + i*i;
	}
	cout << S;
	return 0;
}
