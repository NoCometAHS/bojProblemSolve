// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

//
// dp
// dp[100000][10] // dp[i][j] : i��° ���� j��° ����Ʈ �Ծ��� ���� �ִ� ������
// dp[i][j] = i-1���� ���� ����Ʈ�� �ִ񰪿��� j����Ʈ ������ ���� ��, �� dp[i-1][j]�� �ִ�� �������� 1/2 �������
//

//
//#include <iostream>
//
//int dp[100000][10];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n, m;
//
//	std::cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		for (int k = 0; k < n; k++) {
//			std::cin >> dp[k][i];
//		}
//	}
//
//
//	for (int i = 1; i < n; i++) {
//		for (int k = 0; k < m; k++) {
//
//			int max = 0;
//			for (int select = 0; select < m; select++) {
//				int temp = dp[i - 1][select] + (select == k ? dp[i][k] / 2 : dp[i][k]);
//
//				max = std::max(temp, max);
//			}
//
//			dp[i][k] = max;
//		}
//	}
//
//
//	int ans = 0;
//	for (int i = 0; i < m; i++) {
//		ans = std::max(ans, dp[n - 1][i]);
//	}
//
//	std::cout << ans;
//
//	return 0;
//}