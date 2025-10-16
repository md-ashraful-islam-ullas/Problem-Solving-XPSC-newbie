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
        deque <int> dq1(n);
        for(int i = 0; i < n; i++) cin >> dq1[i];
        deque <int> dq2;
        dq2.push_back(dq1.front());
        dq1.pop_front();
        while(!dq1.empty())
        {
            int first = dq1.front();
            dq1.pop_front();
            if(first > dq2.front()) dq2.push_back(first);
            else dq2.push_front(first);
        }
        for(int i = 0; i < n; i++) cout << dq2[i] << " ";
        cout << endl;
    }
    return 0; 
}