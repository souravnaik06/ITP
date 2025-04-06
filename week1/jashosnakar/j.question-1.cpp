//to print a number from 1 to 100 but replace multiples of 3 with fizz and multiples of 5 with buzz and if divisible by both print fizzbuzz
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0 && i%5==0)
        {
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%3==0)
        {
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0)
        {
            cout<<"Buzz"<<endl;
        }
       
        else
        {
            cout<<i<<endl;
        }
    }
    return 0;
    
}