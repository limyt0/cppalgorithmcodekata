#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    while (n > 3)
    {
        v.push_back(n % 3);
        n /= 3;
    }
    if (n != 3)
    {
        v.push_back(n);
    }
    else {
        v.push_back(n % 3);
        n /= 3;
        v.push_back(n);
    }
    int pow = 1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        answer += v[i] * pow;
        pow *= 3;
    }
    return answer;
}