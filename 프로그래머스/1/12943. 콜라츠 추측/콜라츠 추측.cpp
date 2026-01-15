#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = -1;
    long long k = num;
    for (int i = 0; i < 500; i++) {
        if (k == 1) {
            answer = i;
            break;
        }
        else if (k % 2 == 0) {
            k /= 2;
        }
        else {
            k = (k * 3) + 1;
        }

    }
    return answer;
}