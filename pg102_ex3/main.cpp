#include <iostream>
using namespace std;

int v[1000],n,c;
int main(){

cin>>n;
for (int i = 0; i < n; i++)
{
    cout<<"v["<<i+1<<"]= ";
    cin>>v[i];
}
for (int i = n-1; i >=0 ; i--)
{
    if(v[i]==v[n-1]) c++;
}
cout<<c;









}
