# include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n; cin >> n;
    vector <long long int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    long long int cnt = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(v[i] > v[i+1])
        {
            cnt += v[i] - v[i+1];
            v[i+1] = v[i];
        }
    }
    cout << cnt << endl;
    return 0; 
}