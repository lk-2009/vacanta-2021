#include <iostream>
using namespace std;

int main()
{
    //Luka, type your code below!
	int n,m,cn;
	cin >> n >> m;
	if(m == 1){
		cout << 0;
		return 0;
	}
	cn = n; // 5 -> p1
	for(int i = 2; i<= m; i++){
		n = n * cn; // 5 * 5 -> p2
		//cout << n << " " << i << " "<<m << endl; 
		if(m == n){
			cout << i;
		}
	}
	return 0;
}
