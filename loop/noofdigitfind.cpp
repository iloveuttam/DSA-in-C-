#include <iostream>
using namespace std;
int main(){
    cout<<"Program to find the no of digits"<<endl<<"enter the no";
    int x;
    int b=0;
    int a=1;
    cin>>x;
    for(int i =1;i<=x;i++){
    if(x>0){
        x=x/10;
        b++;
    }

    }
    cout<<b;
    
}