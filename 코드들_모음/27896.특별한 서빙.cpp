// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

//
// dp + ������
// dp[n][2]  : dp[i][[0, 1]] : i��° �����Ҷ� 0�̸� �Ĺ�Ƣ ���� 1�̸� ���� ���� �Ҷ� m�� ���� ���� �ִ� �Ҹ��� (?, �̰� �³�?)
//				��������
// �ּҺҸ���
//(x, ������� �ؾ��ؼ� dp�� �ϸ� �߰��� �Ѵ��� ���� �����, �׾ư��� ��ĵ� ��;;)
//
// �׸���, pq
// pq�� ������ �־�α�
// ������� �Ĺ�Ƣ �ֱ�
// // ������ �ʰ��Ǵ� ������ ���� �� pq�� ž���� ���� ������ * -2�ؼ� ���ϱ�
// // ������ �ʰ����� ���� ������ ���� �ֱ�
// 
//
//#include <iostream>
//#include <queue>
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n, m;
//	std::cin >> n >> m;
//
//	int curState = 0, num, ans = 0;
//	std::priority_queue<int> pq;
//
//	while (n--) {
//		std::cin >> num;
//		
//		curState += num;
//		pq.push(num);
//
//		while (curState >= m) {
//			ans++;
//			curState -= pq.top() * 2;
//			pq.pop();
//		}
//	}
//
//	std::cout << ans;
//	return 0;
//}