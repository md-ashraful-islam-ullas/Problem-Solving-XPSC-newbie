# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    map <string, int> mp;
    while(t--)
    {
        string s; cin >> s;
        if(mp.find(s) == mp.end())
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
        else
        {
            cout << s + to_string(mp[s]) << endl;
            mp[s]++;
        }
    }
    return 0; 
}