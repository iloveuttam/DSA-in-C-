#include <iostream>
using namespace std;
int main(){
    int count=0;
    cout<<"progrma to find the no of greater elment present in the given arrray where the no is also given";
    cout<<endl<<"enter the size of the array"<<endl;
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<"enter the no which you want to find the no greater in the array"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<x;i++){
        if(n>arr[i]){
            count++;
        } 
            
    }
    cout<<"the no is "<<count;
}