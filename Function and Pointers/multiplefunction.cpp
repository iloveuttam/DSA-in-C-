#include <iostream>
using namespace std;
void usa(){
    cout<<"you are in usa"<<endl;
    // india();  icant assign like this it will cause error because india function is defined after usa
     

    return;
}
void india(){
    cout<<"you are in india"<<endl;
    // india(); this will cause infinite loop
    usa();
    return;
}
int main(){
    cout<<"you are in main"<<endl;
    india();
    usa();
}