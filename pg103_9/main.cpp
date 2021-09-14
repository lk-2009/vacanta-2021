#include <iostream>
using namespace std;

char c,v[100];
int n;
int main(){

    cin>>n;
    cin>>c;
    for (int i = 0; i <n ; i++)
    {
        cout<< "v["<< i+1<<"]= ";
        cin>> v[i];
    }
    for(int i = 0;i<n;i++){
        if(v[i]==c) cout<< i+1<<" ";
    }
    
}