//to input 3 sides of a triangle and check whether a triangle can be drawn from it or not. if yes the check which type of triangle it is
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 sides of the triangle:"<<endl;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
        cout<<"triangle can be drawn using these sides"<<endl;
        if(a==b && b==c && c==a)
        {
            cout<<"it is a equillateral triangle"<<endl;
        }    
        else if(a!=b && b!=c && c!=a)
        {
            cout<<"it is a scalene triangle"<<endl;
        }
        else if(a==b && a!=c && b!=c)
        {
            cout<<"it is an isoscalese triangle"<<endl;
        }
    } 
    else
    {
        cout<<"triangle cannot be drawn using these sides"<<endl;
    }
    return 0;
}