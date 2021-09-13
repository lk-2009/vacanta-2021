#include <iostream>
#include <cmath>
using namespace std;

int v[1000],n,k,c,x,i,ck;
int main(){

    cin>>n;
    cin>>k;
    for( i = 0;i<n;i++){
        cout<<"v["<<i+1<<"]= ";
        cin>>v[i];
    }
    ck=k;
    while(k>0){
        c++;
        k=k/10;
    }
    x= pow(10,c);
    for( i = 0;i<n;i++){
        if(v[i] % x == ck) cout<< v[i] << " ";
    }



}