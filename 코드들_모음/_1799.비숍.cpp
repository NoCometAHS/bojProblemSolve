// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// �θ�Ʈ����, ����
// map�� 1��������
// �밢���� 1���� �迭�� ǥ��
// ������ �Ʒ��� ���� �밢�� arr[n*2-1] 
// // (a, b)�� �밢�� Ȯ�� = arr[a + n - b - 1]  Ȯ��
//
// ���� �Ʒ��� ���� �밢�� arr[n*2-1]
// // (a, b)�� �밢�� Ȯ�� = arr[a+b] Ȯ��

//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//int n;
//bool map[100];
//bool rd[19], ld[19]; // ������ �Ʒ�, ���� �Ʒ�
//
//int dfs_odd(int cur) {
//	if (cur >= n*n) {
//		return 0;
//	}
//
//	int x = cur % n, y = cur / n;
//	int max = dfs_odd(cur+2);
//
//	if (map[cur] && !rd[x + n - y - 1] && !ld[x + y]) { 
//		ld[x + y] = rd[x + n - y - 1] = true;
//
//		max = std::max(max, dfs_odd(cur + 2) + 1);
//
//		ld[x + y] = rd[x + n - y - 1] = false;
//	}
//	
//
//	return max;
//}
//
//int dfs_even(int cur) {
//	if (cur >= n * n) {
//		return 0;
//	}
//
//	int x = cur % n, y = cur / n;
//	int next = (x == n - 2 ? cur + 3 : (x == n - 1 ? cur + 1 : cur + 2));
//
//	int max = dfs_even(next);
//
//	if (map[cur] && !rd[x + n - y - 1] && !ld[x + y]) {
//		ld[x + y] = rd[x + n - y - 1] = true;
//
//		max = std::max(max, dfs_even(next) + 1);
//
//		ld[x + y] = rd[x + n - y - 1] = false;
//	}
//
//
//	return max;
//}
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	std::cin >> n;
//
//	for (int i = 0; i < n*n; i++) {
//		std::cin >> map[i];
//	}
//
//	if (n % 2) {
//		std::cout << dfs_odd(0) + dfs_odd(1);
//	}
//	else {
//		std::cout << dfs_even(0) + dfs_even(1);
//	}
//
//	return 0;
//}