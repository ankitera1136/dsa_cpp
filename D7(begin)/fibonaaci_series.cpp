#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of terms "<<endl;
    cin>>n;

    int a = 0 ;
    int b = 1;
    if(n>=1)cout<<a<<" ";
    if(n>=2)cout<<b<<" ";
    for (int i = 3 ;i<=n;i++){
        int next = a+b;
        cout<<next<<" ";
        a = b;
        b = next;
    }
    return 0;
}