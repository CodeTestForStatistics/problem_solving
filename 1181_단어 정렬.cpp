//#include <bits/stdc++.h>
//#define fastio cin.tie(0) -> sync_with_stdio(0)
//
//using namespace std;
//
//
//
//// set은 자동정렬이 되는데, 이를 임의로 바꿔주기
//
//// 구조체 형식이며, ()연산자를 오버로딩 해야함
//struct Compare {
//	bool operator()(const string& a, const string&b) const {
//		if (a.size() == b.size()) return a < b;
//		else return a.size() < b.size();
//		}
//};
//
//
//int main() {
//	fastio;
//	int n; cin >> n;
//	set<string, Compare> s; // 생성할때 정렬조건을 지정해줌
//	string input;
//	while (n--) {
//		cin >> input;
//		s.insert(input);
//	}
//	for (auto elem : s) {
//		cout << elem << '\n';
//	}
//
//	return 0;
//}