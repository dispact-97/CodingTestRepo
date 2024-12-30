// 백준 2108
// https://www.acmicpc.net/problem/2108

#include <iostream> 
#include <algorithm>
#include <vector>

using namespace std;

const int LM = 500000;
const int NBASE = 4000;
const int NLM = NBASE * 2 + 1;
int N, n, a[LM], t[LM], cnt[NLM];

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int N = 0;
	int res1 = 0;	// 산술 평균
	int res2 = 0;	// 중앙값
	int res3 = 0;	// 최빈값
	int res4 = 0;	// 범위
	vector<int> vec;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num = 0;
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	// 산술 평균
	for (int i = 0; i < vec.size(); i++)
	{
		res1 += vec[i];
	}
	res1 = round(res1 / N);
	if (res1 == -0)
	{
		res1 = 0;
	}
	cout << res1 << '\n';

	// 중앙 값
	res2 = vec[vec.size() / 2];
	cout << res2 << '\n';	// 홀수 일때만 가능

	// 최빈값

	cout << "NULL" << '\n';

	// 범위
	res4 = *(vec.end() - 1) - *vec.begin();
	cout << res4 << '\n';

	return 0;
}