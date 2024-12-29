// 백준 25192
// https://www.acmicpc.net/problem/25192

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int N = 0, count = 0;
	set<string> st;
	cin >> N;

	while (N--)
	{
		string temp;
		cin >> temp;

		if (temp == "ENTER")
		{
			count += st.size();
			st.clear();
		}
		else
		{
			st.insert(temp);
		}
	}

	count += st.size();

	cout << count;

	return 0;
}