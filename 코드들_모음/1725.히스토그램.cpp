// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

//
// ����� ����
//
// stack<{int ,int}> // �׷��� ũ��, �� ũ��� �̾��� ����
// 
// top�� ���� ���� ���ں��� ũ�ٸ�, �� ũ��� �̾��� ���� �� �� ���ڿ� ���ϰ� ��°� ������ �ɶ� ���� ������
// top�� ���� ���� ���ں��� �۴ٸ�, �ϴ� �׳� �־� �־���
// 
// ���ٸ� ���Ĺ�����
// 
// �������� ���� ���鼭 �����ϸ� �� ��
//
//
//#include <iostream>
//#include <stack>
//
//using intpair = std::pair<int, int>;
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	std::stack<intpair> st;
//	int height, ans = 0;
//	while (n--) {
//		std::cin >> height;
//
//		int temp = 0;
//		while (!st.empty() && st.top().first >= height) {
//			st.top().second += temp;
//
//			ans = std::max(st.top().first * st.top().second, ans);
//
//			temp = st.top().second;
//			st.pop();
//		}
//
//		st.push({ height, temp + 1 });
//	}
//
//	int temp = 0;
//	while (!st.empty()) {
//		st.top().second += temp;
//
//		ans = std::max(st.top().first * st.top().second, ans);
//
//		temp = st.top().second;
//		st.pop();
//	}
//
//	std::cout << ans;
//	return 0;
//}