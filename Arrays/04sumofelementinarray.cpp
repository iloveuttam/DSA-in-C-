#include <iostream>
using namespace std;
int main(){
    int sum=0;
    cout<<"enter the no of element in the array";
    int n;
    cin>>n;
    int a[n]={};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }

   cout<<"the sum of the array is"<<sum; 
}