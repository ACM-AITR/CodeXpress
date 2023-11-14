#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> L(N);

        for (int i = 0; i < N; ++i) {
            cin >> L[i];
        }

        int evenCount = 0;
        int oddCount = 0;

        for (int i = 0; i < N; ++i) {
            if (L[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        if (evenCount > oddCount) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
