//// ���� �̸� + ����
//// �� / ���� ��
//// ������ ������ -> ��ü������
//// ���� �����ϱ�
//
//// bfs, Ʈ��
////
//// bfs�� Ž���ϸ��
//// ������ �� ���� �ε����� �迭�� ������ �� �ֱ�
//
//#include <iostream>
//#include <queue>
//#include <vector>
//
//int tree[1000001];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//	int n;
//	std::cin >> n;
//
//	std::queue <int> que;
//	que.push(n);
//	tree[n] = -1;
//
//	while (que.front() != 1) {
//		int cur = que.front();
//		que.pop();
//
//		if (cur % 3 == 0 && !tree[cur/3]) {
//			tree[cur / 3] = cur;
//			que.push(cur / 3);
//		}
//		if (cur % 2 == 0 && !tree[cur / 2]) {
//			tree[cur / 2] = cur;
//			que.push(cur / 2);
//		}
//		if (cur - 1 >= 0 && !tree[cur - 1]) {
//			tree[cur - 1] = cur;
//			que.push(cur - 1);
//		}
//	}
//
//	int cur = 1;
//	std::vector<int> st;
//	while (cur != -1) {
//		st.push_back(cur);
//		cur = tree[cur];
//	}
//	std::reverse(st.begin(), st.end());
//	std::cout << st.size() << '\n';
//	for (int i : st) {
//		std::cout << i << ' ';
//	}
//
//	return 0;
//}