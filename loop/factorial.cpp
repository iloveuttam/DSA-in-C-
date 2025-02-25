#include <iostream>
using namespace std;
int main(){
    cout<<"enter the no for factorial";
    int x;
    int prod=1;
    cin>>x;
    for(int i=1;i<=x;i++){
        prod=i*prod;
    }
    cout<<prod;
}