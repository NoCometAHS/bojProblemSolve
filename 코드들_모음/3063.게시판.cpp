//// ���� �̸� + ����
//// �� / ���� ��
//// ������ ���� -> �����
//// ���� �����ϱ�
//
////
//// ����
//// ���� �������� �����ؼ� ��� 2���� ��ġ�� ��
////
//
//#include <iostream>
//#include <algorithm>
//
//
//using intpair = std::pair<int, int>;
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int tc;
//	std::cin >> tc;
//
//	while (tc--) {
//		intpair points[8];
//
//		for (int i = 0; i < 4; i++) {
//			std::cin >> points[i].first >> points[i].second;
//		}
//
//		int ans = (points[1].first - points[0].first) * (points[1].second - points[0].second);
//
//		if (points[1].first < points[2].first || points[0].first > points[3].first || points[1].second < points[2].second || points[0].second > points[3].second) {
//			std::cout << ans << '\n';
//			continue;
//		}
//
//		int overlapedX = std::min(points[1].first, points[3].first) - std::max(points[0].first, points[2].first);
//		int overlapedY = std::min(points[1].second, points[3].second) - std::max(points[0].second, points[2].second);
//		ans -= overlapedX * overlapedY;
//
//		std::cout << ans << '\n';
//	}
//	return 0;
//}