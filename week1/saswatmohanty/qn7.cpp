//pattern #2
/*
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,num=1;
    cout<<"Enter value: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<num;
            if(j!=n){
                cout<<"*";
                num++;
            }

        }
        cout<<endl;
    }
}*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int num = 1; 

    for(int i = 1; i <= n; i++) {     
        for(int j = 1; j <= n; j++) {    
            cout << num;
            if(j != n) cout << "*";      
            num++;                      
        }
        cout << endl;
    }

    return 0;
}