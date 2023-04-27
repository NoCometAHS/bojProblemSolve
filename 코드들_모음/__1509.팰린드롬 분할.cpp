// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// dp, dfs
// {int} dp[i] : i~k������ ���ڿ��� �Ӹ������ ����?
//
// ��� �Ӹ���� ���ϱ�
// dfs�� �θ�Ʈ����
// ���� �־� 2500*2500 + 2500^2500 (E Va) dfs �Ұ��� �ƴѰ�?
//
// dp[i] : i���� n-1���� �����϶� �ּ��� �Ӹ���� ����
// 
// assavccvassaoppoassavccv
// 
// dfs�� ���� dp 
// 
//#include <iostream>
//
//bool dp[2500][2500];
//int cnt[2500];
//char str[2501]; int n;
//
//int dfs(int cur) {
//	if (cur >= n) return 0;
//	if (cnt[cur]) return cnt[cur];
//
//	int min = 1e9;
//	for (int i = cur; i < n; i++) {
//		if (!dp[cur][i]) continue;
//
//		min = std::min(min, dfs(i + 1) + 1);
//	}
//
//	return cnt[cur] = min;
//}
//
//int main() {
//	while ((str[n] = getchar()) != '\n') { dp[n][n] = true; n++; };
//	str[n] = 0;
//	cnt[n - 1] = 1;
//
//	for (int len = 1; len < n; len++) {
//		for (int lf = 0; lf < n - len; lf++) {
//			if (str[lf] != str[lf + len]) continue;
//
//			dp[lf][lf + len] = dp[lf + 1][lf + len - 1] || len == 1;
//		}
//	}
//
//	std::cout << dfs(0);
//	return 0;
//}