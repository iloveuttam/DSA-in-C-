#include <iostream> 
using namespace std;
int main(){
    cout<<"program to find the min element of the array";
    cout<<"enter the no of element"<<endl;
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int min=arr[0];//int_min is also option

    for(int i=0;i<size;i++){
        if(arr[i]<min) min=arr[i];

    }
    cout<<min;

    //we can also intialize with the function int_min it give the minimum no of cyclic property;
    cout<<INTMAX_MIN;
}