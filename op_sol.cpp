#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		// sort in decreasing order
		sort(v.rbegin(), v.rend());
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			// the value at (k - 1)th place is the minimum score to qualify
			if (v[i] >= v[k - 1]) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0; 
}
