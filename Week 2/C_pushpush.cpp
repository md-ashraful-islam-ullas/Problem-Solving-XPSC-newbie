# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    deque <int> dq(n);
    for(int i = 0; i < n; i++) cin >> dq[i];

    deque <int> dq2;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) dq2.push_front(dq[i]);
        else dq2.push_back(dq[i]);
    }
    if(n % 2 == 0)
    {
        reverse(dq2.begin(), dq2.end());
        for(int i = 0; i < n; i++) cout << dq2[i] << " ";
    }
    else 
    {
        // reverse(dq2.begin(), dq2.end());
        for(int i = 0; i < n; i++) cout << dq2[i] << " ";
    }
    return 0; 
}