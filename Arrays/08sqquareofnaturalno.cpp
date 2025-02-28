#include <iostream>
using namespace std;
int main(){
    cout<<"program to print the no square of the no of size square must be natural no";
    cout<<"enter the size";
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        arr[i]=(i+1)*(i+1);
        
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    
}