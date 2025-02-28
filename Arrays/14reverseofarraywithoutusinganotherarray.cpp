#include <iostream>
using namespace std;
int main(){
    cout<<"write the program to reverse the array without using any extra array"<<endl;
    int x=6;
    int a[6]={4,9,2,7,3,0};
    int size=x;
    size=size-1;
    
    for(int i=0;i<(x/2);i++){
          int temp;
          temp=a[i];
          a[i]=a[size-i];
          a[size-i]=temp;
       
    }
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
    }
}