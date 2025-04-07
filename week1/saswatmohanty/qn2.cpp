/*Write a C++ prog to input 3 sides of a triangle and verify possibility and if it is an equilateral, isoceles or scalene*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter 3 sides of the triangle:"<<endl;
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    cout<<"C: ";
    cin>>c;
    cout<<"sides given are: "<<a<<", "<<b<<" & "<<c<<endl;
    if(a+b>c && b+c>a && a+c>b){
        cout<<"valid triangle"<<endl;
        if(a==b==c){
            cout<<"equilateral"<<endl;
        }
        else if(a==b || a==c || b==c){
            cout<<"isoceles"<<endl;

        }
        else{
            cout<<"scalene"<<endl;
        }
    }
    else{
        cout<<"invalid triangle"<<endl;
    }
    return 0;

}
