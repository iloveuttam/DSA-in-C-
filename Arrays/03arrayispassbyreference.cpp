#include <iostream>
using namespace std;
void change (int a[]){
    a[3]=90;

}
int main (){
    int a[]={84,94,75,23,45};
    int n =5;
    change(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}