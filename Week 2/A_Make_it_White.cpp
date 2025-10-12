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
        int left_idx, right_idx;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'B')
            {
                left_idx = i;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] == 'B')
            {
                right_idx = i;
                break;
            }
        }

        cout << (right_idx - left_idx) + 1 << endl;
    }
    return 0; 
}