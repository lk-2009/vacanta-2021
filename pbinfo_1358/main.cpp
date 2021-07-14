#include <iostream>
using namespace std;
int y,x;
int main()
{
    //Luka, type your code below!
	cin >> x >> y;
if((x % 2 == 0 && y == x + 1) || 
	(y % 2 == 0 && x == y + 1)) cout << "Andrei e mai responsabil";
else
	cout << "minciuna";
	
	

	
	return 0;
}
