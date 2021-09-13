#include <iostream>
using namespace std;
float v[1000],x,S;
int n;
int main(){

    cout<<"n= ";cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"v["<<i+1<<"]= ";
        cin>>v[i];
    }
    for(int i = 0;i<n;i++){
        x=int(v[i]*10)%10;
        cout<<x<<endl;
         if(int (x) == 0&& v[i] != int(v[i])){
            cout<<v[i]<<endl;
            S += v[i];
         }
    }
    cout<<S;






}