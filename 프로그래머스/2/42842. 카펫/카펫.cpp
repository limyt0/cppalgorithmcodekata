#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int hap = brown + yellow;
    int sq = sqrtf(hap);
    int a = 1;
    int b = 1;
    for (int i = sq; i > 0; i--)
    {
        if(hap % i == 0)
        {
            a = i;
            b = hap / a;
            if(((a - 1) + (b - 1)) * 2 == brown) break;
        }
    }
    if (a > b)
    {
        answer.push_back(a);
        answer.push_back(b);
    }
    else {
        answer.push_back(b);
        answer.push_back(a);
    }
    return answer;
}