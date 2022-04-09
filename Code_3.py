#Question : https://codeforces.com/contest/1657/problem/A

import math

t = int(input())

while t > 0:
    x, y = map(int, input().split())
    if x == 0 and y == 0:
        print(0)
    else:
        dis = math.pow(x, 2) + math.pow(y, 2)
        dis = math.sqrt(dis)

        if math.floor(dis) == dis:
            print(1)
        else:
            print(2)
    t = t - 1