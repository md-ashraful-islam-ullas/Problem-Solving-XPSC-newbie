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
        string s; cin >> s;
        int zero = 0; 
        int one = 0;
        for(auto c : s)
        {
            if(c == '0') zero++;
            else one++;
        }
        if((min(zero,one) % 2) == 0) cout << "Ramos" << endl;
        else cout << "Zlatan" << endl;
    }
    return 0; 
}