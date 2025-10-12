# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    map <pair<string, string>, int> mp;
    while(n--)
    {
        string species, color;
        cin >> species >> color;
        mp[{species, color}];
    }

    cout << mp.size() << endl;
    return 0; 
}