#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    
    while(n > 0){
        int a = n / 10;
        int k = n % 10;
        answer += k;
        n = a;
    }

    return answer;
}