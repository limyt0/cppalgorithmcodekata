#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (n>=a)
    {
        int tmp = (n / a)*b;
        int na = n % a;
        n = tmp + na;
        answer += tmp;
    }
    return answer;
}