def even(i):
    if i>=n:
        return
    even(i+2)
    print(li[i],end=" ")
n=int(input())
li=list(map(int,input().split()))
even(0)