// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// 1005 acm craft
// 
// ���� ����
// ���ÿ� ������ �� �ִ� �͵��� ���� �ε����� ǥ��(x)
// ���ÿ� ����Ǵ� �Ϳ� ���� ū �ð��� �� ������� �ð����� (x, �̷��� ���ص� ��)
//
// endTime[i] = i�ǹ� ���µ� �ɸ��� �ð� 
// f, i ���� f���� �ð� + buildingTime[i]�� ���� ū���� i �ǹ� ���µ� �ɸ��� �ð�

//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//int endTime[1000];
//int buildingTime[1000];
//int connected[1000];
//
//std::vector<int> graph[1000];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int tc;
//	std::cin >> tc;
//
//	while (tc--) {
//		int n, m, goal;
//		std::cin >> n >> m;
//
//		for (int i = 0; i < n; i++) {
//			graph[i].clear();
//			endTime[i] = 0;
//			std::cin >> buildingTime[i];
//		}
//
//		for (int i = 0, f, t; i < m; i++) {
//			std::cin >> f >> t;
//			
//			f--, t--;
//
//			graph[f].push_back(t);
//			connected[t]++;
//		}
//
//		std::queue<int> que;
//		for (int i = 0; i < n; i++) {
//			if (connected[i]) continue;
//
//			que.push(i);
//			endTime[i] = buildingTime[i];
//		}
//
//		std::cin >> goal;
//
//		while (!que.empty()) {
//			int cur = que.front();
//			que.pop();
//
//			for (const int& next : graph[cur]) {
//				connected[next]--;
//				endTime[next] = std::max(endTime[next], endTime[cur] + buildingTime[next]);
//
//				if (!connected[next]) {
//					que.push(next);
//				}
//			}
//		}
//
//		std::cout << endTime[goal-1] << '\n';
//	}
//
//	return 0;
//}

// �� ���

// ���� Ž��
// -3 2 5
//#include <iostream>
//#include <algorithm>
//
//int liquid[100000];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> liquid[i];
//	}
//
//	int ans = 2e9 + 1;
//	int l, r;
//	for (int i = 0; i < n - 1; i++) {
//		int* pos = std::lower_bound(liquid + i + 1, liquid + n, -liquid[i]);
//		
//		if (pos - (liquid + i + 1) != 0) {
//			if (ans > std::abs(*(pos - 1) + liquid[i])) {
//				ans = std::abs(*(pos - 1) + liquid[i]);
//				r = liquid[i], l = *(pos - 1);
//			}
//		}
//
//		if (pos - liquid < n) {
//			if (ans > std::abs(*pos + liquid[i])) {
//				ans = std::abs(*pos + liquid[i]);
//				r = liquid[i], l = *pos;
//			}
//		}
//
//	}
//
//	std::cout << r << " " <<  l;
//	return 0;
//}

//2623. ���� ���α׷�
// ���� ����

//#include <iostream>
//#include <queue>
//#include <vector>
//
//std::vector<int> graph[1000];
//int conn[1000];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n, m;
//	std::cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		int cnt, pre, cur;
//		std::cin >> cnt >> pre;
//		pre--;
//
//		for (int i = 1; i < cnt; i++) {
//			std::cin >> cur;
//			cur--;
//
//			conn[cur]++;
//			graph[pre].push_back(cur);
//			pre = cur;
//		}
//	}
//
//	std::queue<int> que;
//
//	for (int i = 0; i < n; i++) {
//		if (conn[i]) continue;
//		que.push(i);
//	}
//
//	std::vector<int> ans;
//
//	while (!que.empty()) {
//		int cur = que.front();
//		que.pop();
//
//		ans.push_back(cur);
//
//		for (int next : graph[cur]) {
//			conn[next]--;
//
//			if (conn[next]) continue;
//			
//			que.push(next);
//		}
//	}
//
//	if (ans.size() != n) {
//		std::cout << 0;
//	}
//	else {
//		for (const int& i : ans) {
//			std::cout << i + 1<< '\n';
//		}
//	}
//
//	return 0;
//}

//2473.�� ���
//
// ��������, ����Ž��
// ���� �� �糡���� �������� ����
// ���� Ž���ؼ� ���� �� ���ϴµ�
// // ������ ������ ������ �̵�
// // ����� �������� �������� �̵�
// rt-lf+1 < 3�̸� ����
// 
//-24 -6 -3 -2 61 98 100 
//-76 -6, 70
//-24 -6 -3 -2 61 98
//-74 -6 / 68
//-24 -6 -3 -2 61
// -37 -6, 31
//-24 -6 -3 -2
// 26 -3, -29
// -6 -3 -2
// 8 -3, -11
// -3 -2 / end
//
//-48 -26 -24 -1 50 (�ݷ� ����)
// �θ�Ʈ����, ���� Ž��

