#include <iostream>
using namespace std;
int main(){
    cout<<"program to print the diffrence between the sum of the odd and even idices"<<endl;
    cout<<"enter the size of the array"<<endl;
    int x;
    cin>>x;
    int arr[x];
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        if(i%2==0){
            sumeven=arr[i]+sumeven;
        }
        else{
            sumodd=sumodd+arr[i];
        }
    }
       cout<<"the diffrence is "<<sumeven-sumodd;
}