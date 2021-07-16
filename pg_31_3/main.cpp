#include <iostream>
using namespace std;
char c;
int n;
int main()
{
    //Luka, type your code below!
	cin >> c;
	n = c;
	if(c >= 'A' && c <= 'Z'){
		cout << "DA";
	}else 
		cout << "NU";
		cout << '\n' << c;
	return 0;
}
