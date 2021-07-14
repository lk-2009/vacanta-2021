#include <iostream>
using namespace std;
int n, a,g,p;
int main()
{
    //Luka, type your code below!
	g = 1;
	cin >> n >> a;
	for(int i=0; i <= a; i++)
		g = g * 10;
	p = g * n;
	cout << p;
	return 0;
}
