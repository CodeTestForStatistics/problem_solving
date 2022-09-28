//#include <bits/stdc++.h>
//#define fastio cin.tie(0) -> sync_with_stdio(0)
//
//using namespace std;
//// stable_sort로 안정정렬해야됨
//
//
//bool compare(pair<int, string> a, pair<int, string> b) {
//	return (a.first < b.first);
//}
//
//int main() {
//	fastio;
//	int n; cin >> n;
//	pair <int, string> index;
//	vector<pair <int, string>> table;
//	while (n--) {
//		cin >> index.first >> index.second;
//		table.push_back(index);
//	}
//
//	vector<pair <int, string>>::iterator iter;
//
//	stable_sort(table.begin(), table.end(), compare);
//
//	for (iter = table.begin(); iter != table.end(); iter++) {
//		cout << (*iter).first << ' ' << (*iter).second << '\n';
//	}
//
//	return 0;
//}