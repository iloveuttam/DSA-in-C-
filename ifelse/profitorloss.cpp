#include <iostream>
using namespace std;
int main(){
    cout<<"let the item be anything";
    int x,y ;
    cout<<"enter the cost prize ";
    cin>>x;
    cout<<"enter the selling prize ";
    cin>>y;
    if(x<y){
        
        float profit = (float(y-x))/x*100;
        cout<<"it's in a profit and the profit is "<<profit;
    }else{
        
        
        float loss = ((x-y)/float(x))*100.0;
        cout<<"it's in a loss and the loss is:"<<loss;
    }
}
