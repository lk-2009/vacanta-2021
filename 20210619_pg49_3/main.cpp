#include <iostream>
using namespace std;
int n;
int main()
{
    //Luka, type your code below!
	cin >> n;
	for(int i = 0; i <= n; i++){
		cout << i*i <<" ";
		if ((i+1)% 5 == 0) 	cout << endl; 
	}
	return 0;
}
