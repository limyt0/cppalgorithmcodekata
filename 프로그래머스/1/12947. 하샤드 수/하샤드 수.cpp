#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
     int num = x;
     int sum = 0;
     while (num >0) {
         int temp = num % 10;
         sum += temp;
         num /= 10;
     }

     bool answer = false;
     if (x % sum == 0) {
         answer = true;
     }
     return answer;
}