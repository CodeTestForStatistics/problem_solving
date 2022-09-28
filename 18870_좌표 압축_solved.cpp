//#include <bits/stdc++.h>
//#define fastio cin.tie(0) -> sync_with_stdio(0)
//
//using namespace std;
//
//
//// 이분탐색 - lower bound 키워드
//int main() {
//	fastio;
//	map<int, int> m;
//	vector<int> v;
//	int n; cin >> n;
//	while (n--) {
//		int a;
//		cin >> a;
//		v.push_back(a);
//		//m.insert(a, 0); // 이렇게 하면 간접 참조 error 발생함
//		m.insert(pair<int, int>(a, 0));
//	}
//
//	map<int, int>::iterator iter;
//	int i = 0;
//	for (iter = m.begin(); iter != m.end(); iter++) {
//		(*iter).second = i;
//		i++;
//	}
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
//		cout << m.at((*iter)) << ' ';
//	}
//
//
//
//	return 0;
//}