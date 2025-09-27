import sys
sys.setrecursionlimit(200000)
def ispalindrome(i,j,li,n):
    if n==1:
        return "YES"
    if i >= j:   
        return True
    if li[i]!=li[j]:
        return False
    return ispalindrome(i+1,j-1,li,n)
n=int(input())
li=list(map(int,input().split()))
if ispalindrome(0,n-1,li,n):
    print("YES")
else:
    print("NO")