#include <iostream>
using namespace std;
int main(){
    cout<<"enter the side of triangel";
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b>c) &&(b+c>a) &&(c+a>a))
    cout<<"yes it is triangle";
    else{
        cout<<"no it is not triangle";
    }
}