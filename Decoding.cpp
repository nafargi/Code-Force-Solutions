#include <bits/stdc++.h>
 jjj
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main(int argc, char *argv[]) {
    int n;
    string str, ans = "";
    cin >> n >> str;
    if(n%2 == 1) {
        ans += str[0];
        str = str.substr(1, n-1);
    }
    int state = 0;
    while(str.length() > 0) {
        if(state == 0) {
            ans = str[0] + ans;
            state = 1;
        } else {
            ans = ans + str[0];
            state = 0;
        }
        str = str.substr(1, str.length() - 1);
    }
    cout << ans;
    return 0;
}
