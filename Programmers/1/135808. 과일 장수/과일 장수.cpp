#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end());
    int count = 0;
    for (int i = score.size()-1; i>=m-1; i-=m)
    {
        if (k >= score[i])
        {
            answer += score[i-m+1]*m;
        }
    }
    return answer;
}