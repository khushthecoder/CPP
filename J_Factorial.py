def factorial(n):
    if n==0:
        return 1
    bad=n*factorial(n-1)
    return bad
n=int(input())
print(factorial(n))