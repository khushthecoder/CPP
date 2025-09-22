t=int(input())
for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    if not arr:
        print(0)
    count=1
    arr1=[]
    for i in range(1,n):
        if arr[i]==arr[i-1]:
            count+=1
        else:
            arr1.append(count)
            count=1
    arr1.append(count)
    ans = 0
    maxarr1 = max(arr1)
    for f in range(1, maxarr1 + 1):
        cnt = sum(1 for x in arr1 if x >= f)   
        ans = max(ans, cnt * f)
    print(ans)