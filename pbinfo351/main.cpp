#include <iostream>
using namespace std;
int n,x;
int main()
{
    //Luka, type your code below!
	cin >> n;
	for(int i= 1; i <= n;i++){
		for(int j = 1; j <= i;j++){
			cout << j << " ";
			
		}
		cout << endl;
	}
	return 0;
}
