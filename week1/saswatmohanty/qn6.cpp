//write a C++ prog to print patterns
#include<iostream>
using namespace std;
int main(){
    int i,j,n,z;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            for(z=1;z<=i;z++){
                cout<<j;
            }
        }
        cout<<endl;

    }
    return 0;
}