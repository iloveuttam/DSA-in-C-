#include <iostream>
using namespace std;
int main(){
    cout<<"Program to print the reverse of a given no";
    cout<<"enter the no :";
    int x,a;
    cin>>x;
    for(int i =1;1<=x;i++){
         a=x%10;
         cout<<a;
         x=x/10;
    }
}