//
// �ùķ��̼�. �׸���(X, ���� ���� ���� �� �� ���������ϴ��� �˾ƾ���)
// ex) baazaa / ��� : aaz / ��� : aab �� �� ����.
//
// 
// �׸���, 
// �ϴ� �׻� ���� ���� ���� ������ ������ (�ȱ׷��� �ְ�� �Ƹ��ٿ� ���� �Ұ���)
// 
// ���� ���� ���ڰ� ���� ����̰� ���� ���ڶ�� ������ ����?
//
// ��. �ְ�� �������ڵ��� ���� ����� ���� ��ġ�� �ϳ� ����-> �װ� �ٷ� ������ �¸� + �ְ�� �Ƹ��ٿ� ����
// ��. �ְ�� �������ڵ��� ���� ����� ���� ��ġ�� �ϳ� ����-> �Ծ���� ���� ���ڱ��� ���ų� ���� �̱�
//
// ���� ���� �� + assert ����� ��
//
//#include <iostream> 
//#include <vector>
//#include <cassert>
//
//char segTree[2 << 18];
//char arr[100001];
//
//void init_tree(int lt, int rt, int node = 1) {
//	if (lt == rt) {
//		segTree[node] = arr[rt];
//		return;
//	}
//
//	int m = (lt + rt) / 2;
//	init_tree(lt, m, node * 2);
//	init_tree(m + 1, rt, node * 2 + 1);
//
//	segTree[node] = std::min(segTree[node * 2], segTree[node * 2 + 1]);
//
//	return;
//}
//
//void use_char(int idx, int lt, int rt, int node = 1) {
//	if (idx < lt || rt < idx) return;
//
//	if (rt == lt) {
//		segTree[node] = 'z' + 1;
//		arr[lt] = 'z' + 1;
//		return;
//	}
//
//	int m = (lt + rt) / 2;
//	use_char(idx, lt, m, node * 2);
//	use_char(idx, m + 1, rt, node * 2 + 1);
//
//	segTree[node] = std::min(segTree[node * 2], segTree[node * 2 + 1]);
//	return;
//}
//
//char find_min_char(int fr, int en, int lt, int rt, int node = 1) {
//	if (rt < fr || en < lt) return 'z' + 1;
//	if (fr <= lt && rt <= en) return segTree[node];
//	else {
//		int m = (lt + rt) / 2;
//		return std::min(find_min_char(fr, en, lt, m, node * 2), find_min_char(fr, en, m + 1, rt, node * 2 + 1));
//	}
//}
//
//std::vector<char> ans;
//std::vector<int> alphabetPos[26];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	int n;
//	std::cin >> n;
//	for (int i = 0; i < n; i++) {
//		std::cin >> arr[i];
//		alphabetPos[arr[i] - 'a'].push_back(i);
//	}
//
//	init_tree(0, n - 1);
//	
//	int res = 0;
//	int sangGunPos = n-1, nextSangGunPos = n-1;
//	for (int i = 0; (i << 1) < n; i++, sangGunPos--) {
//		while (arr[sangGunPos] == 'z' + 1) sangGunPos--;
//		for (nextSangGunPos = sangGunPos - 1; arr[nextSangGunPos] == 'z' + 1; nextSangGunPos--);
//
//		char sangGunChar = arr[sangGunPos];
//		char minChar = find_min_char(0, sangGunPos - 1, 0, n - 1);
//
//		std::cout << "sang gun char :" << sangGunChar << '\n';
//		std::cout << "find min char :" << minChar << "\n";
//		alphabetPos[sangGunChar - 'a'].pop_back();
//
//
//		if (arr[nextSangGunPos] == minChar) {
//			std::cout << "-- beside sang gun --\n";
//			use_char(nextSangGunPos, 0, n - 1);
//			!!!
//			 ����� �� ģ���� ������ ģ�����?
//			std::vector<int>::iterator pos;
//			for (pos = alphabetPos[minChar - 'a'].begin(); *pos != nextSangGunPos && pos != alphabetPos[minChar - 'a'].end(); pos++);
//			assert(pos != alphabetPos[minChar - 'a'].end());
//			alphabetPos[minChar - 'a'].erase(pos);
//		}
//		else {
//			std::cout << "-- other place -- \n";
//			assert(!alphabetPos[minChar - 'a'].empty());
//			int minCharPos = alphabetPos[minChar - 'a'].back();
//			alphabetPos[minChar - 'a'].pop_back();
//
//			use_char(minCharPos, 0, n - 1);
//		}
//		
//		if (!res) res = (minChar < arr[sangGunPos]) - (minChar > arr[sangGunPos]);
//		std::cout << "game res : " << res << "\n\n";
//
//		ans.push_back(minChar);
//
//		for (int i = 0; i < n; i++) {
//			std::cout << arr[i];
//		}std::cout << "\n\n";
//	}
//
//	if (!res) res = ans.back() == arr[sangGunPos];
//
//	std::cout << (res > 0 ? "DA\n" : "NE\n");
//	for (const char& i : ans) {
//		std::cout << i;
//	}
//
//	return 0;
//}