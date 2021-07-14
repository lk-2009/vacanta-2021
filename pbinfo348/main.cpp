#include <iostream>
using namespace std;
int n,p,cn;
int main()
{
    //Luka, type your code below!
	cin >> n >> p;
	cout << "1 ";
	cn=n;
	while(n <= p){
		cout << n << " ";
		n = n * cn;

	}
	return 0;
}
