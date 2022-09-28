//#include <iostream>
//#define fastio cin.tie(0) -> sync_with_stdio(0)
//
//using namespace std;
//
//int digitNum[10] = {};
//
//int main() {
//	fastio;
//	long int num; cin >> num;
//	long int R;
//	while (num > 0) {
//		R = num % 10;
//		digitNum[R]++;
//		num /= 10;
//	}
//
//	for (int i = 9; i >= 0; i--) {
//		for (int j = 0; j < digitNum[i]; j++) {
//			cout << i;
//		}
//	}
//	return 0;
//}