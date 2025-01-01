// 백준 1735
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
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int a1 = 0, a2 = 0;
	int b1 = 0, b2 = 0;

	cin >> a1 >> a2;	// 첫번째 분수 입력
	cin >> b1 >> b2;	// 두번째 분수 입력

	int temp = a2;
	int temp2 = b2;

	int numerator = a1 * b2 + b1 * a2;	// 새 분자
	int denominator = a2 * b2;			// 새 분모

	// 최대 공약수 계산
	int gcd = gcdFC(numerator, denominator);

	numerator /= gcd;
	denominator /= gcd;

	cout << numerator << " " << denominator << '\n';

	return 0;
}