#include <iostream>
using namespace std;

long v[1000],n,aux,S;
int main(){

    cin>>n;
    for(int i = 0;i<n;i++){
        cin>> v[i];
    }
    for(int i = 0;i<n;i++){
        aux=v[i];
        S=0;
        while(v[i]>0){
            S = S + v[i]%10;
            v[i]=v[i]/10;
        }
        if(S%2==0) cout<<aux<<" ";
    }
}