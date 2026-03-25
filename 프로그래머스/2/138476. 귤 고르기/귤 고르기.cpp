#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(int k, vector<int> tangerine) {
int answer = 0;
sort(tangerine.begin(), tangerine.end());
vector<int> cnts;
int cnt = 1;
for (int i = 1; i < tangerine.size(); i++)
{
    if (tangerine[i] != tangerine[i - 1])
    {
        cnts.push_back(cnt);
        cnt = 1;
    }else{
        cnt++;
    }
}
cnts.push_back(cnt);
sort(cnts.begin(), cnts.end());

while (!cnts.empty())
{
    int tmp = cnts.back();
    k -= tmp;
    answer++;
    cnts.pop_back();
    if (k <= 0) break;
}
if (k > 0) answer = 0;
return answer;
}