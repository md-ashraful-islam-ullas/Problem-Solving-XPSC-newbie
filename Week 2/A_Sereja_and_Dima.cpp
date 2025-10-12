# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    deque <int> dq(n);
    for(int i = 0; i < n; i++) cin >>  dq[i];

    int sereja = 0;
    int dima = 0;
    int who = 1;
    while(!dq.empty())
    {
        int left = dq.front();
        int right = dq.back();
        int mx = max(left, right);
        if(who % 2 == 0) dima += mx;
        else sereja += mx;

        if(mx == left) dq.pop_front();
        else dq.pop_back();

        who++;
    }

    cout << sereja << " " << dima << endl;
    return 0; 
}