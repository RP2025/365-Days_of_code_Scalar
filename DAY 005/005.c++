int Solution::uniquePathsWithObstacles(vector<vector<int> > &A){
    int m=A.size();
    int n=A[0].size();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    if(A[m-1][n-1] == 1)return 0;
    dp[m-1][n-1]=1;
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(!(i == m-1 && j == n-1) && A[i][j] != 1){
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
        }
    }
    return dp[0][0];
}
