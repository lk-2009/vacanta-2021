#include <iostream>
using namespace std;
int v[150], n, x, k, mn;
int main()
{
    // Luka, type your code below!

    cout << "n=";
    cin >> n;
    for(int i = 1; i <= n; i++) {
		cout << "x[" << i << "]=";
		cin >> v[i];
    }
    mn = v[1];
    k = 1;
    for(int i = 2; i <= n; i++) {
	if(v[i] < mn) {
	    mn = v[i];
	    k = 1;
	} else if(v[i] == mn)
	    k++;
    }

    cout << "min = " << mn;
    cout << " min apare de " << k << " ori";
    return 0;
}
