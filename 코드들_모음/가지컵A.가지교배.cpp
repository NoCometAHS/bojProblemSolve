// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

//
// ����
// ������ p������ 1���� ������ ������ �� ������ ����� p������ ����
// w������ �־�� w���� ���� �� ����
// 
// ������ ���� 1���̶� w������ ������ ���� w
// �ƴϸ� p
//

//#include <iostream>
//
//bool gajiSort[1000];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	char ch;
//	for (int i = 0; i < n; i++) {
//		std::cin >> ch;
//		gajiSort[i] = ch == 'W';
//	}
//
//	int m, p;
//	std::cin >> m >> p;
//
//	bool ans = false;
//
//	for (int i = 0; i < m; i++) {
//		bool res = true;
//		for (int k = 0, sort; k < p; k++) {
//			std::cin >> sort;
//			res &= gajiSort[sort - 1];
//		}
//
//		ans |= res;
//	}
//
//	std::cout << (ans ? "W" : "P");
//
//	return 0;
//}