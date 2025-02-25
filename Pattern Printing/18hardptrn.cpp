#include <iostream>
using namespace std;
int main(){
    cout<<"enter the no of rows ";
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=(x-i);j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
