#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R; cin >> R;
    if (R < 1200) {
        cout << "ABC" << endl;
        return 0;
    } else if (R < 2800) {
        cout << "ARC" << endl;
        return 0;
    } else {
        cout << "AGC" << endl;
        return 0;
    }
    return -1;
}
