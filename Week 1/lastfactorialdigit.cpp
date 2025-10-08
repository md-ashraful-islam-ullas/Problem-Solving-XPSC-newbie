# include <bits/stdc++.h>
using namespace std;
int factorial(int x)
{
    if(x == 1) return 1;
    return x * factorial(x-1);
}
int main()
{
    int n; cin >> n;
    while(n--)
    {
        int x; cin >> x;
        int fact = factorial(x);
        cout << fact % 10 << endl;
    }
    return 0; 
}