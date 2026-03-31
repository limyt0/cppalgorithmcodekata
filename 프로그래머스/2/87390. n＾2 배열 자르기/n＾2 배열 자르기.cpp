#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for (long long i = left; i <= right; i++)
    {
        int b = 0;
        int a = 0;
        long long c = i + 1;
        if (c % n == 0) { 
            b = n;
            a = (c / n);
        }
        else 
        { 
            b = c % n; 
            a = (c / n)+1;
        }

        if (a >= b) answer.push_back(a);
        else answer.push_back(b);
    }
    return answer;
}