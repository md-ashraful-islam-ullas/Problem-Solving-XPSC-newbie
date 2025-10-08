# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    float ans = 0.0;
    while(n--)
    {
        float q, y;
        cin >> q >> y;
        ans += (q*y);
    }

    cout << fixed << setprecision(3) << ans << endl;
    return 0; 
}