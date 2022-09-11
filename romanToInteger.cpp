#include <iostream>
using namespace std;
class Solution {
 public:
  int romanToInt(string s) {
    int result = 0;
    for (int i = 0; i < s.length(); i++) {
      if ((s[i] == 'i' || s[i] == 'I') &&
          !(s[i + 1] == 'v' || s[i + 1] == 'V' || s[i + 1] == 'X' ||
            s[i + 1] == 'x')) {
        result += 1;
      } else if ((s[i] == 'i' || s[i] == 'I') &&
                 (s[i + 1] == 'v' || s[i + 1] == 'V')) {
        result += 4;
        i++;
      } else if (s[i] == 'v' || s[i] == 'V') {
        result += 5;
      } else if ((s[i] == 'i' || s[i] == 'I') &&
                 (s[i + 1] == 'x' || s[i + 1] == 'X')) {
        result += 9;
        i++;
      }

      else if ((s[i] == 'x' || s[i] == 'X') &&
               !(s[i + 1] == 'l' || s[i + 1] == 'L' || s[i + 1] == 'c' ||
                 s[i + 1] == 'C')) {
        result += 10;
      } else if ((s[i] == 'x' || s[i] == 'X') &&
                 (s[i + 1] == 'l' || s[i + 1] == 'L')) {
        result += 40;
        i++;
      } else if ((s[i] == 'x' || s[i] == 'X') &&
                 (s[i + 1] == 'c' || s[i + 1] == 'C')) {
        result += 90;
        i++;
      } else if (s[i] == 'L' || s[i] == 'l') {
        result += 50;
      } else if ((s[i] == 'c' || s[i] == 'C') &&
                 !(s[i + 1] == 'd' || s[i + 1] == 'D' || s[i + 1] == 'm' ||
                   s[i + 1] == 'M')) {
        result += 100;
      } else if ((s[i] == 'c' || s[i] == 'C') &&
                 (s[i + 1] == 'd' || s[i + 1] == 'D')) {
        result += 400;
        i++;
      } else if ((s[i] == 'c' || s[i] == 'C') &&
                 (s[i + 1] == 'm' || s[i + 1] == 'M')) {
        result += 900;
        i++;
      } else if (s[i] == 'D' || s[i] == 'd') {
        result += 500;
      } else if (s[i] == 'M' || s[i] == 'm') {
        result += 1000;
      }
    }
    return result;
  }
};
int main(int argc, char const *argv[]) {
  Solution abc;
  string s = "MCMXCIV";
  int result = abc.romanToInt(s);
  cout << result << endl;
  return 0;
}
