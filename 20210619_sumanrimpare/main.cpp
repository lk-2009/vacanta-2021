#include <iostream>
using namespace std;
long n,S;
int main()
{
    //Luka, type your code below!
	cin >> n;
	for(int i=0; i<= n; i++){
		if(i%2==0) continue;
		S=S+i;
		}
		cout << S;
	return 0;
}
