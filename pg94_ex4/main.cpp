#include <iostream>
using namespace std;
int poz,nul,neg,n;
float x;
int main()
{
    //Luka, type your code below!
	cin >> n;
	for(int i = 1; i<= n;i++){
		cin >>x;
		if(x> 0) poz++;
			else if(x==0) nul++;
				else neg++;
	}
	cout<< poz <<" pozitive "<< endl;
	cout << nul << " nule "<<endl;
	cout << neg << " negative ";
	return 0;
}
