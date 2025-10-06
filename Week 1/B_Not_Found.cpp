# include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    cin >> s;
    set <char> unique;
    for(char c : s)
    {
        unique.insert(c);
    }
    
    bool flag = false;
    char c;
    for(int i = 97; i <= 122; i++)
    {
            if(unique.count((char)i) == 0)
            {
                c = (char)i;
                flag = true;
                break;
            }
    }
    if(flag == false) cout << "None" << endl;
    else cout << c << endl;
    return 0; 
}