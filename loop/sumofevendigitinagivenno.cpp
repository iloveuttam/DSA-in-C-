#include <iostream>
using namespace std;
int main(){
    cout<<"Program to print the sum of only even no given in the digit";
    cout<<"enter the no";
    int x,a;
    int sum=0;
    cin>>x;
    for(int i=1;i<=x;i++){
        a=x%10;
        x=x/10;
        if(a%2==0){
            sum = sum+a;
        }

    }
    cout<<sum;
}