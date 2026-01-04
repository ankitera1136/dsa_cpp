#include<iostream>
using namespace std;
int main(){
    int a; 
    cout<<"Enter a value to check for prime number"<<endl;
    cin >>a;
    bool isprime = 1;

    for(int i=2;i<a;i++){
        if(a%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1){
        cout<<a<<" is a prime number"<<endl;
    }
    else{
        cout<<a<<" isn't a prime number"<<endl;
    }
    return 0;
}