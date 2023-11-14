#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<float> ans;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        int temp = 0, i = 0;
        string temps = "0";
        char prevdir = 'N';
        while (i < s.size())
        {
            if (s[i] == 'N' || s[i] == 'S' || s[i] == 'E' || s[i] == 'W')
            {
                temp = stoi(temps);
                if (prevdir == 'W')
                {
                    x -= temp;
                }
                else if (prevdir == 'E')
                {
                    x += temp;
                }
                else if (prevdir == 'N')
                {
                    y += temp;
                }
                else
                {
                    y -= temp;
                }
                temps = "";
                prevdir = s[i];
            }
            else
            {
                temps += s[i];
            }
            i++;
        }
        temp = stoi(temps);
        if (prevdir == 'W')
        {
            x -= temp;
        }
        else if (prevdir == 'E')
        {
            x += temp;
        }
        else if (prevdir == 'N')
        {
            y += temp;
        }
        else
        {
            y -= temp;
        }
        float k = sqrt((x * x) + (y * y));
        ans.push_back(k);
    }
    for (auto it : ans)
    {
        printf("%.2f\n",it);
    }
}