#include <iostream>
using namespace std;

int main(){
    cout<<"program to change in the index for even increase by 10 and odd multiply by 2"<<endl;
    cout<<"enter the size of the array ";
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        if(i%2==0){
            arr[i]=arr[i]+10;
        }
        else{
            arr[i]=arr[i]*2;
        }
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }

}