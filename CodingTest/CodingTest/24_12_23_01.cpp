// น้มุ 2164
// https://www.acmicpc.net/problem/2164

#include <iostream>
#include <queue>

using namespace std;

// 2 3 4 5
// 3 4 5 2
// 4 
int main()
{
	int N = 0;
	cin >> N;

	bool flag = true;

	queue<int> q;

	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	while(q.size() > 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front();

	return 0;
}