def numberofways(s, e):
    if s>e:
        return 0
    if s==e:
        return 1
    return (numberofways(s+1, e)+numberofways(s+2, e) + numberofways(s+3, e))
s, e=map(int,input().split())
print(numberofways(s, e))