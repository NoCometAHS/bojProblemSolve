// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

//
// ���� Ž��, ����
// 
// ���̰� n���� 100���� ���鼭 ���� �ִ��� Ȯ��
// ���� Ž������ 0 ~ 500000000���� ���� �����ϴ� �� ã��
//
//
//#include <iostream>
//using LL = long long;
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n, m;
//
//	std::cin >> n >> m;
//
//	int ans = -1, length;
//	for (length = m; length < 101 && ans < 0; length++) {
//		LL lt = 0, rt = 500000000, m;
//
//		while (lt <= rt) {
//			m = (lt + rt) / 2;
//			
//			LL res = (m + length - 1) * (m + length) / 2 - (m - 1) * m / 2;
//			
//			if (res < n) {
//				lt = m + 1;
//			}
//			else if (res > n) {
//				rt = m - 1;
//			}
//			else {
//				ans = m;
//				break;
//			}
//		}
//	}
//
//	length--;
//
//	if (ans == -1) {
//		std::cout << -1;
//	}
//	else {
//		for (int i = ans; i < ans + length; i++) {
//			std::cout << i << ' ';
//		}
//	}
//
//	return 0;
//}