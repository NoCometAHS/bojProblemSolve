// 변수 이름 + 개행
// 논리 / 구현 명세
// 구현은 쉽게 -> 명료히
// 먼저 생각하기

//
// 4
// 1 2 3 4
// -> 1 3 2 4 -> 4 3 2 1
//
// n
// 1번과 n번 사이의 숫자들 역순으로 정렬하려고 움직인 횟수 + 1
// 
// 사이 숫자들은 일자형 탁상이나 마찬가지, 숫자 사이 개수가 n일때
// 따라서 1~n-1까지의 합 = (n-1) * n / 2 번 움직임
// 
// 
// 1 2 3 4 -> 2 1 3 4 -> 2 3 1 4 -> 2 3 4 1 -> 3 2 4 1 -> 3 4 2 1 - > 4 3 2 1
// 
// 4
// (x, 반례 6 - > ans 6, output 7)
// 
// 
// 6
// 1 2 3 4 5 6 -> 2
// 2 1 3 4 6 5 -> 2
// 5 1 4 3 6 2
// 
//