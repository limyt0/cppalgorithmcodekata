#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = ((left+right)*(right-left+1))/2;
    
    for(int i =1;i<=31;i++){
          if(i*i >= left && i*i <= right){
              answer -= (i*i)*2;
          }  
    }
    return answer;
}