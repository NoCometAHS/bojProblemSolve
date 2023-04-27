// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ��Ʈ��ŷ
// �ڽ��� �������� �� ���� ���� �Ұ����ϸ� �� �� ģ���� �ٷ� Ƣ~��~ (x, �ð� �ʰ�)
// 
// dp
// 1����� �ϳ��� ä�����
// n��° �� ���Ĵ� n�� ������ �����Ǿ� �ִٴ� ���̴� �ִ��� ���� �� ����
// n�� ������ �ٲ�� n�� ���� �ִ񰪵� �ٲ� ���ɼ� ���� (x, �������� Ʋ��)
// 
// dp, ��Ʈ��ŷ
// dp[i][num] : 1 ~ column[i]���� i-1�࿡ �� ���� ��� num�϶� i�� ~ ��� �ڽ��� ä�� �� �ִ� ����� ��  (x, ������ ����)
//
// dp, ��Ʈ��ŷ
// dp[i] : 1 ~ column[i]���� i-1�࿡ ���� ������ ���� �� i�� ~ ��� �ڽ��� ä�� �� �ִ� ����� ��
// 1 ~ column[i]���� i-1�࿡ ������ i-1�࿡�� column[i] ~ column[i-1]������ ���ڸ� �ٲ㵵 �� ���Ŀ� ä�� �� �ִ� ����� ���� �׻� �ݺ���
// 
// 2 2 1
// 4
// 3*4 + 3*2 + 2*1 = 12 + 6 + 2
//
// �Ǻ���ġ�� �ݺ�(��꿡�� �ݺ��Ǵ� �κ� ã��)
// 
// 
//
//#include <iostream>
//#include <algorithm>
//
//int arr[8][8], n, row;	// 1, 1����
//int column[8];
//int dp[9];
//
//int dfs(int x, int y) {
//	if (y > row) {
//		std::cout << 'a';
//		return 1;
//	}
//	if (x > column[y]) {
//		if (dp[y + 1] != -1) {
//			return dp[y + 1];
//		}
//		else {
//			return dp[y + 1] = dfs(1, y + 1);
//		}
//	}
//
//
//	int ret = 0;
//	for (int i = std::max(arr[y - 1][x] + 1, arr[y][x - 1]); i <= n; i++) {
//		if (y + 1 <= row && x <= column[y + 1] && i + 1 > n) {
//			break;
//		}
//
//		if (x <= column[y + 1]) dp[y + 1] = -1;
//
//		arr[y][x] = i;
//
//		ret += dfs(x + 1, y);
//	}
//
//	return ret;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	while (std::cin >> row) {
//
//		for (int i = 1; i <= row; i++) {
//			std::cin >> column[i];
//		}
//
//		for (int i = 0; i < 9; i++) {
//			dp[i] = -1;
//		}
//
//		std::cin >> n;
//		std::cout << dfs(1, 1) << '\n';
//
//
//	}
//
//	return 0;
//}