//
//#include <iostream>
//#include <algorithm>
//
//using LL = long long;
//
//LL liquid[5000];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> liquid[i];
//	}
//
//	std::sort(liquid, liquid + n);
//
//	LL minAbs = 1LL<<32, min;
//	LL ansL, ansM, ansR;
//
//	for (LL fr = 0; fr < n - 2; fr++) {
//		for (int mid = fr + 1; mid < n - 1; mid++) {
//			LL* en = std::lower_bound(liquid + mid + 1, liquid + n, -(liquid[fr] + liquid[mid]));
//
//			if (en != liquid + n) {
//
//				if (minAbs > std::abs(liquid[fr] + liquid[mid] + *en)) {
//					min = liquid[fr] + liquid[mid] + *en;
//					minAbs = std::abs(min);
//					ansL = fr, ansM = mid, ansR = en - liquid;
//				}
//			}
//
//			if (en != liquid + mid + 1) {
//
//				if (minAbs > std::abs(liquid[fr] + liquid[mid] + *(en - 1))) {
//					min = liquid[fr] + liquid[mid] + *(en - 1);
//					minAbs = std::abs(min);
//					ansL = fr, ansM = mid, ansR = en - liquid - 1;
//				}
//			}
//		}
//	}
//
//	std::cout << liquid[ansL] << ' ' << liquid[ansM] << ' ' << liquid[ansR];
//
// 	return 0;
//}

//1806.�κ� ��
// 
// �� ������
//
//#include <iostream>
//
//int arr[100001];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n, m;
//
//	std::cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) {
//		std::cin >> arr[i];
//	}
//
//	int fr = 0, en = 0;
//	int ans = 1e9, sum = 0;
//
//	while (fr <= en) {
//		if (en < n && sum < m) {
//			sum += arr[++en];
//		}
//		else {
//			sum -= arr[++fr];
//		}
//
//
//		if (sum >= m) {
//			ans = std::min(ans, en - fr);
//		}
//	}
//
//	std::cout << (ans == 1e9 ? 0 : ans);
//	return 0;
//}

//9466. �� ������Ʈ
//
// ����, dfs
// �̹� ���� ������ üũ�� chk[i]
// dfs�� �� �� order[i]

//#include <iostream>
//
//bool chk[100000];
//int order[100000];
//int arr[100000];
//
//int dfs(int cur, int num) {
//	if (chk[cur]) return 0;
//	if (order[cur]) return num - order[cur];
//
//	order[cur] = num;
//	int ret = dfs(arr[cur], num + 1);
//	order[cur] = 0;
//	chk[cur] = true;
//
//	return ret;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	
//	int tc;
//	std::cin >> tc;
//
//	while (tc--) {
//		int n;
//		std::cin >> n;
//
//		for (int i = 0; i < n; i++) {
//			chk[i] = false;
//
//			std::cin >> arr[i];
//			arr[i]--;
//		}
//
//		int ans = 0;
//		for (int i = 0; i < n; i++) {
//			if (chk[i]) continue;
//
//			ans += dfs(i, 1);
//		}
//
//		std::cout << n - ans << '\n';
//	}
//
//	return 0;
//}

//2166.�ٰ��� ���� ���ϱ�

// ����
//
//�Ź߲� ���� ���� �������� ����? �ٰ����� ���ؼ� ���� �� �� ����
//

//#include <iostream>
//#include <cmath>
//
//using LL = long long;
//
//int main() {
//	int n;
//	std::cin >> n;
//
//	LL pre[2], cur[2], ans = 0;
//	LL first[2];
//
//	std::cin >> pre[0] >> pre[1];
//	first[0] = pre[0], first[1] = pre[1];
//
//	for (int i = 1; i < n; i++) {
//		std::cin >> cur[0] >> cur[1];
//
//		ans += pre[0] * cur[1] - pre[1] * cur[0];
//
//		pre[0] = cur[0], pre[1] = cur[1];
//	}
//	ans += pre[0] * first[1] - pre[1] * first[0];
//	
//	double ansd = round((std::abs(ans) / 2.0) * 10) / 10;
//	
//	std::cout << std::fixed;
//	std::cout.precision(1);
//	std::cout << ansd;
//
//	return 0;
//}

//17387.���б���2

// ����, ccw
//
//
//#include <iostream>
//
//using LL = long long;
//
//LL line[2][4];
//
//int cross(LL* point, LL* line) {
//	LL res = point[0] * line[1] + line[0] * line[3] + line[2] * point[1] - (point[1] * line[0] + line[1] * line[2] + line[3] * point[0]);
//	return (res > 0) - (res < 0);
//}
//void swap(LL* a, LL* b) {
//	LL t[2] = { a[0], a[1] };
//	a[0] = b[0], a[1] = b[1];
//	b[0] = t[0], b[1] = t[1];
//	return;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	for (int i = 0; i < 2; i++) {
//		for (int k = 0; k < 4; k++) {
//			std::cin >> line[i][k];
//		}
//	}
//
//	int r1 = cross(line[0], line[1]) * cross(line[0] + 2, line[1]), r2 = cross(line[1], line[0]) * cross(line[1] + 2, line[0]);
//	std::cout << r1 << ' ' << r2 << '\n';
//	
//	if (r1 == 0 && r2 == 0) {
//		if (line[0][1] > line[0][3]) std::swap(line[0][1], line[0][3]);
//		if (line[0][0] > line[0][2]) std:: swap(line[0][0], line[0][2]);
//		if (line[1][1] > line[1][3]) std::swap(line[1][1], line[1][3]);
//		if (line[1][0] > line[1][2]) std::swap(line[1][0], line[1][2]);
//		
//
//		if (line[0][0] > line[1][2] || line[0][2] < line[1][0] || line[0][1] > line[1][3] || line[0][3] < line[1][1]) {
//			std::cout << 0;
//		}
//		else {
//			std::cout << 1;
//		}
//	}
//	else {
//		std::cout << (r1 <= 0 && r2 <= 0);
//	}
//	
//	return 0;
//}
