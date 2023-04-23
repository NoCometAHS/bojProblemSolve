// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ����, dp, ��Ʈ
//
// ���� �� �ִ� ��� ���� ��ġ ���ͷ� �����
// 
// dp[i][k] : i�� ���� ��°���� ū��°�� ����� ����, k�� ū��°���� ���� ��°�� ����� ����
// (X, �ʹ� ���� 20^10 ���� ����)

// ���Ʈ ����, ����
// 4���� ������ ���� 
// (ax,ay), (bx,by), (cx,cy), (dx,dy)
// ab(bx-ax, by-ax), cd(dx-cx, dy-cy);
// �� ������ �� (bx + dx - ax - cx, by + dy - ay - cy)
// ���� �� n/2���� ��� ���ϰ� ������ ���ָ� ��

//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using LL = long long;
//using  LLpair = std::pair<LL, LL>;
//
//
//struct VEC {
//	LLpair _vec;
//	int usedDot;
//
//	VEC(LLpair v = { 0, 0 }, int ud = 0) : _vec(v), usedDot(ud) {}
//};
//
//
//LLpair dots[20]; int n;
//int full_dots;
//
//LL dfs(int used, int cur, int lv = 0) {
//	if (lv == n/2) {
//		LLpair ret;
//		for (int i = 0; i < n; i++) {
//			if (used & (1 << i)) {
//				ret.first += dots[i].first;
//				ret.second += dots[i].second;
//			}
//			else {
//				ret.first -= dots[i].first;
//				ret.second -= dots[i].second;
//			}
//		}
//
//		return ret.first * ret.first + ret.second * ret.second;
//	}
//	
//	LL min = 1LL << 62;
//	for (int i = cur; i < n; i++) {
//		min = std::min( min, dfs(used | (1 << i), i+1 , lv+1) );
//	}
//
//	return min;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int tc;
//	std::cin >> tc;
//
//	while (tc--) {
//
//		std::cin >> n;
//
//		for (int i = 0; i < n; i++) {
//			std::cin >> dots[i].first >> dots[i].second;
//		}
//
//		std::cout << std::fixed;
//		std::cout.precision(7);
//		std::cout << std::sqrt(dfs(0, 0)) << '\n';
//
//	}
//
//	return 0;
//}
