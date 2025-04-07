/*Write a C++ prog tp print the number 1 to 100, but replace multiples of 3 with "fizz" and multiple of 5 with "buzz" and if divisible by both print "fizzbuzz"*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;++i){
        if(i%3==0 && i%5==0){
            cout<<" fizzbuzz "<<endl;
        }
        else if(i%3==0){
            cout<<" fizz "<<endl;
        }
        else if(i%5==0){
            cout<<" buzz "<<endl;

        }
        
        else{
            cout<<"  "<<i<<endl;

        }


    }

}