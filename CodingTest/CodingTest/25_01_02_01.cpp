// 백준 2485
// https://www.acmicpc.net/problem/2485

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int tree[100000];
int tree_distance[100000];

int Euclidean(int a, int b)
{
	int r = a % b;
	if (r == 0)
	{
		return b;
	}
	else
	{
		return Euclidean(b, r);
	}
}

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int n = 0;		// 가로수의 개수
	int gcd = 0;	// 가로수 간격들의 최대공약수
	int count = 0;	// 가로수를 추가로 몇번 심어야하는지
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tree[i];
	}

	// 가로수들을 거리 순으로 정렬
	sort(tree, tree + n);

	// 가로수들 사이의 간격 구하기
	for (int i = 0; i < n; i++)
	{
		tree_distance[i] = tree[i + 1] - tree[i];
	}

	// 가로수들의 간격의 최대공약수 구하기
	gcd = tree_distance[0];
	for (int i = 1; i < n - 1; i++)
	{
		gcd = Euclidean(gcd, tree_distance[i]);
	}

	//가로수들 사이의 간격을 최대공약수로 나누어
	// 몇개를 추가로 심어야 하는지 구하기
	for (int i = 0; i < n - 1; i++)
	{
		// 양끝에 이미 하나씩 심어져 있으므로 -1
		count += (tree_distance[i] / gcd) - 1;
	}

	cout << count;


	return 0;
}