// ���� 1735
// https://www.acmicpc.net/problem/1735

#include <iostream>

using namespace std;

int gcdFC(int a, int b)
{
	while (b!= 0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int a1 = 0, a2 = 0;
	int b1 = 0, b2 = 0;

	cin >> a1 >> a2;	// ù��° �м� �Է�
	cin >> b1 >> b2;	// �ι�° �м� �Է�

	int temp = a2;
	int temp2 = b2;

	int numerator = a1 * b2 + b1 * a2;	// �� ����
	int denominator = a2 * b2;			// �� �и�

	// �ִ� ����� ���
	int gcd = gcdFC(numerator, denominator);

	numerator /= gcd;
	denominator /= gcd;

	cout << numerator << " " << denominator << '\n';

	return 0;
}