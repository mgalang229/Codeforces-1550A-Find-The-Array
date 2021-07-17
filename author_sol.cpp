#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int s;
		cin >> s;
		int cnt = 0;
		int temp = 1;
		while (s > 0) {
			// subtract the value of 'temp' (increasing prime numbers) from 's'
			s -= temp;
			// add 2 to 'temp' (next prime number)
			temp += 2;
			// increment 'cnt'
			cnt++;
		}
		// if 'temp' exceeds 's', then we can just replace it with a smaller number
		// that would make it equal to 's' (the size of sequence will not change)
		cout << cnt << '\n';
	}
	return 0;
}
