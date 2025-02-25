#include <iostream>
using namespace std;
int main(){
    cout<<"program to print the sum of given no"<<endl<<"enter the no";
    int n,s;
    int sum =0;
    cin>>n;
    for(int i =1;i<=n;i++){
        if(n>=0){
          s=n%10;
          n=n/10;
          sum=sum+s;
        }
        else{
            break;
        }
    }cout<<sum;
}