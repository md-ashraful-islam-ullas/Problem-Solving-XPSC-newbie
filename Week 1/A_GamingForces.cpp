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
        sort(v.begin(),v.end());
        
        map <int,int> mp;
        for(int i = 0; i < n; i++) mp[v[i]]++;

        if(v[0] == 1)
        {
            if(mp[1] % 2 == 0) cout << (mp[1]/2)+(n-mp[1]) << endl;
            else cout << ((mp[1]/2)+1)+(n-mp[1]) << endl;
        }
        else cout << n << endl;
    }
    return 0; 
}