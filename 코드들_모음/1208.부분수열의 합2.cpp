// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ���� (x, ���ϳ� �ȴ��ϳ� ����� ����)
// ��� ���� 1,000,000�� ���ϱ�
// s ���� ������ ������ ��ĭ, ũ�� �ڿ��� ������
// s�� ������ ������ ��ĭ
// 
// ���Ʈ ����  (x, ���ӵ� �κ� ������ �ƴ϶� �Ұ���)
// n �۾Ƽ� ��������
//
// dp
// ���� üũ ���
//
//
// �ٸ� ��� �ִ°� ������? ����

//#include <iostream>
//
//using LL = long long;
//
//constexpr int ZERO = 4000000;
//
//LL dp[2][8000001];
//
////4000000 ����
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int n, s;
//	std::cin >> n >> s;
//
//	for (int i = 0, num; i < n; i++) {
//		std::cin >> num;
//
//		for (int k = 0; k <= 8000000; k++) {
//			if (k + num < 0 || k+num > 8000000) continue;
//			
//			dp[(i+1)%2][k+num] = dp[i%2][k] + dp[i%2][k+num];
//		}
//
//
//		dp[(i+1)%2][ZERO + num] += 1;
//	}
//	
//	//for (int i = ZERO - 10; i <= ZERO + 10; i++) std::cout << dp[i] << ' ';
//
//	std::cout << dp[n%2][s + ZERO];
//
//	return 0;
//}