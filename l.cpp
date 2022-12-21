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


int main() {
    Fast

    int n,cnt=0;
    cin>>n;
    if(n<26) {cout<<"No"; return 0;}
    
    string s;
    cin>>s;
    for (int i=0; i<n; i++) {
        s[i]=tolower(s[i]);
    }
    sort(s.begin(), s.end());
 
    for (int i=0; i<n; i++) {
        if (s[i]!=s[i+1]) {
            cnt++;
        }
    }
    if(cnt==26){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
return 0;}
