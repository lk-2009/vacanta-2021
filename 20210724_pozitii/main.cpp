#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pozitii.in");
ofstream fout("pozitii.out");

int n,x,i,c;
int main()
{
    //Luka, type your code below!
	fin >> n;
	for(int i=0; i < n;i++){
	fin >> x;
	cout << x << " ";
	if(i == x){
		c++;
	}
	}
	fout << c;
	return 0;
}
