#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("vector.in");
ofstream fout("vector.out");

int v[100],o[100],n,j;
int main(){

    fin>> n;
    for(int i = 0;i<n;i++){
        fin>>v[i];
    }
    for(int i = 0;i<n;i++){
        if(v[i]>=10&&v[i]%100<10){
            o[j++]=v[i];
        }
    }
    for(int i = j-1;i>=0;i--){
        fout<<o[i]<< " ";
    }   



}