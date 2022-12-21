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
    int t;
    cin>>t; //3
    int a[200],a2[200];
    while(t--){
    int n,m; // 1 2, 3 2, 9 14
        int cnt=0;
        cin>>n>>m;
    for (int i=0; i<n; ++i) {
        cin>>a[i];
    }
        for (int i=0; i<m; ++i) {
            cin>>a2[i];
        }
        
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if(a[i]==a2[j]){ //crash
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    
    
}
