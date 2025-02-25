#include <iostream>
using namespace std;
int main(){
    cout<<"printing of odd number using continue"<<endl;
    for(int i = 1;i<=100;i++){
        if(i%2==0){
            continue;

        }
        cout<<i<<endl;
    }
}