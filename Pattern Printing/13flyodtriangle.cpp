#include <iostream>
using namespace std;
int main(){
    cout<<"enter the no you want to print";
    int x;
    cin>>x;
    int count=0;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}