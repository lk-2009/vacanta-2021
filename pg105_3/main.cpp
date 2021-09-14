#include <iostream>
#include <cmath>
using namespace std;

long v[100],n;
int main(){

    cout<<"n= ";cin>>n;
    for(int i = 0;i<n;i++){
        v[i]=pow(i+1,2);
    }
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}