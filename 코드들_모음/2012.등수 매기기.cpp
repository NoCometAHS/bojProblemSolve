//// ���� �̸� + ����
//// �� / ���� ��
//// ������ ���� -> �����
//// ���� �����ϱ�
//
////
//// ����, greedy
////
//
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//int arr[500500];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> arr[i];
//	}
//
//	std::sort(arr, arr + n);
//
//	long long ans = 0;
//	for (int i = 0; i < n; i++) {
//		ans += std::abs(arr[i] - i - 1);
//	}
//
//	std::cout << ans;
//	return 0;
//}