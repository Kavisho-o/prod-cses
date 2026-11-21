#include <iostream>
using namespace std;

void solve(){

    int n; cin>>n; 

    if (n==1) { cout<<n; return ; }
    if (n<=3) { cout<<"NO SOLUTION"; return ; }
    if (n==4) { cout<<2<<" "<<4<<" "<<1<<" "<<3; return ; }
    
    int e=(n%2==1) ? n-1 : n;
    while (e!=0){

        cout<<e<<" ";
        e-=2;

    }

    int o=(n%2==0) ? n-1 : n;
    while (o!=-1){

        cout<<o<<" ";
        o-=2;

    }

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;

}