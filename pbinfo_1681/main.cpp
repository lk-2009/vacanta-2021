#include <iostream>
using namespace std;
int main()
{
    // Luka, type your code below!
    int a, b, ab;
    cin >> a >> b;

	ab = 1;
    if(b > 0) {
		for(int i = 1; i <= b; i++) {
			ab = ab * a;
		}
	}		
    
	cout << ab;
    return 0;
}


/*

    int a, b, ca;
    cin >> a >> b;

    if(b == 0) {
	cout << 1;
    } else {
	ca = a;
	for(int i = 1; i < b; i++) {
	    a = a * ca;
	}
	cout << a;
    }
	
	*/