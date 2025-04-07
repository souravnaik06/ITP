//Write a C++ prog to find wheter a given number is perfect or not
#include<iostream>
using namespace std;
int main(){
    int a, i=1,per=0;

    cout<<"Enter num: ";
    cin>>a;
    while(i*i<=a){
        if(i*i==a){
            per=1;
            break;
        }
        i++;
    }
    if(per){
        cout<<"perfect square"<<endl;
        
    }
    else{
        cout<<"not perfect square"<<endl;

    }
    return 0;


}