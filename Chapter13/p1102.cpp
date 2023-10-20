#include <bits/stdc++.h>
using namespace std;
long double a[200001];
long double N, C, ans;

int main() {
	cin >> N >> C;
	for (int i = 1; i <= N; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + N + 1);
	for (int i = 1; i <= N; i++) {

		long double *addr1 = upper_bound(a + 1, a + N + 1, a[i] + C);
		long double *addr2 = a;
		long double *addr3 = lower_bound(a + 1, a + N + 1, a[i] + C);
		cout << addr1 << "   " << addr2 << "  " << addr3 << endl;

		cout << addr1 - addr2 << "  " << addr3 - addr2 << " " << (addr1 - addr2) - (addr3 - addr2) << endl;

		ans += ((upper_bound(a + 1, a + N + 1, a[i] + C) - a) - (lower_bound(a + 1, a + N + 1, a[i] + C) - a));
	}
	cout << ans;
	return 0;
}