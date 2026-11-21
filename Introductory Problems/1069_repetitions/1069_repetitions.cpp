#include <iostream>
using namespace std;

void solve(){

    string s; cin>>s;
    int streak=1, res=1;

    for (int i=1; i<s.size(); i++){

        if (s[i]==s[i-1]) {
            streak++;
            res=max(res,streak);
        }
        else streak=1;

    }

    cout<<res;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
