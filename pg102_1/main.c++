#include <iostream>
using namespace std;
float v[1000];
int n,c;
int main(){
    cout<< "n= ";cin>>n;
    for(int i = 0;i<n;i++){
        cout<< "v["<<i+1<<"]= ";
        cin>>v[i];
    }
    for(int i = 0;i<n;i++){
        if(int(v[i])<100&&int(v[i])>9)
        c++;
    }
    cout<<c;


    return 0;
}