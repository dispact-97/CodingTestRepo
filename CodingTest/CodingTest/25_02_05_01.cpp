// 백준 10431 줄세우기
// https://www.acmicpc.net/problem/10431

#include <iostream>
#include <algorithm>

using namespace std;

int students[20];

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int n = 0, num = 0, result = 0;
	cin >> n;

	for (int tc = 0; tc < n; tc++)
	{
		cin >> num;
		result = 0;
		for (int i = 0; i < 20; i++)
		{
			cin >> students[i];
		}

		for (int i = 0; i < 20; i++)
		{
			for (int j = i; j < 20; j++)
			{
				if (students[i] > students[j])
				{
					result += 1;
				}
			}
		}
			cout << num << ' ' << result << '\n';
	}


	return 0;
}