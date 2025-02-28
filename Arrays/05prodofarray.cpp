#include <iostream>
using namespace std;
int main(){
    int prod=1;
    cout<<"enter the no of element in the array";
    int n;
    cin>>n;
    int a[n]={};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        prod=prod*a[i];
    }

   cout<<"the prod of the array is"<<prod; 
}