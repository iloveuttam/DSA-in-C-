#include <iostream>
using namespace std;
int main(){
   int ap = 0;
   int a,n,d;
   cout<<"enter the first no";
   cin>>a;
   cout<<"enter the last no";
   cin>>n;
   cout<<"enter the common diffrence no";
   cin>>d;
 
    for(int i=1;ap<n;i++){
       if(i==1){
        ap = a;
        cout<<ap<<endl;
       }
       else{
        ap = a + (i-1)*d;
        cout<<ap<<endl;
       }
        
        
        
    }
}