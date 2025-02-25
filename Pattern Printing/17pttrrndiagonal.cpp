#include <iostream>
using namespace std;
int main(){
    cout<<"Program to print the star in diagonal of the square";
    cout<<"enter the side";
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x ; j++){
       if(i==j){
        cout<<"*";
       }
       else{
        cout<<" ";
       }
        }
        cout<<endl;
    }
}