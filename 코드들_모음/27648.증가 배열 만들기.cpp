// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ����
// �ּ� n+m-1�� ���ڱ��� �� �� �־�� ���� �迭 ����
// arr[i][j] = I+j+1
//

//#include <iostream>
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	int n, m, num;
//	std::cin >> n >> m >> num;
//
//	if (num < n + m - 1) {
//		std::cout << "NO";
//	}
//	else {
//		std::cout << "YES\n";
//		for (int i = 0; i < n; i++) {
//			for (int k = 0; k < m; k++) {
//				std::cout << i + k + 1 << ' ';
//			}
//			std::cout << '\n';
//		}
//	}
//
//	return 0;
//}