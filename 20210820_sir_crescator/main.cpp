#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("crescatoare.in");
ofstream fout("crescatoare.out");
int n,a,b,c;
int main()
{
    //Luka, type your code below!
	fin >> n;
	fin >> a;
	c=1;
	while(n>0 && c==1){
		fin >> b;
		if(a>b){
			c=0;
		}
		a=b;
		n--;
	}
	if(c==1){
		cout << "da";
	}else
		
		cout << "nu";
	return 0;
}
