# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    string s;
    int idx = 0;
    while(getline(cin, s))
    {
        if(idx % 2 == 1) cout << s << endl;
        idx++;
    }
    return 0; 
}