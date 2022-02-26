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
void solve() {
    int n;
   
    string s;
   
    cin >> n >> s;
    if(s[0] == '0' || s[1] == '0' || s[n] == '0'){
       
        cout << "No\n";
        return;
       
    }
    vector<int>v;
   
    v.push_back(0);
    int hold = 1;
    for(int i = 2; i < s.size() - 1; i++){
       
        if(s[i] == '0') v.push_back(i);
       
        else{
            v.push_back(hold);
            hold = i;
           
        }
    }
    v.push_back(hold);
   
    cout << "Yes\n";
   
    for(auto it : v) cout << it << " ";
    cout << endl;
   
}
int main() {
   
    int tc; cin >> tc;
    while(tc--) {
       
          solve();
    }
}