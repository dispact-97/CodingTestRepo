// 백준 1620
// https://www.acmicpc.net/problem/1620

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> dic; // 문자열을 키로, 정수를 값으로 저장하는 map
string name[100001];  // 인덱스 기반으로 문자열을 저장하는 배열
string str;           // 입력받을 문자열

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int n = 0;
	int m = 0;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> str;
		dic.insert({ str, i }); // map에 포켓몬 이름과 번호 저장
		name[i] = str;        // 배열에 인덱스 번호를 키로 포켓몬 이름 저장
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (isdigit(str[0]))	// 입력이 숫자로 시작하는지 판단

		{
			cout << name[stoi(str)] << "\n";	
			// 숫자인 경우, 문자열을 정수로 변환 후 배열에서 해당 번호의 포켓몬 이름 출력

		}
		else
		{
			cout << dic.find(str)->second << "\n";
			// 문자열인 경우, map에서 해당 이름의 포켓몬 번호를 찾아 출력
		}
	}

	return 0;
}