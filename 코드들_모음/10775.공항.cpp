// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ����Ⱑ �� ���� ����� �ʿ� ���� ������ Gi�� ū�� ���� �ھƵθ� �ִ�� ��ŷ ���� (x, ���� �߸� �о���, ��ŷ ���н� ��� ������ ��ŷ �Ұ����ؼ� ������ �߿�)
//
// �׻� �ڽ��� �ִ� ��ŷ������ ��ŷ�ϴ°� ����
//
// �׸���
//
// dp[i] : i�� ������ �� �ּ� i���� i - dp[i] + 1 ���� ������ �̹� �� ���� 
// // 0�̸� ������ ����
// 
// 0, 1,1,2,0
// 
// �Ϳ� �̰� �и� �������� �� ���ϰ� �ȴ�. ���Ƴ�
//#include <iostream>
//
//int arrived[100001];
//
//int main() {
//	int n, m;
//
//	std::cin >> n >> m;
//
//	int cnt = 0;
//	for (int i = 0, airplane; i < m; i++) {
//		std::cin >> airplane;
//
//		while (airplane > 0 && arrived[airplane]) {
//			int temp = airplane - arrived[airplane];
//			
//			arrived[airplane] += arrived[temp];
//
//			airplane -= arrived[airplane];
//		}
//
//		arrived[airplane]++;
//
//		if (airplane <= 0) break;
//
//		cnt++;
//	}
//
//	std::cout << cnt;
//
//	return 0;
//}