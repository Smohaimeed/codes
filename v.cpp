#define Fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <cmath>

using namespace std;
int max_char=26;
const int N = 1e6+5;
int primes[N];

bool can(int x, int y){
    return x+y <= 240;
}

void solve(){

 
}



int main(){
    Fast
    int n;
    cin>>n;//4
    string s;
    int ans=0;
    cin>>s;
    for (int i=0; i<n; ++i) {
       int d =s[i];// 1 (2) 3 (4)
        if(d%2==0){//2. 4. ans=0+1+1, ans= 2+3+1=6
            ans+=i+1;
        }
    }
    cout<< ans << "\n";
}
