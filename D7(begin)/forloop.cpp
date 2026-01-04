#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    cout<<"The counting of n digits is"<<endl;

    int i =1;
    for(;;){
        if(i<=n){
            cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }

    for (int a = 0 , b =1 ; a<=0 && b>=1 ; a--,b--){
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}