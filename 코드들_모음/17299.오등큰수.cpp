// ���� �̸� + ����
// �� / ���� ��
// ������ ������ -> ��ü��
// ���� �����ϱ�

// ����� ����
// �ϴ� f(x) ���� ���ϱ�
// ������ �����ؼ� f({Ai, pos}) ���ÿ� �ֱ�
// //���� top�� ũ�� �� ���� ����ū��
// //���� top�� ������ �װ� �������� (���� ����ū�� ã�� �ִ� �� ��� ���� �ͺ��� ���ʿ� �ִ� ai�� ����ū���� �Ǵ°� ����)

//#include <iostream>
//#include <stack>
//
//
//int cnt[1000001];
//int arr[1000000];
//int NGF[1000000];
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		std::cin >> arr[i];
//		cnt[arr[i]]++;
//	}
//
//	std::stack<int> st; //index
//
//	for (int i = n - 1; i >= 0; i--) {
//		while (!st.empty() && cnt[arr[i]] >= cnt[arr[st.top()]]) st.pop();
//
//		if (st.empty()) {
//			NGF[i] = -1;
//		}
//		else {
//			NGF[i] = arr[st.top()];
//		}
//
//		st.push(i);
//	}
//
//
//	for (int i = 0; i < n; i++) {
//		std::cout << NGF[i] << ' ';
//	}
//	return 0;
//}
