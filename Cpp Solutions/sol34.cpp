#include <bits/stdc++.h>
using namespace std;
string reverseOnlyLetters(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start <= end)
    {
        if (isalpha(s[start]) && isalpha(s[end]))
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }

        else if (!isalpha(s[start]) && !isalpha(s[end]))
        {
            start++;
            end--;
        }

        else if (!isalpha(s[start]))
        {
            start++;
        }

        else
        {
            end--;
        }
    }

    return s;
}
int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    while (t--)
    {
        string s;
        cin >> s;
        ans.push_back(reverseOnlyLetters(s));
    }
    for (auto it : ans)
        cout << it << endl;
}