// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ������(���Ϸ� �� �Լ�), ���μ�����
// ��(p) = p-1 (p is prime)
// ��(p^n) = p^n-1 * (p-1)
// ��(p1^n1 * p2^n2) = ��(p1^n1) * ��(p2^n2)
//
//
// ���� ���� ����
// (? �ð� �ʰ�, �Ҽ��� �̳� ũ�� ���� �Ҽ��� �� ã�µ� ����)
// 
// + �����佺�׳׽��� ü
// [1,10^6]
// 10^6������ �Ҽ��� ������ �������� �ʴ� �� t��
// ���� �Ҽ� 10^6+3�� ���ϸ� 10^12�� �Ѿ�� ������ t�� �׻� �Ҽ��̴�
//// 
////
//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using LL = long long;
//
//LL myPow(LL a, LL b) {
//	if (b == 0) {
//		return 1;
//	}
//	if (b == 1) {
//		return a;
//	}
//
//	LL ret = myPow(a, b / 2);
//
//	if (b % 2) {
//		return ret * ret * a;
//	}
//	else {
//		return ret * ret;
//	}
//}
//
//bool isPrime(LL num) {
//	LL end = sqrt(num);
//
//	for (int i = 2; i <= end; i++) {
//		if (num % i == 0) return false;
//	}
//
//	return true;
//}
//
//
//std::vector<LL> primes;
//bool sieve[1000000];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	
//	LL n;
//	std::cin >> n;
//
//	for (LL i = 2; i <= 100; i++) {
//		if (!isPrime(i)) continue;
//
//		for (LL k = 2; i * k < 1000000; k++) {
//			sieve[i * k] = true;
//		}
//	}
//	primes.reserve(50000);
//	for (int i = 2; i < 1000000; i++) {
//		if (sieve[i]) continue;
//		primes.push_back(i);
//	}
//
//	LL cnt, ans = 1;
//	for (const LL& i : primes) {
//		if (n == 1) break;
//		if (n % i) continue;
//		cnt = 0;
//
//		while (n % i == 0) {
//			cnt++;
//			n /= i;
//		}
//
//		ans *= myPow(i, cnt - 1) * (i - 1);
//	}
//
//	if (n != 1) ans *= n - 1;
//	std::cout << ans;
//
//	return 0;
//}

