#include <iostream>
using namespace std;
int main(){
    cout<<"program to reverse the array and put into the another array"<<endl;
    cout<<"enter the size of the array"<<endl;
    int x;
    cin>>x;
    int a[x];
    int b[x];
    cout<<"enter the element of the array a[]"<<endl;
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=1;i<=x;i++){
        b[x-i]=a[i-1];
    }
    cout<<"the element in the array b[ ]is ";
    for(int i=0;i<x;i++){
        cout<<b[i]<<" ";
    }
}