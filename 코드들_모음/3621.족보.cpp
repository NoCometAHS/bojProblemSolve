//
// �׸���
// 
// �� ��忡���θ� ������� ����
// �� �θ� �������� d�� ���� d�� ���� ���� ans�� ���ϱ�
//
//
//#include <iostream>
//#include <map>
//
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n, d;
//	std::cin >> n >> d;
//
//	std::map<int, int> parCnt;
//
//	for (int i = 0, child; i < n; i++) {
//		std::cin >> child;
//
//		parCnt[child]++;
//	}
//
//	int ans = 0;
//	for (const std::pair<int, int>& cnt : parCnt) {
//		if (cnt.second - d <= 0) continue;
//		ans += (cnt.second-d) / (d - 1) + ((cnt.second - d) % (d - 1) != 0);
//	}
//
//	std::cout << ans;
//
//	return 0;
//}