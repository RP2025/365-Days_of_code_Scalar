int Solution::isPalindrome(string A) {
    int left = 0, right = A.size() - 1;
    while (left < right) {
        while (left < right && !isalnum(A[left])) {  // skip non-alphanumeric characters
            left++;
        }
        while (left < right && !isalnum(A[right])) {  // skip non-alphanumeric characters
            right--;
        }
        if (tolower(A[left]) != tolower(A[right])) {  // compare the lowercase characters
            return false;
        }
        left++;
        right--;
    }
    return true;
}
