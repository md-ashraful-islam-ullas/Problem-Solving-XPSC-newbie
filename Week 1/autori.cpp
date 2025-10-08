# include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string p;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') p.push_back(s[i]);
    }
    cout << p << endl;
    return 0; 
}