// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// dp(�Ǻ���ġ��)
// dp[i] : i ~ n-1 �� �����ֵ鿡�� ���� �� �ִ� �ִ��� ��
//
//#include <iostream>
//#include <algorithm>
//
//int dp[10001];
//int wines[10001], n;
//
//int dfs(int st) {
//	if (st >= n) return 0;
//	if (dp[st] != -1) return dp[st];
//
//
//	return dp[st] = std::max({ dfs(st + 1), dfs(st + 3) + wines[st] + wines[st+1], dfs(st + 2) + wines[st]});
//
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> wines[i];
//		dp[i] = -1;
//	}
//	dp[n - 1] = wines[n - 1];
//
//	std::cout << dfs(0);
//
//	return 0;
//}