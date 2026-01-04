#include<iostream>
using namespace std;
bool sea(int arr[],int size , int key){
    for (int i=0 ; i<size ; i++){
        if(arr[i]==key){
            return 1;
        }
    }

    return 0;

}

int main(){
    int arr[8]={2,3,5,34,23,4,35,56};
    int key;
    cout<<"Enter element to search"<<endl;
    cin>>key;

    bool found = sea(arr,8,key);
    if(found){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}