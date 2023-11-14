#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, n, t;
    cin >> t;
    while (t--)
    {
        int i = 0, s = 0;
        cin >> n;
        cin >> a >> b >> c >> d;
        for (i = 1; i <= n; i++)
            if (i % a && i % b && i % c && i % d)
                s++;
        cout << n - s;
    }
}
