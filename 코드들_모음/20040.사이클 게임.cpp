// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�
//
// "������ 3 ���� �������� �������� �ʴ´�"�� ���� �ǹ��� -> ���� ������ �����ϴ� ��츦 ���ϴ� �ǰ�?
// 
// ccw (�� ���ǹ� ����), �и� ����
//
// �κ� �����̶� ���� ���տ� �����ϴ� ���� ������ ����Ŭ�� �������

//#include <iostream>
//
//int set_tree[500000];
//
//int find_par(int cur) {
//	if (cur == set_tree[cur]) return cur;
//	else return set_tree[cur] = find_par(set_tree[cur]);
//}
//
//void union_set(int a, int b) {
//	a = find_par(a), b = find_par(b);
//
//	set_tree[a] = b;
//
//	return;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int n, m;
//
//	std::cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		set_tree[i] = i;
//	}
//
//	int ans = 1;
//	for (int i = 0, a, b; i < m; i++, ans++) {
//		std::cin >> a >> b;
//
//		if (find_par(a) == find_par(b)) {
//			break;
//		}
//
//		union_set(a, b);
//	}
//
//	std::cout << (ans > m ? 0 : ans);
//
//	return 0;
//}