/*Write C++ prog to find the largest digit in a number*/
#include<iostream>
using namespace std;
int main() {
    int a,b,c=0;
    cout<<"Enter your desired number: ";
    cin>>a;
    cout<<"Entered num: "<<a<<endl;
    while(a>0){
        b=a%10;
        if(b>c){
            c=b;
        }
        a/=10;

    }
    cout<<"Largest digit is: "<< c<<endl;


    return 0;
}