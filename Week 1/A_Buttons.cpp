# include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int val1 = a + b;
    int val2 = a + (a-1);
    int val3 = b + (b-1);

    cout << max({val1, val2, val3});
    return 0; 
}