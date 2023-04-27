// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ��Ʈ ����ŷ, dp
// 
// dp[exist][cnt][end num] // exist �ִ� ���� ��Ʈ�� ����, cnt ���� ����, end num �׷��� ������� �������� ������ ����
//	���ʿ��� ���� ä�����ٰ� ����
//
// �Ǻ���ġ�� dp�� �Լ� ���� ����� �����ϴ� ���� ���� �� ����
//
//#include <iostream>
//
//using LL = long long;
//
//#define FullNum 0b1111111111
//#define BigNum 1000000000
//
//LL dp[1 << 10][100][10];
//int n;
//
//LL _dfs(int cur, int exist, int lv) {
//	if (dp[exist][n - lv][cur]) return dp[exist][n - lv][cur];
//	if (lv == n) {
//		return (exist == FullNum ? 1 : 0);
//	}
//
//	int res = 0;
//
//	if (cur + 1 < 10)
//		res = (res + _dfs(cur + 1, exist | (1 << (cur + 1)), lv + 1))%BigNum;
//	if (cur - 1 >= 0)
//		res = (res + _dfs(cur - 1, exist | (1 << (cur - 1)), lv + 1))%BigNum;
//
//	return dp[exist][n-lv][cur] = res;
//}
//
//
//LL dfs() {
//	int res = 0;
//	for (int i = 1; i < 10; i++) {
//		res = (res + _dfs(i, 1 << i, 1))%BigNum;
//	}
//
//	return res;
//}
//
//
//int main() {
//	std::cin >> n;
//
//	for (int i = 0; i < 10; i++) {
//		dp[FullNum & (~(1 << i))][1][i] = 1;
//	}
//
//	std::cout << dfs();
//
//	return 0;
//}