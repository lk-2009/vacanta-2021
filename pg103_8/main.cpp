#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("vect.in");
ofstream fout("vect.out");
int v[100],o[100],n,j;
int main(){

    fin>> n;cout<<n;
    for(int i = 0; i<n; i++){
        fin>> v[i];
    }
    for(int i = 1;i< n-1;i++){
        if(v[i]==(v[i-1] * v[i+1]))
            o[j++]=v[i];
        }
    for(int i = j-1;i>=0;i--)
        fout<<o[i]<<" ";
    


}