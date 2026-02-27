#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    sort(reserve.begin(), reserve.end());
    bool check[31] = {true, };
    for (int i = 1; i <= n; i++) check[i] = true;
    for (int i = 0; i < lost.size(); i++) check[lost[i]] = false;
    for (int i = 0; i < reserve.size(); i++)
    {
        if (!check[reserve[i]])check[reserve[i]] = true;
        else {
            if( 1< reserve[i] && !check[reserve[i]-1])
            {
                bool tmp = true;
                for (int j = 0; j < lost.size(); j++)
                {
                    if (lost[j] == reserve[i])
                    {
                        tmp = false;
                        break;
                    }
                }
                if(tmp) check[reserve[i]-1] = true;
            }
            else if (reserve[i] < n && !check[reserve[i]+1])
            {
                bool tmp = true;
                for (int j = 0; j < lost.size(); j++)
                {
                    if (lost[j] == reserve[i])
                    {
                        tmp = false;
                        break;
                    }
                }
                if(tmp) check[reserve[i]+1] = true;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (check[i]) { 
            answer++;
        }
    }
    return answer;
}