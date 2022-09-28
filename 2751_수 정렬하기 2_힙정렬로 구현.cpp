//#include <bits/stdc++.h>
//#define fastio cin.tie(0) -> sync_with_stdio(0)
//using namespace std;
//
//int arr[1000001];
//void swap(int a, int b) {
//	int temp = arr[a];
//	arr[a] = arr[b];
//	arr[b] = temp;
//}
//
//void makeheap(int root, int n) {
//	int temp = arr[root];
//	int child = root * 2;
//	while (child <= n) {
//		// 더 큰 자식 노드 찾기
//		if (child < n && arr[child] < arr[child + 1])
//			child++;
//		if (temp < arr[child]) { // 자식 노드가 더 클 경우
//			arr[child / 2] = arr[child];
//			child *= 2; // 레벨 낮추기
//		}
//		else break;
//	}
//	arr[child / 2] = temp;
//}
//void heapsort(int n) {
//	// 최대 힙 구성
//	for (int i = n / 2; i > 0; i--) {
//		makeheap(i, n);
//	}
//	int temp;
//	for (int i = n; i > 0; i--) {
//		swap(1, i);
//		makeheap(1, i - 1);
//	}
//}
//
//int main() {
//	fastio;
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) cin >> arr[i + 1];
//	heapsort(n);
//	for (int i = 0; i < n; i++) cout << arr[i + 1] << '\n';
//	return 0;
//}