#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 1;
    for (int i = 2; i <= number; i++)
    {
        int count = 2;
        for (int j = 2; j <= (i/2); j++)
        {
            if (i % j == 0) count++;
            if (count > limit)
            {
                count = power;
                break;
            }
        }
        answer += count;
    }
    return answer;
}