//#include <bits/stdc++.h>
//#define fastio cin.tie(0) -> sync_with_stdio(0)
//
//using namespace std;
//
//
//bool compare(pair<int, int> a, pair<int, int> b) {
//	if (a.second < b.second) return true;
//	else if (a.second > b.second) return false;
//	else {
//		return a.first < b.first;
//	}
//}
//pair<int, int> p;
//
//
//int main() {
//	fastio;
//	vector<pair<int, int >> vm;
//	int testcase; cin >> testcase;
//	while (testcase--) {
//		int i = 0; int j = 0;
//		cin >> i >> j;
//		vm.push_back(pair<int, int>(i, j));
//	}
//	vector<pair<int, int>>::iterator iter;
//	iter = vm.begin();
//
//	sort(vm.begin(), vm.end(), compare);
//	for (iter = vm.begin(); iter != vm.end(); iter++) {
//		cout << (*iter).first << ' ' << (*iter).second << '\n';
//	}
//
//	return 0;
//}