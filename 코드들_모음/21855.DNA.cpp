////
//// ����
//// 1111 1111 1111 1111 1111
//// ���� 0, 1, 3, 5�� ��Ʈ�� ������ �� ���� ���� ä���
//// (x, 52��)
//// 
//// ����
//// ��Ʈ �������� ������
//// 1000���� ���� 10�� ��������
//// �������� ������ 10�� ��������
////
//
//#include <iostream>
//#include <fstream>
//#include <vector>
//
//#pragma warning (disable : 4996)
//std::vector<int> ans;
//
//void dfs_left(int cur, int num, int lv, int left = 10) {
//	if (lv == 10) {
//		return;
//	}
//
//	for (int i = cur; i < 10; i++) {
//		ans.push_back(num & ~(1 << (i + left)));
//		
//		dfs_left(i + 1, num & ~(1 << (i + left)), lv + 1, left);
//	}
//
//	return;
//}
//
//
//int main() {
//	std::ofstream wf;
//	wf.open("C:/Users/user/Desktop/ans.txt");
//	
//
//	dfs_left(0, (1 << 20) - 1, 0);
//	dfs_left(0, (1 << 20) - 1, 0, 0);
//
//	for (int i = 0; i < 2000; i++) {
//		wf << ans[i] << '\n';
//	}
//
//	return 0;
//}