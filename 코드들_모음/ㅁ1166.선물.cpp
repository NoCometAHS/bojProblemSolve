////
//// ���� �̸� + ����
//// �� / ���� ��
//// ������ ���� -> �����
//// ���� �����ϱ�
////
//
//// ����, ����
//// LWH = A^3 * N
//// LWH/N = A^3
//// (x, ���� �߸� ����, ���� �׳� ���� �־�� �ϴ°�)
//// 
//// 
//// ���̰����� ���� Ž��?
//// ū���� ���� ���̷� ���� ���� ���� n���� ũ�� �ֱ� ����
//// 
//// ���� ������ ���� Ž��?
////
//
////
//// �ᱹ ��� �ѱ�� ������� �Ѱ���
//// 
////
//
//#include <iostream>
//#include <cmath>
//#include <algorithm>
//
//using LL = long long;
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	double n, l, w, h;
//
//	std::cin >> n >> l >> w >> h;
//
//
//	double lt = 0, rt = std::min({l, w, h}), m, ans;
//	
//
//	for (int i = 0; i < 100; i++) {	//log2(1e9)�� ���� 30 �״ϱ� 30�Ѱ� ���� ������ ���� ���߱�
//		m = (lt + rt) / 2;
//		//std::cout << m << '\n';
//		LL cnt = std::floor(l / m) * std::floor(w / m) * std::floor(h / m);
//
//		if (cnt < n) {
//			rt = m;
//		}
//		else {
//			lt = m;
//			ans = m;
//		}
//
//	}
//
//	std::cout << std::fixed;
//	std::cout.precision(9);
//	std::cout << ans;
//	return 0;
//}