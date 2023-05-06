int Solution::lis(const vector<int> &A) {
    
    int n = A.size();
    vector<int> dp(n, 1);
    int max_len = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (A[j] < A[i] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
            }
        }
        max_len = max(max_len, dp[i]);
    }
    return max_len;


    
}
