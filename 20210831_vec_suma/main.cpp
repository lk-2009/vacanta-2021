#include <iostream>
using namespace std;
int v[150],S,n;
int main()
{
    //Luka, type your code below!
	cin >> n;
	for(int i = 1;i <=n;i++){
		v[i] = i;
	}
	for(int i = 1; i <= n;i++)
		S = S + i;
	cout << S;
	return 0;
}
