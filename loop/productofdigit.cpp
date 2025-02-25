#include <iostream>
using namespace std;
int main(){
    cout<<"program to print the product of the input digits"<<"enter the digits";
    int x;
    int a;
    int prod = 1;
    cin>>x;
    for(int i =1;i<=x;i++){
       
        a = x%10;
        x=x/10;
        if(a==0){
            continue;
        }
        prod = a*prod;
    }
    cout<<prod;
}