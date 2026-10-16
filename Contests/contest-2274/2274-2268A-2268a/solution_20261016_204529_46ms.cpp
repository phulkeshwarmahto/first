#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // a[0] never changes, so it's our baseline for the maximum element
    long long ans = a[0]; 
    long long min_p = a[0];
    long long max_p = a[0];

    for (int i = 1; i < n; ++i) {
        long long cur_a = a[i];
        
        // Find the maximum possible value we can make for a[i]
        long long max_abs_p = max(abs(min_p), abs(max_p));
        ans = max(ans, cur_a + max_abs_p);
        
        // Calculate the next possible extreme prefix sums
        long long next_min_p = min({
            cur_a, 
            cur_a + min_p, 
            cur_a + 2 * min_p, 
            cur_a + max_p, 
            cur_a + 2 * max_p
        });
        
        long long next_max_p = max({
            cur_a, 
            cur_a + min_p, 
            cur_a + 2 * min_p, 
            cur_a + max_p, 
            cur_a + 2 * max_p
        });
        
        min_p = next_min_p;
        max_p = next_max_p;
    }

    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}