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
        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        reverse(v.begin(), v.end());

        set <int> s;
        for(int i = 0; i < n; i++)
        {
            if(s.find(v[i]) == s.end()) s.insert(v[i]);
            else break;
        }
        cout << n - s.size() << endl;
    }
    return 0; 
}