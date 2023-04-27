// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ����?, �������� ����, �׸���?
//
// ������ ���� ����� ���� ���ϱ�
// ������ 1�� �������� ����� ������ �� ����� �����
// ����� �� ������ ����� �������� ���� ���� 1��
//

//#include <iostream>
//#include <vector>
//#include <queue>
//
//std::vector<int> graph[1000000];
//int conn[1000000];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0, f, t; i+1 < n; i++) {
//		std::cin >> f >> t;
//		f--, t--;
//
//		graph[f].push_back(t);
//		graph[t].push_back(f);
//		conn[f]++, conn[t]++;
//	}
//
//	int ans = 0;
//	std::queue<int> que;
//
//	for (int i = 0; i < n; i++) {
//		if (conn[i] != 1 || !conn[graph[i][0]]) continue;
//		que.push(graph[i][0]);
//	
//		conn[graph[i][0]] = 0;
//	}
//
//	while (!que.empty()) {
//		int cur = que.front();
//		que.pop();
//
//		ans++;
//
//		for (const int& next : graph[cur]) {
//			conn[next]--;
//
//			if (conn[next] != 1) continue;
//			
//			for (const int& i : graph[next]) {
//				if (conn[i] <= 0) continue;
//
//				conn[i] = 0;
//				que.push(i);
//			}
//		}
//	}
//
//	std::cout << ans;
//	return 0;
//}