# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    map <pair<int, int>, string> mp;
    while(n--)
    {
        int x, y; string s;
        cin >> x >> y >> s;
        mp[{x,y}] = s;
    }
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        for(auto p : mp)
        {
            if(a == p.first.first && b == p.first.second)
            {
                cout << p.second << endl;
            }
        }
    }
    return 0; 
}