#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long a1 = a;
    long long b1 = b;
    if (a1 < b1) {
        answer = ((a1 + b1)* (b1 - a1 + 1)) / 2;
    }
    else {
        answer = ((a1 + b1)* (a1 - b1 + 1)) / 2;
    }

    return answer;
}