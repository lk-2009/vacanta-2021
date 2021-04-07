#include <iostream>
using namespace std;
int a,b,c;
int main()
{
    //Luka, type your code below!
	cin >> a >> b;
	/*c = a;
	a = b;
	b = c;
	 */
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << " " << b;
	return 0;
}
