//// ���� �̸� + ����
//// �� / ���� ��
//// ������ ���� -> �����
//// ���� �����ϱ�
//
////
//// ����
////
//// 
//// + Ȧ ¦
//// Ȧ¦ Ȧ
//// ¦Ȧ ¦
////
//// - Ȧ ¦
//// Ȧ¦ Ȧ
//// ¦Ȧ ¦
//// 
//// �������� ���������θ� �� ����, ������ ���� �����̶�� ���� �� ���� �̹� ������
//// Ȧ���� �ּ� ���� ���ϱ�
//// // �� ���� Ȧ���� ���� ����� ¦�� ���ϱ�
//// // �� ���� ¦���� ���� ����� Ȧ�� ���ϱ�
//// 
//// ¦���� �ּ� ���� ���ϱ�
//// // ������ Ȧ���� ���� ����� Ȧ�� ���ϱ�
//// // ������ ¦���� ���� ����� ¦�� ���ϱ�
////
//// �����ʿ������� �������� �������� ���� ����� ¦,Ȧ�� ���Ұž�
////
//
//
//#include <iostream>
//#include <algorithm>
//
//int nearOdd[500500];
//int nearEven[500500];
//int arr[500500];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> arr[i];
//	}
//
//	std::sort(arr, arr + n);
//	nearOdd[n-1] = -1;
//	nearEven[n-1] = -1;
//
//	for (int i = n - 2; i >= 0; i--) {
//		nearOdd[i] = (arr[i+1] % 2 ? i+1 : nearOdd[i+1]);
//		nearEven[i] = (arr[i + 1] % 2 ? nearEven[i + 1] : i + 1);
//	}
//
//	int evenMin = 2e9+1, oddMin = 2e9+1;
//	for (int i = 0; i < n - 1; i++) {
//		if (arr[i] % 2) {
//			if (nearOdd[i] != -1) {
//				evenMin = std::min(evenMin, arr[nearOdd[i]] - arr[i]);
//			}
//			if (nearEven[i] != -1) {
//				oddMin = std::min(oddMin, arr[nearEven[i]] - arr[i]);
//			}
//		}
//		else {
//			if (nearEven[i] != -1) {
//				evenMin = std::min(evenMin, arr[nearEven[i]] - arr[i]);
//			}
//			if (nearOdd[i] != -1) {
//				oddMin = std::min(oddMin, arr[nearOdd[i]] - arr[i]);
//			}
//		}
//	}
//
//	std::cout << (evenMin == 2e9+1 ? -1 : evenMin) << ' ' << (oddMin == 2e9+1 ? -1 : oddMin);
//	return 0;
//}