#include <iostream>
using namespace std;
int n;
int main()
{
    //Luka, type your code below!
	cin >> n;
	for(int i = 1; i <= n; i++){
		cout << i<< " ";
	}
	cout << endl;
	for(int i = n; i >= 1; i--)
		cout << i<< " ";
	return 0;
}
