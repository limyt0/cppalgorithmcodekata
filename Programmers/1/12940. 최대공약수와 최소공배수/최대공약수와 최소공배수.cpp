#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int n1, n2;
    int min, max;
    if (n < m) {
        n1 = n; n2 = m;
    }
    else {
        n1 = m; n2 = n;
    }
    for (int i = 1; i <= n1; i++)
    {
       if (n2 % i == 0 && n1 % i == 0) max = i;
        
    }
    min = (n2 / max) * n1;
    answer.push_back(max);
    answer.push_back(min);
    return answer;
}