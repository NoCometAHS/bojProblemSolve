// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// dp
// �����ϱ�
// dp[i], i��° ���� i��°������ �� �� �ϳ��� ��� ���� ���� ���� ���� �� (x, ���� ���� ����)
// -97 -6 -2 6 98
// -24 -6 -3 -2 61 980 10000

// ���Ʈ ���� + ���� Ž��
// -3 -3 -2 7 99
// �Լ� �� �˰� �ִ°� ���⿩����
// 
////
//#include <iostream>
//#include <algorithm>
//
//using LL = long long;
//
//LL arr[5000];
//
//int myBSearch(int _s, int _e, LL _v) {
//	static int dx[3] = { -1,0,1 };
//	int s = _s, e = _e, mid;
//
//	while (s <= e) {
//		mid = (s + e) / 2;
//
//		if (arr[mid] == _v) {
//			return mid;
//		}
//		else if (arr[mid] > _v) {
//			e = mid - 1;
//		}
//		else {
//			s = mid + 1;
//		}
//	}
//
//	LL res = 1e10, ret;
//
//	for (int i = 0; i < 3; i++) {
//		if (e + dx[i] < _s || e + dx[i] > _e) continue;
//		
//		LL t = std::abs(_v - arr[e + dx[i]]);
//
//		if (t < res) {
//			ret = arr[e + dx[i]];
//			res = t;
//		}
//		
//	}
//
//	return ret;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> arr[i];
//	}
//
//	std::sort(arr, arr + n);
//
//	LL ans = 1e10, ansV[3];
//
//	for (int i = 0; i < n-2; i++) {
//		for (int k = i + 1; k < n-1; k++) {
//			LL t = arr[i] + arr[k], mixed, third;
//			LL* next = std::lower_bound(arr + k + 1, arr + n, -t);
//
//			if (next == arr + k + 1) {
//				mixed = std::abs(*next + t);
//				third = *next;
//			}
//			else if (next == arr + n) {
//				mixed = std::abs(*(next - 1) + t);
//				third = *(next - 1);
//			}
//			else {
//				if (std::abs(*next + t) < std::abs(*(next - 1) + t)) {
//					third = *next;
//				}
//				else {
//					third = *(next - 1);
//				}
//				mixed = std::min(std::abs(*next + t), std::abs(*(next - 1) + t));
//			}
//
//			if (mixed < ans) {
//				ans = mixed;
//				ansV[0] = arr[i];
//				ansV[1] = arr[k];
//				ansV[2] = third;
//			}
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		std::cout << ansV[i] << ' ';
//	}
//	return 0;
//}