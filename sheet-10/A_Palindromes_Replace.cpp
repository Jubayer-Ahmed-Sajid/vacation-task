#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string reversed_s = s;
    int size = s.length();

    for (int i = 0; i < size / 2; i++)
    {
        int j = size - 1 - i;

       
        if (s[i] == '?' && s[j] == '?')
        {
            s[i] = 'a';
            s[j] = 'a';
        }

        if (s[i] != s[j])
        {
            if (s[i] == '?')
            {
                s[i] = s[j];
            }
            else if (s[j] == '?')
            {
                s[j] = s[i];
            }
        }
    }
    if ((size) % 2 == 1 && (s[size / 2] == '?'))
    {
        s[size / 2] = 'a';
    }
    string s2;
    s2 = s;
    reverse(s2.begin(), s2.end());
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        if (s[i] != s2[i])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << s2;
    }
    else
        cout << -1;

    return 0;
}