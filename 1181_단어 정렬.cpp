//#include <bits/stdc++.h>
//#define fastio cin.tie(0) -> sync_with_stdio(0)
//
//using namespace std;
//
//
//
//// set�� �ڵ������� �Ǵµ�, �̸� ���Ƿ� �ٲ��ֱ�
//
//// ����ü �����̸�, ()�����ڸ� �����ε� �ؾ���
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
//	set<string, Compare> s; // �����Ҷ� ���������� ��������
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