# Question: https://codeforces.com/contest/1657/problem/B
t = int(input())

while t > 0:
    n, B, x, y = map(int, input().split())
    totalSum = 0
    temp = 0
    while n > 0:
        optOne = temp + x
        optTwo = temp - y
        if max(optTwo, optOne) > B:
            totalSum += min(optOne, optTwo)
            temp = min(optOne, optTwo)
        else:
            totalSum += max(optOne, optTwo)
            temp = max(optOne, optTwo)
        n = n - 1
    print(totalSum)
    t = t - 1
