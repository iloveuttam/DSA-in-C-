#include <iostream>
using namespace std;
int main(){
    int a[4]={756,8,49,48};
    int n;
    cin>>n;
     int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
     cout<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }

}