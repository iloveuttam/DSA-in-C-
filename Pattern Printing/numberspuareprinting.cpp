#include <iostream>
using namespace std;
int main(){
    cout<<"Program to print the no in sqaure";
    cout<<"enter the no of rows or the coloum";
    int x ;
    cin>>x;
    for(int i =65;i<x+65;i++){

        for(int j=1;j<=x;j++){

            cout<<char(i);//by changing the value of i you can change the patter question

        }
        cout<<endl;
    }
}