// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

/*
 57 4
 .X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXX....XXXXXXXXXXXXXXXXX
 == .x.x.x.x.x.x....x
*/
// 1+2+1+2+1+2+1+2+1+2+1+2 = 12+6 = 18
// 1+2+1+2+4+2 = 12
// 2+1+2+1+2+4+2 = 
// ���� ������� ū ����� ��ġ�� �� �߿�
//
// X.X... / XX..X.
// -> 5 / 6
// 
// ������ �Ÿ��� ���� �� ���� ä���ָ� �ּ� �ð� ����?
// 
// .XXXXX.X.X.X.
// // 1+2+1+2+1+2+1+2+1 
// .XXX.X.X.XXX.
// // 5 + 8
//
//
// ������ ������ �Ÿ��� ���� �� ���� ä���ָ� �ּ� �ð� ����
// .���� x��� ���� ����
// {������ �Ÿ�, ���� ��ġ} arr[] �������� ����
// ó������ �� �� ������ ������ ä��
// ä�ﶧ���� x���̷� ����--, �Ÿ���ŭ .���� ����
// 
// ���̻� �� ä���.
// ���� ������ .������ ����
// 
// .���� + x��� ����*2
// 

//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using intpair = std::pair<int, int>;
//char passage[200200];
//
//int main() {
//	int n, m;
//	std::cin >> n >> m;
//	std::cin >> passage;
//
//	int i = 0;
//	while (i < n && passage[i++] == '.');
//
//	std::vector<intpair> vec;
//	vec.reserve(100100);
//
//	while (i < n) {
//		while (i < n && passage[i] == 'X') i++;
//		int cnt = 0;
//
//		while (i < n && passage[i] == '.') cnt++, i++;
//		
//
//		vec.push_back({ cnt, i - 1 });
//	}
//
//	if (!vec.empty() && vec.back().second == n - 1) vec.pop_back();
//
//	std::sort(vec.begin(), vec.end());
//
//	/*for (auto i : vec) {
//		std::cout << (i.first) << ' ' <<( i.second) << '\n';
//	}*/
//
//	for (std::vector<intpair>::iterator i = vec.begin(); i != vec.end() && m - i->first >= 0; i++) {
//		for (int k = i->second - i->first + 1; k <= i->second; k++) {
//			passage[k] = 'X';
//		}
//		m -= i->first;
//	}
//	//
//	//for (int i = 0; i < n; i++) {
//	//	std::cout << passage[i];
//	//}std::cout << '\n';
//
//	int wallChunk = 0, space = 0;
//
//	for (int i = 1, cnt = 1; i <= n; i++, cnt++) {
//		if (passage[i] != passage[i - 1]) {
//			if (passage[i - 1] == '.') {
//				space += cnt;
//			}
//			else {
//				wallChunk++;
//			}
//
//			cnt = 0;
//		}
//	}
//
//	if (!wallChunk) {
//		std::cout << std::min(space - m + 2, space);
//	}
//	else {
//		std::cout << space - m + wallChunk * 2;
//	}
//
//	return 0;
//}
// 
// �̰� �� �ȵȰž� ����?
//std::vector<int> arr;
//
//int main() {
//	int n, m;
//	std::cin >> n >> m;
//
//	int wallCnt = 0, spaceCnt = 0;
//	char cur, pre = 0, cnt = 1;
//
//	for (std::cin >> pre; pre == '.'; std::cin >> pre) {
//		spaceCnt++;
//		if (spaceCnt == n) break;
//	}
//	if (spaceCnt != n) {
//		for (int i = spaceCnt + 1; i < n; i++, cnt++) {
//			std::cin >> cur;
//
//			if (pre != cur) {
//				if (pre == 'X') {
//					wallCnt++;
//				}
//				else {
//					arr.push_back(cnt);
//					spaceCnt += cnt;
//				}
//
//				cnt = 0;
//			}
//
//			pre = cur;
//		}
//
//		if (pre == 'X') {
//			wallCnt++;
//		}
//		else if (pre == '.') {
//			spaceCnt += cnt;
//		}
//	}
//
//	std::sort(arr.begin(), arr.end());
//
//	if (arr.size() != 0) {
//		for (std::vector<int>::iterator i = arr.begin(); i != arr.end() && m - *i >= 0; i++) {
//			wallCnt--;
//			spaceCnt -= *i;
//			m -= *i;
//		}
//	}
//
//	if (m > 0 && wallCnt == 0) {
//		std::cout << std::min(spaceCnt - m + 2, spaceCnt);
//	}
//	else {
//		std::cout << spaceCnt - m + wallCnt * 2;
//	}
//
//	return 0;
//}