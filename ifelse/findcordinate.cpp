#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the cordinate x:";
    cin>>x;
    cout<<"enter the cordinate y:";
    cin>>y;
    if (x>0 && y>0)
    {
          cout<<"it is in a first quadrant";
        
    }
    else if (x==0 && y==0){
        cout<<"at the origin";
    }
    else if(x>0){
        cout<<"it is fouth quadrant";

    }
    else if ( y>0){
        cout<<"it is in second quadrant";
    }
    else{
        cout<<"its in a third quadrant";
    }
    
}