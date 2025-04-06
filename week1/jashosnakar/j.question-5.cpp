//to check whether a number is perfect square
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number";
    cin>>a;
    if(a<=0)
    {
       cout<<"invalid";
    }
    int num;
    num=sqrt(a);
    if(num*num==a)
    {
        cout<<a<<"is a perfect square"<<endl;
    }
    else{
        cout<<a<<"is not a perfect square"<<endl;
    }
    return 0;
}
