#include <iostream>
using namespace std;
int main(){
    cout<<"enter the row no for the printing the 01 pattern";
    int x;
    cin>>x;
    int count=1;
    int cot=0;
    for(int i=1;i<=x;i++){
        for(int j=1; j<=i;j++){
             if((i+j)%2==0){
                cout<<count;
             }
             else{
                
                cout<<cot;
             }

        }
        cout<<endl;
    }
}