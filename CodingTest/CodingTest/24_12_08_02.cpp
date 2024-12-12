// 백준 14425
// https://www.acmicpc.net/problem/14425

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N = 0;
	int M = 0;
	int count = 0;
	cin >> N;
	cin >> M;

	vector<string>v1(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v1[i];
	}

	sort(v1.begin(), v1.end());

	string temp;
	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		if (binary_search(v1.begin(), v1.end(), temp))
		{
			count++;
		}
	}

	cout << count;

	return 0;
}

//#include <iostream>
//#include <unordered_set>
//#include <string>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//
//	int N = 0, M = 0, count = 0;
//	cin >> N >> M;
//
//	unordered_set<string> s1; // 문자열을 저장하는 해시 테이블
//
//	// N개의 문자열 입력
//	for (int i = 0; i < N; i++) {
//		string str;
//		cin >> str;
//		s1.insert(str); // 해시 테이블에 삽입
//	}
//
//	// M개의 문자열 입력 및 비교
//	for (int i = 0; i < M; i++) {
//		string str;
//		cin >> str;
//		if (s1.find(str) != s1.end()) { // 해시 테이블에서 검색
//			count++;
//		}
//	}
//
//	cout << count;
//
//	return 0;
//}