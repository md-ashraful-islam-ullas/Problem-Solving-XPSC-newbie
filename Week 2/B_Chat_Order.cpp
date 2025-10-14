# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    vector <string> v;
    while(t--)
    {
        string s; cin >> s;
        v.push_back(s);
    }
    reverse(v.begin(), v.end());

    set <string> s;
    for(int i = 0; i < v.size(); i++)
    {
        if(s.find(v[i]) == s.end())
        {
            cout << v[i] << endl;
            s.insert(v[i]);
        }
        else continue;
    }
    return 0; 
}