//// ���� �̸� + ����
//// �� / ���� ��
//// ������ ������ -> ��ü��
//// ���� �����ϱ�
//
////
//// ���� ū �� ���� ���鼭 pq�� ������ ������ ū �������� ���� ������ pq�� �ֱ�
//// �Ϸ縶�� ���鼭 pq���� �ϳ��� ��������
////
//
//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using intpair = std::pair<int,int>;
//
//intpair arr[1000];
//
//int main() {
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> arr[i].first >> arr[i].second;
//	}
//
//	std::sort(arr, arr + n);
//
//	std::priority_queue<int> pq;
//
//	int k = n - 1;
//	int ans = 0;
//	for (int i = arr[n - 1].first; i > 0; i--) {
//		while (arr[k].first >= i) pq.push(arr[k--].second);
//
//		if (!pq.empty()) {
//			ans += pq.top();
//			pq.pop();
//		}
//	}
//
//	std::cout << ans;
//
//	return 0;
//}