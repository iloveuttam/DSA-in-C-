#include <iostream>
using namespace std;
int main(){
    cout<<"enter the no which you want to print";
    int n,s;
    cin>>n;
    for(int i =1; i<=n/2;i++){
        if(n%i==0){
          s=i;  
        }
    }
    cout<<s;
}