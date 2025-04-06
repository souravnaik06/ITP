//to find the largest digit in a number
#include<iostream>
using namespace std;
int main()
{
    int a=256;
    int num,largest=0;
    while(a>0)
    {
      num=a%10;
      if(num>largest)
      {
        largest=num;
      }
      a=a/10;
    }
    cout<<"the largest number is"<<largest<<endl;
    return 0;
}