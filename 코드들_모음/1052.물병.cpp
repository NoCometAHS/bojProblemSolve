// ���� �̸� + ����
// �� / ���� ��
// ������ ���� -> �����
// ���� �����ϱ�
//

//
// �׸���, ��Ʈ����
// ���� ���� ������ ���� �� �ִ� ����ū ���� ���� ������ -> ���� ���� 1�� ��Ʈ
// ans =  std::min(���� 1���� ������� �� �� ���� �ʿ� ����, 2����, 3����, ..., k����)
//

//#include <iostream>
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n, m;
//	std::cin >> n >> m;
//
//	int ltBitPos = 31;
//	while ( !((n >> ltBitPos) & 1) )ltBitPos--;
//
//	int ans = (1<<31) - 1;
//
//	while (ltBitPos >= 0 && m) {
//		ans = std::min(ans, ((n & (~(1 << ltBitPos))) ? (1 << ltBitPos) - (n & (~(1 << ltBitPos))) : 0));
//
//		n &= ~(1 << ltBitPos);
//		m--;
//
//		while (ltBitPos >= 0 && !((n >> ltBitPos) & 1))ltBitPos--;
//	}
//
//	std::cout << ans;
//	return 0;
//}