#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int prev1 = 1;
    int prev2 = 0;
    for (int i = 2; i <= n; i++)
    {
        answer = (prev1 + prev2) % 1234567;
        prev2 = prev1;
        prev1 = answer;
    }

    if (n == 0) answer = 0;
    if (n == 1) answer = 1;
    return answer;
}