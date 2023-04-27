// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

//
// ����, �丣�� ������
//
// (n, k) = (n-1, k) + (n-1, k-1) dp -> ���� O(n^2)�̶� �Ұ���
//  = n! / k!(n-k)!
//  = C
// �����⿡ ���ؼ��� ��ⷯ ��Ģ�� �������� ����
//
// C % p = ans
// (C%p)^p = ans (mod p)
// ( n!/k!(n-k)! % p )^p = ans (mod p)
//
// 5 % 2 = 1 (mod 2)
// 10/2 % 2 = 1 (mod 2)
// 10 (x, 2 ������ �� ��)
// 
// a^(p-1) = 1 (mod p)
// a^(p-2) = 1/a (mod p)
// 
// ���� 
// k!(n-k)! ^ (p-2) = 1/k!(n-k)! (mod p)
//
// (n, k) % p = n! * k!(n-k)! ^ p-2 (mod p)

//#include <iostream>
//
//#define PRIME 1000000007
//using LL = long long;
//
//LL myPower(LL a, int b) {
//	if (b == 1) {
//		return a;
//	}
//
//	LL ret = myPower(a, b / 2);
//
//	if (b % 2) {
//		return (((ret * ret) % PRIME) * a) % PRIME;
//	}
//	else {
//		return (ret * ret) % PRIME;
//	}
//}
//
//LL myFactorial(LL a) {
//	LL ret = 1;
//	while (a) ret = (ret * a--)%PRIME;
//	
//	return ret;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	LL n, k;
//
//	std::cin >> n >> k;
//
//	std::cout << (myFactorial(n) * myPower((myFactorial(k) * myFactorial(n - k)) % PRIME, PRIME - 2))%PRIME;
//
//	return 0;
//}