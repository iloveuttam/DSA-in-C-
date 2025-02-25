#include <iostream>
using namespace std;
int main(){
    cout<<"Progrma to print the hollow rectangle";
    cout<<"enter the length of rectangle";
    int l;
    cin>>l;
    cout<<"enter the breadth of rectangle";
    int b;
    cin>>b;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=l;j++){
            if(i==1 || j==1 || i==b || j==l){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}