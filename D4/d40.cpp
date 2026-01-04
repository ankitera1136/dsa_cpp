#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x,ans;
    cin>>x;

    ans =0 ;
    while(x!=0){
        int digit = x%10;
        if(ans<(INT_MIN/10)||ans>(INT_MAX/10)){
            return 0;
        }
        ans = (ans*10)+digit;
        x = x/10;
    }
    cout<<ans<<endl;
    return 0;
}