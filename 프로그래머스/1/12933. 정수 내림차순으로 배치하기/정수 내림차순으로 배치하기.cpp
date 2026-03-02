#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int cnt = 0;
    vector<int> nums;
    while (n>0) {
        int temp = n % 10;
        nums.push_back(temp);
        n /= 10;
        cnt++;
    }
    sort(nums.begin(), nums.end());
    for (int i = cnt-1; i > -1; i--) {
        answer += nums[i];
        if (i != 0) {
            answer *= 10;
        }
    }
    return answer;
}

bool compare(int a, int b) {
    return a < b;
}