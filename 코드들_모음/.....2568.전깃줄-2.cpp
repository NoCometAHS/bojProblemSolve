// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ���� �Ǵ��� ccw�� ������ X
// ������ ���� �������� �ʰ� ���� ���´ٰ� �� ��, 
// // ��ģ�ٸ� �ڱ� ���� �����ϰ� ��ħ 
// // b�� ����� �κп��� �ٷ� �� ������ ���ο� ��ġ���� Ȯ�� ����
// 
// �׾ư��� dp + ���� Ž��
// a�� ���ؼ� ������ ����
// a���� ������ �Ʒ��� �ϳ��� ������ ��
// {int b, int c}dp[n] : ���ε� b���� b ��°�� ����� ���� ���������� �������� ��� ���� �������� �ʰ� ����� �ִ� ����
// (X / (1, 10) , (2, 2), (3, 3), (4, 4), (5, 11))
//
// a�� ���ؼ� ������ ����
// a���� ������ �Ʒ��� �ϳ��� ������ ��
// dp[i] : i�� ��ŭ ���� ���� �� b�� ���� ���� ���� ���� -> �˾Ƽ� �������� ���� �� ���� ���� Ž�� ����
// tree�� ���� ��Ʈ���� Ȯ�� (�ù� Ʈ���� �ߴµ� ���� ���ѹݺ��ǳ���)

//#include <iostream>
//#include <algorithm>
//
//using intpair = std::pair<int, int>;
//
//intpair lines[100001];
//int dp[100001];
//intpair ans[100001];
//int bLineNum[100001];
//bool chk[100001];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//
//	for (int i = 1; i <= n; i++) {
//		std::cin >> lines[i].first>> lines[i].second;
//	}
//
//	std::sort(lines+1, lines + n + 1);
//
//	int maxCnt = 0, maxCntIdx = -1;
//
//	for (int i = 1; i <= n; i++) {
//		if (dp[maxCnt] < lines[i].second) {
//			maxCntIdx = i;
//
//			dp[++maxCnt] = lines[i].second;
//			ans[i] = { maxCnt, lines[i].first };
//		}
//		else {
//			int* pos = std::lower_bound(dp, dp + maxCnt, lines[i].second);
//
//			int cnt = pos - dp;
//			if (cnt > maxCnt) {
//				maxCnt = cnt;
//				maxCntIdx = i;
//			}
//
//			ans[i] = { cnt, lines[i].first };
//			dp[cnt] = lines[i].second;
//		}
//	}
//
//	std::cout << n - maxCnt << '\n';
//
//	
//	for (int i = n; i > 0; i--) {
//		if (ans[i].first != maxCnt) continue;
//
//		maxCnt--;
//		chk[ans[i].second] = true;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (chk[lines[i].first]) continue;
//		std::cout << lines[i].first << '\n';
//	}
//
//
//	return 0;
//}