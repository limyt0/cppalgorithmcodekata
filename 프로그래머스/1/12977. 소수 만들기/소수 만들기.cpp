#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    bool answer = true;
    for (int i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            answer = false;
            break;
        }
    }
    return answer;
}

int solution(vector<int> nums) {
    int answer = 0;

 int size = nums.size();
 for (int i = 0; i < size-2; i++)
 {
     for (int j = i + 1; j < size - 1; j++)
     {
         for (int k = j + 1; k < size; k++)
         {
             int su = nums[i] + nums[j] + nums[k];
             if (isPrime(su))
             {
                 answer++;
             }
         }
     }
 }

 return answer;
}