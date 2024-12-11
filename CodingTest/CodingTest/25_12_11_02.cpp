// ���� 11578
// https://www.acmicpc.net/problem/11478

#include <iostream>
#include <set>
#include <string>
using namespace std;

set<string> M; // set �ڷᱸ��.
string S; // �Է¹��� ���ڿ�.

int main()
{

	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	cin >> S;

	int i, j, l = S.length(); // �ݺ��� ������ �Ź� length()�� �����ϴ� �ͺ��� �� ���� �������.

	for (i = 0; i < l; i++) // 0��° �ε������� ������ �ݺ�.
	{
		for (j = i; j < l; j++) // ����(i)�ε������� ������ �ݺ�.
		{
			M.insert(S.substr(i, j - i + 1)); 
			// j-i+1�� �ϸ� ����(i)���� ��(l)������ ���̰� �ȴ�.
		}
	}

	cout << M.size(); // �������� set�� ����ִ� ����� ������ ����ϸ� �ϼ�~
	return 0;

}
