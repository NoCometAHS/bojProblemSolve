// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�
//
// 
// ���� ���� �߿������� �������٤���
// 
// Ʈ������ dp, dfs
// ��� �����ϵ� �� ��带 ��Ʈ�� ���� ��� X
// ������ ��� ��忡�� ��� 1���� ��������� ������ �־������ �ִ� �α���
//  
// dp[2][n] :  dp[0][i] = i��尡 ��� ������ �ƴϰ� i�� ��Ʈ�� �ϴ� ����Ʈ���� �α��� �ִ밪/
//			   dp[1][i] = i��尡 ��� ������ �ƴϰ� i�� ��Ʈ�� �ϴ� ����Ʈ���� �α��� �ִ밪
//
// 
// dp[0][i] = std::max(std::max(dp[0][childs], dp[1][childs]));	//�ϳ��� ������ ���õ� ���·� ���ƾ���
// 
// dp[1][i] = population[i] + std::max(dp[0][childs]);
//

//#include <iostream>
//#include <vector>
//
//std::vector<int> graph[10000];
//int dp[2][10000];
//int popu[10000];
//
//int dfs_not_select(int cur, int par);
//
//int dfs_select(int cur, int par) {
//	if (dp[1][cur]) return dp[1][cur];
//
//	int ret = 0;
//	for (const int& next : graph[cur]) {
//		if (next == par) continue;
//
//		ret += dfs_not_select( next, cur);
//	}
//
//	return dp[1][cur] = ret + popu[cur];
//}
//
//int dfs_not_select( int cur, int par) {
//	if (dp[0][cur]) return dp[0][cur];
//
//	int ret = 0;
//
//	for (const int& next : graph[cur]) {
//		if (next == par) continue;
//
//		ret += std::max(dfs_select(next, cur), dfs_not_select(next, cur));
//	}
//	
//	return dp[0][cur] = ret;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> popu[i];
//	}
//
//	for (int i = 1, f, t; i < n; i++) {
//		std::cin >> f >> t;
//		f--, t--;
//
//		graph[f].push_back(t);
//		graph[t].push_back(f);
//	}
//
//	std::cout << std::max(dfs_select(0, 0), dfs_not_select( 0, 0));
//
//	return 0;
//}

/*
1-2-3-4-5
    /
   6

6
10 1 1 1 10 10
1 2
2 3
3 4
4 5
3 6
*/