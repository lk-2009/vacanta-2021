#include <iostream>
#include <cmath>
using namespace std;

long v[100],n,aux;
int main(){

    cout << "n= ";cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"v["<<i+1<<"]= ";
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        aux = 0;
        while(pow(aux,3)<v[i]){
            aux++;
        }
        if(pow(aux,3)==v[i]) cout<< v[i]<<" ";
    }
    

}