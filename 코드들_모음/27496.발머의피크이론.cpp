// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// 2�����Ͱ� �ƴ϶� �����̵� �������� �θ���
// 129 ~ 138���� �����ϵ��� ������

//#include <iostream>
//
//int alcohol[1000001];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//
//	int n, m;
//	std::cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) {
//		std::cin >> alcohol[i];
//	}
//
//	int cur = 0, ans = 0;
//	for (int f = 0, b = 1; b <= n; b++) {
//		if (b > m) f++;
//		cur -= alcohol[f];
//
//		cur += alcohol[b];
//		
//		if (cur >= 129 && cur <= 138) ans++;
//	}
//
//	std::cout << ans;
//	return 0;
//}