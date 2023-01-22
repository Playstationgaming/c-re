#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fourth;
    n=n/10;
    fourth=n%10;
    n=n/1000;
    cout<<n;
    cout<<fourth+n<<endl;

return 0;
}