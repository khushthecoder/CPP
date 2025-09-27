# def printdigit(n):
#     if n==0:
#         return
#     printdigit(n//10)
#     print(n%10,end=" ")
# t=int(input())
# for _ in range(t):
#     n=int(input())
#     printdigit(n)
#     print()
def printdigit(s):
    for ch in s:
        print(ch, end=" ")
        
t = int(input())
for _ in range(t):
    s = input()  # read as string to preserve leading zeros
    printdigit(s)
    print()
