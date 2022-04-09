#Question :https://codeforces.com/contest/1647/problem/A

import math

t = int(input())
while t > 0:
    x = int(input())
    if x % 3 == 0:
        print("21" * math.floor(x / 3))
    elif x % 3 == 1:
        print("12" * math.floor(x / 3) + "1")
    elif x % 3 == 2:
        print("21" * (math.floor(x / 3)) + "2")
    t = t - 1