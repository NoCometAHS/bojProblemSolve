// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ���ͽ�Ʈ��, ���Ʈ ����
// n�� ��忡�� ���� ����
// �����ϴ� ���� ����� ���� �������� ���ͽ�Ʈ��� ��� (��� �����Դ��� ǥ���ذ���)
// �ͺô� ���̸� ������ �� ���ļ� ���δ� �� ���� �Ǹ� ����, �ƴ� �Ѿ ���� �� ��
//
// pq �ڷ��� : ������ ��� ǥ��(��Ʈ), ��� ����� �ѹ���(��Ʈ), ���� (x, ��� ��� ���ľ� �ϴ� �� �ָ�)

// dp, ��Ʈ ����ŷ, ���Ʈ ����
// 
//

//#include <iostream>
//
//int dp[16][1 << 17];	//dp[cur][visited] : �湮���� �ʾҴ� ��� ���� �� �ּ� ���
//int graph[16][16], n;
//int finished;
//
//int dfs(int cur = 0, int visited = 1) {
//	if (dp[cur][visited]) return dp[cur][visited];
//
//	int min = 2e9;
//	for (int i = 0; i < n; i++) {
//		if (!graph[cur][i] || visited & (1<<i) ) continue;
//
//		int t = dfs(i, visited | (1 << i)) + graph[cur][i];
//
//		min = std::min(min, t);
//	}
//
//	return dp[cur][visited] = min;
//}
//
//int main() {
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		finished |= (1 << i);
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int k = 0; k < n; k++) {
//			std::cin >> graph[i][k];
//		}
//		dp[i][finished] = graph[i][0];
//	}
//
//	std::cout << dfs();
//
//	return 0;
//}