#include <vector>
#include <iostream>
#include <map>

using namespace std;


bool check(const map<string, int>& mm1, const map<int, string>& mm2, const vector<int>& number)
{
    bool result = true;
    for (int i = 0; i < mm2.size(); i++)
    {
        if (mm1.at(mm2.at(i)) <  number[i])
        {    
            result = false;
            break;
        }
    }
    return result;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> m1;
    map<int, string> m2;
    for (int i = 0; i < want.size(); i++)
    {
        m1[want[i]] = 0;
        m2[i] = want[i];
    }


    for (int i = 0; i < discount.size(); i++)
    {
        m1[discount[i]]++;
        
        if (i >= 10)
        {
            m1[discount[i - 10]]--;
            if (check(m1, m2, number))
            {
                answer++;
               
            }
        }
        else if (i == 9) {
            if (check(m1, m2, number))
            {
                answer++;

            }
        }
    }
    return answer;
}