////
//// dfs, greedy
//// 
//// �ڽ� ������ ���� ��� ���� ��ȭ�Ŵ°� �̵� (
//// �ݷ� ����
//// 13
//// -1 0 0 1 1 3 3 4 4 2 2 2 2
//// )
//// 
//// �ڽ� ���� ����
//// dfs���鼭 �ִ� �ð� �����ϱ�
//// 
//// dfs�� ���鼭 ��� �ϳ��� �ð� �󸶳� �ɸ��� �� Ȯ��
//// ����� ó�� �ð� = max(�ڽĵ��� ó�� �ð�)
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using intpair = std::pair<int, int>; //child cnt / to
//
//std::vector<int> graph[51];
//
////
////int count_child(int cur) {
////	int res = 1;
////	for (intpair& ch : graph[cur]) {
////		res += (ch.first = count_child(ch.second));
////	}
////
////	std::sort(graph[cur].begin(), graph[cur].end(), std::greater<intpair>());
////
////	return res;
////}
//
//int ans = 0;
//
//int dfs(int cur) {
//	int res = 0;
//	std::vector<int> times;
//
//	for (const int& ch : graph[cur]) {
//		times.push_back( dfs(ch) );
//	}
//
//	std::sort(times.begin(), times.end(), std::greater<int>());
//
//	for (int i = 0; i < times.size(); i++) {
//		times[i] += i+1;
//		res = std::max(res, times[i]);
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
//	std::cin >> n;
//
//	int t;
//	std::cin >> t;
//	for (int i = 1, num; i < n; i++) {
//		std::cin >> num;
//		graph[num].push_back(i);
//	}
//
//	std::cout << dfs(0);
//
//	return 0;
//}