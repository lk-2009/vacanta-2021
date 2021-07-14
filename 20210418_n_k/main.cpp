#include <iostream>
using namespace std;
int n,k,b;
int main()
{
    //se dau n si k sa se afiseze toate nr mai mici sau egale cu n divizibile cu k!
	cin >> n >> k;
	b = k; 
	/*while(a <= n){
		if(a % k == 0){
			cout << a << " ";
		}
		a++;
	*/
	while(b <= n){
		cout << b << " ";
		b = b + k;
	}
	return 0;
}
