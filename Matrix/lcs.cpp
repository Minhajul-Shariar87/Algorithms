#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    
    int m = s1.length();
    int n = s2.length();
    
    // DP table banabo
    int dp[m+1][n+1];
    
    // Initialize korbo
    for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            if(i == 0 || j == 0) {
                dp[i][j] = 0;
            }
            else if(s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    cout << "Length of LCS: " << dp[m][n] << endl;
    
    return 0;
}