#include <string>
#include <vector>

using namespace std;

string solution(string s) {
   string answer = "";
   string str;
   int cnt = 0;

   bool isFirst = true;
   for (int i = 0; i < s.size(); i++)
   {
       if (s[i] == ' ')
       {
           isFirst = true;
       }else if(isFirst && s[i] >= 'a' && s[i] <= 'z'){
           isFirst = false;
           s[i] -= ('a' - 'A');
       }else if(!isFirst && s[i] >= 'A' && s[i] <= 'Z')
       {
           isFirst = false;
           s[i] += ('a' - 'A');
       }
       else {
           isFirst = false;
       }
       answer += s[i];
   }

   return answer;
}