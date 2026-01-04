#include<iostream>
#include<array>
using namespace std;

void parr(int arr[],int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    } 
}
int main(){
    int arr[50]={2,2,4,5};
    parr(arr,5);
    int arrsize = sizeof(arr)/sizeof(int);
    cout<<endl; 
    parr(arr,arrsize);
    return 0;
}