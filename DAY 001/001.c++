vector<int> Solution::solve(vector<int> &A) {
    vector<int> leaders;
    int N = A.size();
    int maxRight = A[N-1];
    leaders.push_back(maxRight);
    for (int i = N-2; i >= 0; i--) {
        if (A[i] > maxRight) {
            maxRight = A[i];
            leaders.push_back(maxRight);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}
