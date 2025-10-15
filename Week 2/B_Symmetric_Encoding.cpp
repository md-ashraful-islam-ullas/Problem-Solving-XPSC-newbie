# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        set <char> c(s.begin(), s.end());
        vector <char> r(c.begin(), c.end());

        map <char, char> mp;
        int left = 0;
        int right = r.size() - 1;
        while(left <= right)
        {
            mp[r[left]] = r[right];
            mp[r[right]] = r[left];

            left++;
            right--;
        }

        for(int i = 0; i < s.size(); i++)
        {
            cout << mp[s[i]];
        }
        cout << endl;
    }
    return 0; 
}