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
        vector <int> v1(n);
        for(int i = 0; i < n; i++) cin >> v1[i];
        vector <int> v2(n);
        for(int i = 0; i < n; i++) cin >> v2[i];

        int hdays = 0;
        for(int i = 0; i < n; i++)
        {
            if(v1[i] <= (2*v2[i]) && v2[i] <= (2*v1[i])) hdays++;
        }
        cout << hdays << endl;
    }
    return 0; 
}