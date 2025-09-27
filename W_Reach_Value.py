def reachvalue(curr,n):
    if curr>n:
        return False
    if curr==n:
        return True
    return reachvalue(curr*10,n) or reachvalue(curr*20,n)
t=int(input())
curr=1
for _ in range(t):
    n=int(input())
    reachvalue(curr,n)
    if reachvalue(curr,n):
        print("YES")
    else:
        print("NO")