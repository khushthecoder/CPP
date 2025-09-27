def printbase(n):
    if n==0:
        return 0
    printbase(n//2)
    print(n%2,end="")
t=int(input())
for _ in range(t):
    n=int(input())
    if n==0:
        print(0)
    else:
        printbase(n)
        print()