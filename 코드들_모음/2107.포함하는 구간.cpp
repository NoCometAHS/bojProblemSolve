//
// ����, ���� Ž��
// 
// ����, ���� ��� �迭 ���ۿ� ���� ����
// ������ ��� �迭 ���� (�ȵȴ�, ������ ���� ���� �� ����)
//
// �θ�Ʈ ����, ����
// 
// �׳��ϸ� ���ԵǴ� �� ���־�
// ������ �������� ���� -> ������ ���� ���� �������� �ؾ���;;
// 
//

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using intpair = std::pair<int, int>;
//
//
//std::vector<intpair> intervals;
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0, s, e; i < n; i++) {
//		std::cin >> s >> e;
//
//		intervals.push_back({ s, e });
//	}
//
//	//sort
//	std::sort(intervals.begin(), intervals.end());
//	
//
//	int ans = 0;
//	for (int i = n-2; i >= 0; i--) {
//		int e = intervals[i].second;
//		
//		int cnt = 0;
//		for (int k = i + 1; k < n; k++ ) {
//			if (intervals[k].second > e) continue;
//
//			cnt++;
//		}
//
//		ans = std::max(ans, cnt);
//	}
//
//
//	std::cout << ans;
//	return 0;
//}