public class Solution {
    public int solve(int A) {
        int ans = (A/6)*2;
        A = A%6;
        if(A==1){
            return ans+1;
        }
        if(A==0){
            return ans;
        }
      return ans+2;
    }
}
