#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");

int v[100],n,c;
int main(){

    fin>>n;
    for (int i = 0; i < n; i++)
    {
        fin>>v[i];
    }
    for(int i = 0;i<n;i++){
        if(v[i]==i+1) fout<< v[i]<<" ";
    }
    

}
