#include <bits/stdc++.h>
using namespace std;

int query(int i, int x) {
    cout << "? " << i << " " << x << endl;
    cout.flush();
    int ans;
    cin >> ans;
    return ans;
}

void solve() {
    int n;
    cin >> n;

    int pn = 0;

    for (int i = 1; i < n; i++) {
        int r1 = query(i, i);
        int r2 = query(i, i ^ n);

        if (r1 != r2) {
            pn ^= i;
        }
    }

    cout << "! " << pn << endl;
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
