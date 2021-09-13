#include <iostream>
using namespace std;

int v[1000],n;
int main(){

    cout << "n=";cin>> n;
    for(int i = 0;i<n;i++){
        cout<<"v["<<i+1<<"]= ";
        cin>>v[i];
    }
    for(int i = 0;i<n;i++){
        if(v[i]%10==2) cout<< v[i]<< " ";
    }
}