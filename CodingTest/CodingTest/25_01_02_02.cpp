// น้มุ 4134
// https://www.acmicpc.net/problem/4134

#include <iostream>

using namespace std;

bool isPrime(long long num)
{
    if (num <= 1)
        return false;

    if (num == 2 || num == 3)
        return true;

    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (long long i = 5; i * i <= num; ++i)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

int main()
{
	long long N = 0, n = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> n;
		while (!isPrime(n))
		{
            n++;
		}
        cout << n << '\n';
	}

	return 0;
}