//
// �׸���
// 
// n x
// n�� n-1�� �� ������ ���� ��찡 ü�� �� �ִ� ���� �ִ� ��
// = (n-2)*(n-1)/2
// x�� ���� ������ ũ�� -1
//
// (n-2)*(n-1)/2 - x, n�� ������ ������� ���ʷ� n ���� ���� �����ʿ� ����
//
//
//#include <iostream>
//#include <vector>
//
//using LL = long long;
//
//int main() {
//	
//	LL n, m;
//	std::cin >> n >> m;
//	
//	LL max = (n - 2) * (n - 1) / 2;
//
//	if (max < m) {
//		std::cout << -1;
//		return 0;
//	}
//
//	std::vector<int> bars, outBars;
//	bars.reserve(1100100), outBars.reserve(1100100);
//	
//	LL leftWater = max - m;
//	
//	for (int i = 1; i < n-1; i++) {
//		if ((n-1-i) <= leftWater) {
//			outBars.push_back(i);
//			leftWater -= n - 1 - i;
//		}
//		else {
//			bars.push_back(i);
//		}
//	}
//
//	for (const int& bar : outBars) {
//		std::cout << bar << ' ';
//	}
//	std::cout << n - 1 << ' ';
//	for (const int& bar : bars) {
//		std::cout << bar << ' ';
//	}
//	std::cout << n;
//
//	return 0;
//}