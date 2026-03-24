#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    vector<int> arr;
    
    arr.push_back(1);
    arr.push_back(2);

    for (int i = 2; i < n; i++)
    {
        long long temp = (arr[i - 1] + arr[i - 2]) % 1234567;
        
        arr.push_back(temp);
    }

    if (n == 1) answer = 1;
    if (n == 2) answer = 2;
    if (n > 2 ) answer = arr.back();
    
    return answer;
}