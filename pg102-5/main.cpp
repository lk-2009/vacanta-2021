#include <iostream>
using namespace std;

int v[1000],n,c;
int main(){

    //luka type yor code below ;)

    cout<<"n= ";cin>> n;
    for(int i = 0;i<n;i++){
        cout<<"v["<<i+1<<"]= ";
        cin>> v[i];
    }
    
    for(int i = 0;i<n;i++){
        if(v[0]==v[i]) c++;
    }
    cout<< c;
}





