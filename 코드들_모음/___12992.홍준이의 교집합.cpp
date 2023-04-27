// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

//
// ����, ���, �Ǻ���ġ�� dp
// 
// lt, rt������ �������� ����
// 
// ������ ������ rt���� lt�� �ʰ��� ��� ������ �� �ʿ� ����, �� �������� �ϳ��� ��������� �� �ʿ� ����
//
// ������ �ϳ� ���ϰ� ���� ������ ���Ѵٰ� ����,
// �� �ٸ� ������ ó�� ������ �����ʿ� ��ġ�ų� ���ԵǾ��ִ�. (���ʿ��� ��ģ �� ����° ���࿡�� ó�� ����) (??���� �𸣰�)
// 
// 
// 2107.�����ϴ� ���� ó�� �ϸ� ���� ������?
// 
// �� ��ġ�� �Ȱ͸� ���� �־�, �������� �� �ͳ����� ���� �信 ������ ���� �ʾ�
// 
// lt, rt������ �������� ����
//
// vector<{int, int}> dp[1] (x)
// 
// ������
// ���̶��;;; ������ ���� ��ƴ���
//
//
// ���� ī����, ��ⷯ���� ������ ����, ����, pq, ��ǥ ����
//
// a^p-1 = 1 (mod p)
// a * a^p-2 = 1 (mod p)
// 
// ��� �������� ����� ���� �� == (�� ���� ���� * �� ������ �����ϴ� ������ ������ ����)�� ��
// �� ���� ������, ��� ������ ���� ����� ��
// 
// 
// ���� ������ ���� �������� ����
// �� ������ ���� ���� �۰ų� ���� ������ �� ���� pq�� ����.
// �� ���� �� ������ �۴ٸ� pq���� �� 
//

//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//
//#define PRIME 1000000007
//
//using LL = long long;
//using intpair = std::pair<int, int>;
//
//LL facto[200200];
//intpair intervals[200200];
//std::vector<int> points;
//
//LL myPow(LL a, int b) {
//	if (b == 0) return 1;
//	if (b == 1) return a;
//
//	LL ret = myPow(a, b / 2);
//	ret = (ret * ret) % PRIME;
//
//	if (b % 2) {
//		return (ret * a) % PRIME;
//	}
//	else {
//		return ret;
//	}
//}
//
//LL comb(int n, int m) {
//	if (n < m) return 0;
//	if (m == 0) return 1;
//
//	return (facto[n] * myPow((facto[m] * facto[n - m]) % PRIME, PRIME - 2))%PRIME;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	
//	points.reserve(400400);
//
//	facto[0] = 1;
//	for (int i = 1; i <= 200000; i++) {
//		facto[i] = (facto[i-1] * i)%PRIME;
//	}
//
//	int n, m;
//	std::cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		std::cin >> intervals[i].first >> intervals[i].second;
//		points.push_back(intervals[i].first);
//		points.push_back(intervals[i].second);
//	}
//
//	std::sort(intervals, intervals + n);
//	std::sort(points.begin(), points.end());
//	points.erase(std::unique(points.begin(), points.end()), points.end());
//
//	for (int i = 0; i < n; i++) {	//��ǥ ����
//		intervals[i].first = std::lower_bound(points.begin(), points.end(), intervals[i].first) - points.begin();
//		intervals[i].second = std::lower_bound(points.begin(), points.end(), intervals[i].second) - points.begin();
//	}
//
//	std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
//	int usedCnt = 0;
//	LL ans = 0;
//
//	for (int i = 0; i < points.size()-1; i++) {
//		while (usedCnt < n && intervals[usedCnt].first <= i) pq.push(intervals[usedCnt++].second);
//
//		ans = (ans + comb(pq.size(), m)) % PRIME;	// �� �� ���� ���
//
//		while (!pq.empty() && pq.top() <= i) pq.pop();
//
//		ans = (ans + comb(pq.size(), m) * (points[i+1] - points[i]-1)) % PRIME; // ���� ������ ���� ���
//		std::cout << ans << '\n';
//		
//	}
//
//	while (usedCnt < n && intervals[usedCnt].first <= points.size()-1) pq.push(intervals[usedCnt++].second);
//	while (!pq.empty() && pq.top() < points.size()-1) pq.pop();
//	ans = (ans + comb(pq.size(), m)) % PRIME; // ������ �� ���
//
//	std::cout << ans;
//	return 0;
//}