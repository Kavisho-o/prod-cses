#include <iostream>
using namespace std;

#define ll long long

void solve(){

    ll n; cin>>n;
    cout<<n<<" ";

    while (n!=1) {

        if (n%2==1) {n*=3; n++;}
        else n/=2;

        cout<<n<<" ";

    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n; cin>>n;
    solve();

    return 0;
}
