#include <iostream>
using namespace std;
int64_t n,k,x,c;
int main()
{
    //Luka, type your code below!
	cout << "n= "; cin >> n;
	cout << "k= "; 	cin>> k;
	for(int i=1; i <= n; i++){
		cout << "x"<<i<<"= ";
		cin >> x;
		if(i % 2 ==0 && x % k == 0){
			c++;
		}
	}
	cout << c;
	return 0;
}
