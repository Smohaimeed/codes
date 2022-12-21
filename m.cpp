#define Fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
using namespace std;
int max_char=26;

void solve(){
    ll n;
    cin>>n;
    while(n>1){
        if(n%2!=0){
            cout<<"YES\n";
            break;
        }
        else n=n/2;
    }
    if (n==1){
        cout<<"NO\n";
    }
}



int main() {
    Fast
    int t;
    cin>>t;
    while(t--){
        solve();
}
}
