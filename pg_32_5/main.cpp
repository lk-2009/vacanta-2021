#include <iostream>
using namespace std;
char c;
int main()
{
    // Luka, type your code below!
    cin >> c;
    switch(c) {
    case '+':
    case '/':
    case '-':
    case '*':
	cout << "da";
	break;

    default:
	cout << "nu";
	break;
    }
    return 0;
}
