// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

//
// ������ ������ �̵��� ��� ������ ����Ŭ�� �̷�ų� ���� �� 
// 
// dfs, �и� ����
// ����Ŭ�� 1���� ã�ư�. ����Ŭ ã������ safe zone cnt++
// �ٸ� ����Ŭ ã�� �� �ٸ� ���հ� �������� ���� ��ġ�� �Ѿ��
//

//#include <iostream>
//
////int setTree[1000000];
//char map[1000][1001];
//int chk[1000][1000];
//
//int dx[26], dy[26];
//
//int dfs(int x, int y, int setNum) {
//	int nx = x + dx[map[y][x] - 'A'], ny = y + dy[map[y][x] - 'A'];
//	chk[y][x] = setNum;
//
//	if (chk[ny][nx]) {
//		if (chk[ny][nx] == setNum) {
//			return 1;
//		}
//		else {
//			return 0;
//		}
//	}
//	else {
//		return dfs(nx, ny, setNum);
//	}
//
//}
//
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
//		std::cin >> map[i];
//
//	}
//
//	dx['R' - 'A'] = 1, dy['R' - 'A'] = 0;
//	dx['L' - 'A'] = -1, dy['L' - 'A'] = 0;
//	dx['D' - 'A'] = 0, dy['D' - 'A'] = 1;
//	dx['U' - 'A'] = 0, dy['U' - 'A'] = -1;
//
//	int setNum = 1, ans = 0;
//	for (int i = 0; i < n; i++) {
//		for (int k = 0; k < m; k++) {
//			if (chk[i][k]) continue;
//
//			ans += dfs(k, i, setNum++);
//		}
//	}
//
//
//	std::cout << ans;
//
//	return 0;
//}