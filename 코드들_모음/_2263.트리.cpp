// ���� �̸� + ����
// �� / ���� ����
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ����, ���
// �ο���, ����Ʈ���� ���� ��ġ ǥ��
//
// ���� ���� Ʈ��
// in-order : 4 2 5 1 6 3 7  
// post-order : 4 5 2 6 7 3 1
//
// ����Ʈ������ ��Ʈ ã��
// �ο����� �� �ڽ� ���� ���ϱ�
// �� ������ ����Ʈ, �� ���� �� �ڽ����� ������

//#include <iostream>
//#include <vector>
//
//int inOrder[100000];
//int postOrder[100000];
//
//int inOrderPos[100000];
//
//std::vector<int> tree[100000];
//
//void recur(int inB, int inE, int postB, int postE) {
//	//std::cout << inB << ' ' << inE << ' ' << postB << ' ' << postE << '\n';
//	
//	if (inB >= inE) return;
//
//	int rootPos = inOrderPos[postOrder[postE]];
//
//	int lfCnt = rootPos - inB, rtCnt = inE - rootPos;
//	if (lfCnt > 0) {
//		int child = postOrder[postE - rtCnt - 1];
//
//		tree[postOrder[postE]].push_back(child);
//		recur(inB, rootPos - 1, postB, postE - rtCnt - 1);
//	}
//
//	if (rtCnt > 0) {
//		int child = postOrder[postE-1];
//
//		tree[postOrder[postE]].push_back(child);
//		recur(rootPos + 1, inE, postE - rtCnt, postE-1);
//	}
//
//	return;
//}
//
//void preOrder(int cur) {
//	std::cout << cur+1 << ' ';
//
//	for (int next : tree[cur]) {
//		preOrder(next);
//	}
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> inOrder[i];
//		inOrder[i]--;
//
//		inOrderPos[inOrder[i]] = i;
//	}
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> postOrder[i];
//		postOrder[i]--;
//	}
//
//	recur(0, n - 1, 0, n - 1);
//
//	preOrder(postOrder[n - 1]);
//
//	return 0;
//}