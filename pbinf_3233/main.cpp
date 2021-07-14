#include <iostream>
using namespace std;

int main()
{
    //Luka, type your code below!
	int n;
	cin >> n;
	for(int i = n; i >= 0; i--){
		if(i % 2 == 1)
			cout << i << " ";
	}
	return 0;
}
