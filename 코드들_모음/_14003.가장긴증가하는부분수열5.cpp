// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// dp, tree, ���� Ž��
//
// dp[i] : ���̰� i�� ������ ���������� �߿� ���� ���� ��
// tree[i] : i��° ���� ����� ���� �ε���
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using intpair = std::pair<int, int>;	// value, index
//
//intpair dp[1000001] = { { -2e9, -1}, };	//first���� �׻� ��������
//int tree[1000000];
//int arr[1000000];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	int maxLength = 0;
//	for (int i = 0; i < n; i++) {
//		dp[i + 1].first = 2e9;
//
//		std::cin >> arr[i];
//
//		int Length;
//		Length = std::lower_bound(dp, dp + maxLength + 1, intpair{ arr[i], 0 }, [](const intpair& a, const intpair& b)->bool {return a.first < b.first; }) - dp;
//
//		dp[Length].first = arr[i];
//		dp[Length].second = i;
//		tree[i] = dp[Length-1].second;
//
//		if (Length == maxLength + 1) maxLength++;
//
//	}
//
//	std::vector<int> st;
//	st.reserve(1000001);
//	int cur = dp[maxLength].second;
//	while (cur != -1) {
//		st.push_back(arr[cur]);
//		cur = tree[cur];
//	}
//
//	std::string ans;
//	std::cout << maxLength << '\n';
//	for (auto i = st.rbegin(); i != st.rend(); i++) {
//		ans += std::to_string(*i);
//		ans += ' ';
//	}
//
//	std::cout << ans;
//	return 0;
//}