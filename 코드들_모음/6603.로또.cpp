// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// 
// dfs

//#include <iostream>
//#include <vector>
//int arr[12], n;
//std::vector<int> selected;
//
//void dfs(int cur = 0) {
//	if (selected.size() == 6) {
//		for (const int& i : selected) {
//			std::cout << i << ' ';
//		}std::cout << '\n';
//		
//		return;
//	}
//
//	for (int i = cur; i < n; i++) {
//		selected.push_back(arr[i]);
//
//		dfs(i + 1);
//
//		selected.pop_back();
//	}
//
//	return;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	std::cin >> n;
//	while (n != 0) {
//		for (int i = 0; i < n; i++) {
//			std::cin >> arr[i];
//		}
//
//		dfs();
//
//		std::cin >> n;
//	}
//
//	return 0;
//}