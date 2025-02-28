//think by me and take almost 2hours after many attempts
 #include <iostream>
using namespace std;
int main(){
    cout<<"program to print the second largest element in the array"<<endl;
    cout<<"enter the size of the array"<<endl;
    int x;
    cin>>x;
    int arr[x];
    int fl=0; //first large
    int sl=0;  //second large
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
              if(fl<arr[i]){
                sl=fl;
                fl=arr[i];
              }
            }
            cout<<sl;
}