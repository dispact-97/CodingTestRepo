// 프로그래머스
// https://school.programmers.co.kr/learn/courses/30/lessons/340212

#include <stdio.h>
#include <iostream>
#include <stdbool.h>
#include <stdlib.h>

int solution(int diffs[], size_t diffs_len, int times[], size_t times_len, long long limit) {
    int answer = 0;
    int temp = 0;

    while (answer < limit)
    {
        for (int i = 0; i <= diffs_len; i++)
        {
            int level = i + 1;
            if (diffs[i] <= level)
            {
                temp += times[i];
            }
            else
            {

            }
        }

        answer = temp;
    }

    return answer;
}

int main()
{
    int diffs[3];
    int times[3];
    int limit;


    return 0;
}