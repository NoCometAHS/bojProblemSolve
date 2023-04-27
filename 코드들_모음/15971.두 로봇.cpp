// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü������
// ���� �����ϱ�

//
// �׷���, dfs, �׸���
// 
// �ϴ� �� ��带 �̾��ִ� ����� ������ ���� (��δ� �ϳ��� ����)
// a, b, c, d...
// 
// ���⼭ ��� �ϳ����� ���δ� ���� ���� �����µ� ��� ���
// ���� ���� ū ��� ���� ���ϴ� ���� �ּҰ�
// 
// dfs�� ��� ã�� �ִ밪 ���� �� ���ϱ�
//
//
//#include <iostream>
//#include <vector>
//
//using intpair = std::pair<int, int>;
//
//std::vector<intpair> graph[100100];
//bool chk[100100];
//
//int st, en;
//
//int dfs(int cur) {
//	static std::vector<int> costs;
//
//	if (cur == en) {
//		int max = 0, sum = 0;
//		for (const int& i : costs) {
//			sum += i;
//			max = std::max(max, i);
//		}
//
//		return sum - max;
//	}
//
//	int res = -1;
//
//	for (const intpair& next : graph[cur]) {
//		if (chk[next.second]) continue;
//
//		chk[next.second] = true;
//		costs.push_back(next.first);
//		
//		res = dfs(next.second);
//		if (res != -1) break;
//
//		costs.pop_back();
//	}
//
//	return res;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n >> st >> en;
//
//	for (int i = 1, from, to, c; i < n; i++) {
//		std::cin >> from >> to >> c;
//
//		graph[from].push_back({ c, to });
//		graph[to].push_back({ c, from });
//	}
//
//	chk[st] = true;
//	std::cout << dfs(st);
//
//	return 0;
//}
