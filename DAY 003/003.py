class Solution:
    # @param A : tuple of integers
    # @return an integer
     def majorityElement(self, A):
        d={}
        for i in range (len(A)):
            if A[i] not in d:
                d[A[i]]=1
            else:
                d[A[i]]+=1
        for i,j in d.items():
            if j >len(A)//2:
                return i
