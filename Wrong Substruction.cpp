#include <iostream>
using namespace std;

void wrongSubstruction(int num, int k) {
    for (int i = 0; i < k; i++) {
        if (num % 10 != 0) {
            num = num - 1;
        } else {
            num = num / 10;

        }
    }
    cout << num;
}
int main() {
    int numValue;
    int kValue;
  cin>>numValue>>kValue;
  wrongSubstruction(numValue, kValue);
  return 0;
}
