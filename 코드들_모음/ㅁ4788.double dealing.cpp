//// ���� �̸� + ����
//// �� / ���� ��
//// ������ ���� -> �����
//// ���� �����ϱ�
//
////
//// �ù�?
//// 
//// ���������� ���� ����� �ֳ�???
////  
//// �ϴ� �ùĸ���� ������ (�Ұ���, ����) ex) 800 250
//// 
////
//
//#include <iostream>
//
//using LL = long long;
//
//int cards[2][800];
//
//void shuffle(int n, int m, int from, int to) {
//	int temp[800], top = 0;
//	int cardIdx = 0;
//
//	for (int i = 0; i < m; i++) {
//		top = 0;
//		for (int k = i; k < n; k += m) {
//			temp[top++] = cards[from][k];
//		}
//
//		while (top > 0) {
//			cards[to][cardIdx++] = temp[--top];
//		}
//	}
//
//	return;
//}
//
//bool is_continuous(int n, int from) {
//	for (int i = 0; i < n; i++) {
//		if (cards[from][i] != i + 1) return false;
//	}
//
//	return true;
//}
//
//int main() {
//	int n, m;
//
//	std::cin >> n >> m;
//
//	while (n != 0) {
//		for (int i = 0; i < n; i++) {
//			cards[0][i] = i + 1;
//		}
//
//		LL ans = 1;
//		
//		for (shuffle(n, m, ans - 1, ans); !is_continuous(n, ans % 2); shuffle(n, m, ans % 2, (ans + 1) % 2), ans++) {
//
//		};
//
//		std::cout << ans;
//		
//		std::cin >> n >> m; 
//	}
//
//	return 0;
//}
//
//
