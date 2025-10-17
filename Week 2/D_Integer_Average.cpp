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
        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if((v[i] + v[j]) % 2== 0)
                {
                    cout << "YES" << endl;
                    flag = true;
                    break;
                }
            }
            if(flag == true) break;
        }
        if(flag == false) cout << "NO" << endl;
    }
    return 0; 
}