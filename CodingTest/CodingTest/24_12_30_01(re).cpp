// ���� 2108
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
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int N = 0;
	int res1 = 0;	// ��� ���
	int res2 = 0;	// �߾Ӱ�
	int res3 = 0;	// �ֺ�
	int res4 = 0;	// ����
	vector<int> vec;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num = 0;
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	// ��� ���
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

	// �߾� ��
	res2 = vec[vec.size() / 2];
	cout << res2 << '\n';	// Ȧ�� �϶��� ����

	// �ֺ�

	cout << "NULL" << '\n';

	// ����
	res4 = *(vec.end() - 1) - *vec.begin();
	cout << res4 << '\n';

	return 0;
}