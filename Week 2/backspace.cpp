# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    stack <char> st;
    for(auto c : s)
    {
        if(c == '<')
        {
            if(!st.empty()) st.pop();
        }
        else st.push(c);
    }

    string ans;
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0; 
}