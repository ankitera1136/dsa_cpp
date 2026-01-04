#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;

  bool is_prime = 1;

  if(n==0||n==1){
    cout<<"neither prime nor composite"<<endl;
    return 0;
  }
  
  for(int i=2;i<n ;i++){
    if(n%i==0){
      cout<<"not a prime"<<endl;
      is_prime = 0;
      break;
    }
  }
  if(is_prime==1){
    cout<<"Number is prime"<<endl;
  }
  return 0;
}