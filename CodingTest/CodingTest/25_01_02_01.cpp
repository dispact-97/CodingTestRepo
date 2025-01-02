// ���� 2485
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
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int n = 0;		// ���μ��� ����
	int gcd = 0;	// ���μ� ���ݵ��� �ִ�����
	int count = 0;	// ���μ��� �߰��� ��� �ɾ���ϴ���
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tree[i];
	}

	// ���μ����� �Ÿ� ������ ����
	sort(tree, tree + n);

	// ���μ��� ������ ���� ���ϱ�
	for (int i = 0; i < n; i++)
	{
		tree_distance[i] = tree[i + 1] - tree[i];
	}

	// ���μ����� ������ �ִ����� ���ϱ�
	gcd = tree_distance[0];
	for (int i = 1; i < n - 1; i++)
	{
		gcd = Euclidean(gcd, tree_distance[i]);
	}

	//���μ��� ������ ������ �ִ������� ������
	// ��� �߰��� �ɾ�� �ϴ��� ���ϱ�
	for (int i = 0; i < n - 1; i++)
	{
		// �糡�� �̹� �ϳ��� �ɾ��� �����Ƿ� -1
		count += (tree_distance[i] / gcd) - 1;
	}

	cout << count;


	return 0;
}