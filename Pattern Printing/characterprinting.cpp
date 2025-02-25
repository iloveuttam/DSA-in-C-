#include <iostream>
using namespace std;
int main(){
    cout<<"Program to print the no in sqaure";
    cout<<"enter the no of rows or the coloum";
    int x ;
    cin>>x;
    for(int i =1;i<=x;i++){

        for(int j=97;j<x+97;j++){

            cout<<char(j);//by changing the value of i you can change the patter question

        }
        cout<<endl;
    }
}