#include <iostream>
using namespace std;
int main(){
    cout<<"enter the all  three no ";
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is the greatest";

    }
    else if (b>a && b>c){
        cout<<"b is a the greatest";

    }
    else if (a==b && b==c){
        cout<<"the number is same ";

    }
    else{
        cout<<"the c is greater";
    }
}