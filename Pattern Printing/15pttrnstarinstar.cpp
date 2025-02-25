#include <iostream>
using namespace std;
int main(){
    cout<<"program to print the star star pattern";
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1; j<=x;j++){
            int y=((x/2)+1);
            if(i==y || j==y){
               cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}