#include <bits/stdc++.h>

using namespace std;

void test_case() {
    long long n, ans = 0, i;
    cin >> n;
    for(i = 1; i * i < n; ++i) {
        if(n % i == 0) {
            if(i % 2 == 0) ans++;
            if((n / i) % 2 == 0) ans++;
        }
    }
    if(i * i == n && i % 2 == 0) ans++;
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    for(int nr = 1; nr <= T; ++nr) {
        test_case();
    }
    //test_case();
    return 0;
}
