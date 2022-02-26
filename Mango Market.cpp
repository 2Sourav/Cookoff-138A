#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;
#define pb push_back
#define mod 1000000007
#define ll          long long
#define endl        '\n'

#define vi          vector<int>
int main() {
    
 
    ll n,m;
    cin >> n >> m;
   
    ll a[n + 2];
    ll sum = 0;
    for(int i = 0; i < n; i++) cin >> a[i], sum += a[i];
   
    for(int i = 0; i < m; i++){
        int u,v;
       
        cin >> u >> v;
    }
    int q;
    cin >> q;
   
    ll cnt = m, tot = n * (n - 1) / 2;
    while (q--){
       
        char x;
        cin >> x;
       
        if(x == '?'){
            ll add = tot - cnt;
           
            cout << sum + (cnt - add) << endl;
           
        }else if(x == '+'){
            int u,v;
           
            cin >> u >> v;
            cnt++;
           
        }else{
           
            int u,v;
            cin >> u >> v;
           
            cnt--;
        }
       
    }
}
