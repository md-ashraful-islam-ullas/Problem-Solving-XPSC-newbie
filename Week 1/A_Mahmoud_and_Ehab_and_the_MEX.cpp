# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x; cin >> n >> x;
    set <int> s;
    for (int i = 0; i < n; i++)
    {
        int val; cin >> val;
        s.insert(val);
    }
    
    int op = 0;
    for(int i = 0; i < x; i++)
    {
        if(s.find(i) == s.end()) op++;
    }
    if(s.find(x) != s.end()) op++;

    cout << op << endl;
    return 0; 
}