//#include <bits/stdc++.h>
//#define fastio cin.tie(0) -> sync_with_stdio(0)
//using namespace std;
//
//int counted[10001] = {};
//
//
//
//int main() {
//	fastio;
//
//	int n; cin >> n;
//	int index = 0;
//	int maxIndex = 0;
//
//	for (int i = 0; i < n; i++) {
//		cin >> index;
//		counted[index]++;
//		if (index > maxIndex) maxIndex = index;
//	}
//
//	for (int i = 1; i <= maxIndex; i++) {
//		for (int j = 1; j <= counted[i]; j++) {
//			cout << i << '\n';
//		}
//	}
//
//	return 0;
//}