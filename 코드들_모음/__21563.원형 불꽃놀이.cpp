// ���� �̸� + ����
// �� / ���� ��
// ������ ���� -> �����
// ���� �����ϱ�

//
// 
// ���� �ذ� ��� �о�� �͵� ������ �ȴ�.
// 
// 
// �׸���, �ù�
// ���� ������ 2�� ���� (x, �ٸ� ��Ģ �ʿ�, �ݷ�) 4 / 2 2 2 2 ans 0 output 1)
// ���� ���� �����ϵ� ���� ������ �ִ� ���� �͵��� ����
// ���� �����鼭 �۰� ����
// -> ������ �� �� ū ���� ������ ���׸� ��Ʈ��
// 
// �и� ���� �̿��Ұ��� ��ó ���� ���ϴµ�
// ������ ������ �� ������ �θ�� �ڱ��ڽ�
// 
// ��ġ�µ� ��Ʈ�� ������ ���װ� ���Ͽ���. ������ ���� ��Ʈ���� ���� ������ ������ ���װ� ���Ͽ� (x, ���� ������ ���� �����ؾ߰ڴ�.)
//
// ������ ���� ������ Ȧ�� ¦�� ��� ������?
// 
// Ȧ Ȧ
// 8
// 7 7 7 7 7 7 7 7 
// 0 1 0 0 0 1 0 0
// 
// 
// 6
// 5 5 5 5 5 5
// 4 0 4 5 5 5
// 3 0 0 4 5 5
// 3 0 0 3 0 5
// 2 0 0 2 0 0
// 
// 4 0 4 5 5 5
// 3 0 4 5 4 0
// 
// 
// 10 4  10  3 3
// 10 3 0 2 3 
//
//
//
// 8
// 7 7 7 7 7 7 7
// 0 1 0 0 0 1 0 
// 7 6 0 6 7 7 7
// 6 6 0 6 7 6 0
// 0 5 0 6 7 5 0
// 0 4 0 0 6 5 0
// 0 3 0 0 0 4 0  
//


//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int setTree[2][200200];
//
//int find_par(int cur, const bool& right) {
//	if (cur == setTree[right][cur]) return cur;
//	else return setTree[right][cur] = find_par(setTree[right][cur], right);
//}
//
//bool union_set(int a, int b, const bool& right) {// a <- b
//	a = find_par(a, right), b = find_par(b, right);
//
//	if (a == b) {
//		return false;
//	}
//
//	setTree[right][b] = a;
//
//	return true;
//}
//
//int fireworks[200200];
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		setTree[0][i] = i;
//		setTree[1][i] = i;
//	}
//
//	int minIdx[2] = { 0, 1 };
//	std::vector<int> mins;
//	
//	std::cin >> fireworks[0];
//	mins.push_back(0);
//
//	for (int i = 1; i < n; i++) {
//		std::cin >> fireworks[i];
//		
//		if (fireworks[i] <= fireworks[minIdx[0]]) {
//			
//			if (fireworks[i] < fireworks[minIdx[0]]) {
//				mins.clear();
//			}
//			mins.push_back(i);
//
//			minIdx[1] = minIdx[0];
//			minIdx[0] = i;
//
//		}
//		else if (fireworks[i] < fireworks[minIdx[1]]){
//			minIdx[1] = i;
//		}
//	}
//
//
//	//������ ���� �� 2�� ���ϱ�
//	if (mins.size() > 2) {
//		if (mins[0] +  1 != mins[1]) {
//			minIdx[0] = mins[0];
//			minIdx[1] = mins[1];
//		}
//		else if ((mins[2] + 1)%n != mins[0]) {
//			minIdx[0] = mins[0];
//			minIdx[1] = mins[2]; 
//		}
//		else {
//			minIdx[0] = mins[1];
//			minIdx[1] = mins[2];
//		}
//		
//	}
//
//	for (int i = 2; i < n; i++) {
//		int boomIdx = find_par((minIdx[1] + 1) % n, true);
//
//		if (boomIdx != minIdx[0]) {	//right
//			int boomRight = find_par((boomIdx + 1) % n, true);
//			int boomLeft = find_par((n + boomIdx - 1) % n, false);
//
//			fireworks[boomRight]--;
//			fireworks[boomLeft]--;
//
//			union_set(boomRight, boomIdx, true);
//			union_set(boomLeft, boomIdx, false);
//		}
//		else {	//left
//			boomIdx = find_par((n + minIdx[1] - 1) % n, false);
//
//			int boomLeft = find_par((n + boomIdx - 1) % n, false);
//			int boomRight = find_par((boomIdx + 1) % n, true);
//
//			fireworks[boomLeft]--;
//			fireworks[boomRight]--;
//
//			union_set(boomLeft, boomIdx, false);
//			union_set(boomRight, boomIdx, true);
//		}
//
//		if (fireworks[minIdx[0]] > fireworks[minIdx[1]]) {
//			std::swap(minIdx[0], minIdx[1]);
//		}
//
//		fireworks[boomIdx] = 0;
//		for (int i = 0; i < n; i++) {
//			std::cout << fireworks[i] << ' ';
//		}std::cout << "\n -------------------------------------\n";
//		std::cout << "left set :\n";
//		for (int i = 0; i < n; i++) {
//			std::cout << setTree[0][i] << ' ';
//		}std::cout << "\n\n";
//		std::cout << "right set : \n";
//		for (int i = 0; i < n; i++) {
//			std::cout << setTree[1][i] << ' ';
//		}std::cout << "\n\n\n";
//	}
//
//	std::cout << std::max(fireworks[minIdx[0]], fireworks[minIdx[1]]);
//
//	return 0;
//}