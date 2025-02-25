#include <iostream>
using namespace std;
int main(){
    cout<<"code for composite "<<endl<<"enter the no";
    int n ;
    int f=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
           f++;
           if(f>2){
            cout<<" composite";
            break;
           }
           
        }
        
    }
    if(f<=2){
        cout<<" Prime";
    }
}