# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    set <string> st;
    while(n--)
    {
        string s; cin >> s;
        if(st.find(s) == st.end())
        {
            cout << "NO" << endl;
            st.insert(s);
        }
        else cout << "YES" << endl;
    }
    return 0; 
}