//// ���� �̸� + ����
//// �� / ���� ��
//// ������ ������ -> ��ü������
//// ���� �����ϱ�
//
////4
////3 1 4 2
////
////5
////4 2 5 1 3
////
//// �ۿ��� ������ ���� �������� �ϸ� ������ ������ �� ������?
////
//
//#include <iostream>
//
//int arr[202000];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0, num = n - 1; i * 2 < n; i++, num-=2) {
//		arr[i] = num;
//		arr[n - 1 - i] = num - 1;
//	}
//
//	arr[n / 2] = n;
//	
//	std::cout << 'YES';
//
//	for (int i = 0; i < n; i++) {
//		std::cout << arr[i] << ' ';
//	}std::cout << '\n';
//
//	for (int i = 0; i * 2 < n; i++) {
//		if (i + 1 == n - i) break;
//		std::cout << i + 1 << ' ' << n - i << ' ';
//	}
//
//	if (n % 2) {
//		std::cout << n / 2 + 1;
//	}
//	return 0;
//}