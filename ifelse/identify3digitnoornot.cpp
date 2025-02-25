#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    
    int a= n/10;
    if (9<a && a<100){
        cout<<"the number is three digit"<<n;
    }
    else{
        cout<<"the number is not three digit"<<n;
    }
   

}