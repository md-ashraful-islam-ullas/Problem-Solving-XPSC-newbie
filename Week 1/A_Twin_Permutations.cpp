# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        vector <int> v2;
        for(int i = 0; i < n; i++)
        {
            int val = (n+1) - v[i];
            v2.push_back(val);
        }

        for (auto x : v2)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0; 
}