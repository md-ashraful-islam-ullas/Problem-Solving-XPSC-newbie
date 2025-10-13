# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while(n--)
    {
        string s; cin >> s;

        vector <char> v;
        vector <bool> keep;
        stack <int> smaller, upper;
        
        for(char c : s)
        {
            if(c >= 'a' && c <= 'z')
            {
                if(c == 'b')
                {
                    if(!smaller.empty())
                    {
                        keep[smaller.top()] = false;
                        smaller.pop();
                    }
                }
                else
                {
                    v.push_back(c);
                    keep.push_back(true);
                    smaller.push(v.size() - 1);
                }
            }

            else if(c >= 'A' && c <= 'Z')
            {
                if(c == 'B')
                {
                    if(!upper.empty())
                    {
                        keep[upper.top()] = false;
                        upper.pop();
                    }
                }
                else
                {
                    v.push_back(c);
                    keep.push_back(true);
                    upper.push(v.size() - 1);
                }
            }
        }

        for(int i = 0; i < v.size(); i++)
        {
            if(keep[i] == true) cout << v[i];
        }
        cout << endl;
    }
    return 0; 
}