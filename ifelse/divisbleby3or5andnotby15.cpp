#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
if (n%3==0 || n%5==0 ){
        if(n%15==0){
        cout<<"the number is  divisble by 15 and also divisble by 3 or 5  :"<<n;
    }
       else{
        cout<<"the number is not divisble by 15 but divisble by 3 or 5";
    }
}
else{
    cout<<"the no is not either divisble by 3,5,15";
}
}