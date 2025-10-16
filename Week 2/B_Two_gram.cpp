# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s; cin >> s;
    map <string, int> mp;
    for(int i = 0; i < n-1; i++) mp[s.substr(i,2)]++;
    int max_val = 0;
    string max_pair = "";
    for(auto x : mp)
    {
        if(x.second > max_val)
        {
            max_val = x.second;
            max_pair = x.first;
        }
    }
    cout << max_pair << endl;
    return 0; 
}