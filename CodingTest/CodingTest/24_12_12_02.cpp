// น้มุ 13241
// https://www.acmicpc.net/problem/13241

#include <iostream>

using namespace std;

int cal(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return cal(b, a % b);
}

int main()
{
	long long int A, B,res;
	cin >> A>> B;

	res = cal(A,B);
	cout << A * B / res;

	return 0;
}