//
// �и��� ���δٸ� �� �׷����� ���� �� �� �ִ�.
// 
// ����Ŭ�� ���� �׷������� ���ļ� �ϳ��� �׷����� ���� �� ����
// ����Ŭ ������ �߿�
// 
// ����Ŭ + ����Ŭ = ����Ŭ
// ����Ŭ + �ٸ� �׷��� = ����Ŭ �ƴ�
// 
// x�� ���� =�� ���� ������ �ʿ� ���� �� ������
// 
// �ٸ� ������ �������� ���� ����Ŭ�� ���� > �Ϲ� �׷��� ���� : �Ұ���
// else "�Ϲ� �׷��� ����" �� �����ؾ���
// 
// ��Ʈ��ŷ?, u&f, dfs
// ���� �ϳ��ϳ� �����ذ��鼭 ��Ʈ��ŷ
// // ���� �׷��� ������ ���� �ʴ� �ٸ� �ڷ� ���ư���
// // �׷��� ������ dfs�� Ȯ�� + �̶� u&f�ٽ� ����� ��
// 
// ��!!!!!!!!!!
//
// ����Ŭ�� �������� ������ ������ ������ (�׷������� ��尡n���̻� �ִٴ� ���� ��򰡿� ����Ŭ�� �����Ѵٴ� �ǹ�)
// a(3, 4) -> �׷���a(��� ��, ���� ��)
// a(4, 5) + b(3, 2) -> ab(7, 7) ���� ��򰡿� �����ص� ������ ���� ������ ����
// 
// �׸���, dfs
// 
// ������ �� ������ �����ϴ°� �ְ�
//
///*
//
//NYYNN
//YNYNN
//YYNNN
//NNNNY
//NNNYN
//
//NYYNN
//YNYNY
//YNNYN
//NNYNN
//NYNNN
//4
//1 2
//1 3
//2 3
//4 5
//
//�ݷ�)
//2 1
//4 6
//1 0
//-> 7 7 ������ �Ѱ��� ������ �� ��
//7
//1->2
//2->1
//3->456
//4->356
//5->346
//6->345
//7
//NYNNNNN
//YNNNNNN
//NNNYYYN
//NNYNYYN
//NNYYNYN
//NNYYYNN
//NNNNNNN
//*/
//
//#include <iostream>
//#include <stack>
//
//using intpair = std::pair<int, int>;
//
//
//intpair graphInfo[50]; //nodeCnt, edgeCnt
//int setTree[50];
//
//
//int find_par(int cur) {
//	if (cur == setTree[cur]) return cur;
//	else return setTree[cur] = find_par(setTree[cur]);
//}
//
//void union_set(int a, int b) {
//	a = find_par(a), b = find_par(b);
//
//	graphInfo[a].first += graphInfo[b].first;
//	graphInfo[a].second += graphInfo[b].second;
//
//	setTree[b] = a;
//
//	return;
//}
//
//
//int main(){
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		setTree[i] = i;
//		graphInfo[i].first = 1;
//	}
//
//	int graphCnt = 0, edgeCnt = 0;
//	char ch;
//	for (int i = 0; i < n; i++) {
//		for (int k = 0; k < n; k++) {
//			std::cin >> ch;
//			if (k <= i || ch == 'N') continue;
//
//			int ipar = find_par(i), kpar = find_par(k);
//
//			if (ipar != kpar) {
//				union_set(ipar, kpar);
//				//std::cout << ipar << ' ' << kpar << '\n';
//			}
//			
//			graphInfo[ipar].second++;
//		}
//	}
//
//	bool chkk[50] = { false, };
//
//	//for (int i = 0; i < n; i++) {
//	//	int p = find_par(i);
//	//	
//	//	if (chkk[p]) continue;
//	//	
//	//	chkk[p] = true;
//
//
//	//	std::cout << graphInfo[p].first << ' ' << graphInfo[p].second << '\n';
//	//}std::cout << "------------\n";
//
//
//	std::stack<int> st;
//
//	bool chk[50] = { false, }, flag = true;
//
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		int par = find_par(i);
//		if (chk[par]) continue;
//
//		chk[par] = true;
//		
//		if (graphInfo[par].second == 0) {
//			flag = (false || n == 1);
//
//			break;
//		}
//
//		while ( !st.empty() && (graphInfo[par].first <= graphInfo[par].second || graphInfo[st.top()].first <= graphInfo[st.top()].second)) {
//			union_set(par, st.top());
//			st.pop();
//
//			ans++;
//		}
//
//		st.push(par);
//	}
//
//
//	std::cout << (st.size() <= 1 && flag ? ans : -1);
//
//	return 0;
//}
//
//
//
//
//
//
