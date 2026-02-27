#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zeros = 0;
    int count = 0;
    for (int i = 0; i < lottos.size(); i++) 
    {
        if (lottos[i] == 0)
        {
            zeros++;
        }
        else {
            for (int j = 0; j < win_nums.size(); j++)
            {
                if (lottos[i] == win_nums[j])
                {
                    count++;
                }
            }
        }
        
    }
    int sunwi1 = (7 - (count + zeros));
    int sunwi2 = (7 - count);
    if (sunwi1 > 6) sunwi1 = 6;
    if (sunwi2 > 6) sunwi2 = 6;
    answer.push_back(sunwi1);
    answer.push_back(sunwi2);
    return answer;
}