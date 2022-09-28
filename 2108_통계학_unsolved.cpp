//#include <bits/stdc++.h>
//#define fastio cin.tie(0) -> sync_with_stdio(0)
//using namespace std;
//
//int arr[500001];
//vector<pair<int,int>> p;
//vector<int> v;
//vector<int> v2;
//bool compare(pair<int, int> p1, pair<int, int> p2) {
//	return p1.second < p2.second;
//}
//
//
//int main() {
//	fastio;
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) { cin >> arr[i]; }
//
//	// 1. »ê¼úÆò±Õ
//	int sum = 0;
//	for (int i = 1; i <= n; i++) { sum += arr[i]; }
//	cout << sum / n << '\n';
//
//	// 2. Áß¾Ó°ª
//	for (int i = 1; i <= n; i++) { v.push_back(arr[i]); };
//	sort(v.begin(), v.end());
//	cout << v[n / 2]<<'\n';
//
//
//	// 3. ÃÖºó°ª
//	vector<pair<int, int>>::iterator iter;
//	p.push_back(pair<int, int>(arr[1], 1));
//	iter = p.begin();
//	for (int i = 2; i <= n; i++) {
//		if ((*iter).first == arr[i]) {
//			(*iter).second++;
//		}
//		else{
//			p.push_back(pair<int,int>(arr[i], 1));
//		}
//		iter++;
//	}
//	int max =0;
//	for (vector<pair<int, int>>::iterator iter2 = p.begin(); iter2 != p.end(); iter2++) {
//		if (max < (*iter2).second) max = (*iter2).second;
//	}
//	for (iter = p.begin(); iter != p.end(); iter++) {
//		if ((*iter).second == max){
//			v2.push_back((*iter).first);
//		}
//	}
//	stable_sort(v2.begin(), v2.end());
//	vector<int>::iterator si;
//	si = v2.begin();
//	if (si == v2.end()--) {
//		cout << v2[0] << '\n';
//	}
//	else {
//		cout << v2[1] << '\n';
//	}
//
//	
//
//	// 4. range
//	set<int> s;
//	for (int i = 0; i < n; i++) {
//		s.insert(arr[i]);
//	}
//	cout << (*(s.end()--)) - (*(s.begin()));
//
//
//	return 0;
//}