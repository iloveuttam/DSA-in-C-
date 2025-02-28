//program to check the array is palindrone or not
#include <iostream>
using namespace std;
int main(){
    cout<<"enter the size "<<endl;
    int x;
    cin>>x;
    int a[x];
    int s=x;
    s=s-1;
    string mn ="true";
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=0 ;i<x;i++){
        if(a[i]!=(a[s-i])){
            mn="false";
            
        }
    }
    cout<<mn;
}