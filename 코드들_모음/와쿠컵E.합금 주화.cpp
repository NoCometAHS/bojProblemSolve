//
// ����
// 
// �е� = ���� / ����
// 
// �ݼ� m1, m2
// m1 ���� = m1/�е�, m2 ���� = m2 / �е�
// 
//m1 < m2
//��ȭ ���� * x = m2
//��ȭ ���� * (1-x) = m1
// 
// ��ȭ ���� = m
// 
// ��ȭ �е� = ( mx + m(1-x) ) / (mx / �е� + m(1-x) / �е�) 
// == 1 / (x / m1�е� + (1-x) / m2�е�)

//#include <iostream>
//#include <algorithm>
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	double v1, v2, x;
//	std::cin >> v1 >> v2 >> x;
//	x /= 100;
//
//	if (v1 < v2) std::swap(v1, v2);
//
//	std::cout << std::fixed;
//	std::cout.precision(7);
//	std::cout << 1 / (x / v1 + (1 - x) / v2);
//
//	return 0;
//}