#include <iostream>
using namespace std;
char op;
int a, b, x;
int main()
{
    // Luka, type your code below!
    cin >> a >> op >> b;
    switch(op) {
    case '+':
	x = a + b;
	break;
    case '-':
	x = a - b;
	break;
    case '/':
	x = a / b;
	break;
    case '*':
	x = a * b;
	break;
    default:
	cout << op << " INCORECT//ERROR";
	return -1;
    }
	cout << a << " " <<op <<" " << b << " = " << x;
    return 0;
}
