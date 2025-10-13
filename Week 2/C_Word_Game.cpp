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
        vector <string> v1(n), v2(n), v3(n);
        unordered_map <string, int> mp;

        for(int i = 0; i < n; i++)
        {
            cin >> v1[i];
            mp[v1[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> v2[i];
            mp[v2[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> v3[i];
            mp[v3[i]]++;
        }

        int p1 = 0, p2 = 0, p3 = 0;
        for(string s : v1)
        {
            if(mp[s] == 1) p1 += 3;
            else if(mp[s] == 2) p1 += 1;
        }
        for(string s : v2)
        {
            if(mp[s] == 1) p2 += 3;
            else if(mp[s] == 2) p2 += 1;
        }
        for(string s : v3)
        {
            if(mp[s] == 1) p3 += 3;
            else if(mp[s] == 2) p3 += 1;
        }

        cout << p1 << " " << p2 << " " << p3 << endl;
    }
    return 0; 
}