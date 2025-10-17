# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int n = s.size();
    map <char, int> mp;
    for(auto p : s) mp[p]++;

    int cnt = 0;
    char oddchar = '0';
    for(auto p : mp)
    {
        if(p.second % 2 != 0)
        {
            cnt++;
            oddchar = p.first;
        }
    }

    if (cnt > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string left = "", middle = "", right = "";
    for(auto p : mp)
    {
        char ch = p.first;
        int f = p.second;
        left.append(f/2, ch);
        right.insert(0, f/2, ch);
        if (f % 2 == 1) middle += ch;
    }

    cout << left+middle+right << endl;
    return 0; 
}