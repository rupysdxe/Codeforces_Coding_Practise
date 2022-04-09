
# Question : https://codeforces.com/contest/1646/problem/B

t = int(input())
# TEST CASE
for i in range(t):
    n = int(input())
    numbers = [int(item) for item in input().split()]
    # Operations Here
    numbers.sort()
    flag = False
    start = 0
    startTwo = 1
    last = len(numbers) - 1
    sumBlue = numbers[start] + numbers[startTwo]
    sumRed = numbers[last]
    while start < last and startTwo < last:
        if sumRed > sumBlue:
            flag = True
            break
        else:
            startTwo += 1
            sumBlue += numbers[startTwo]
            last -= 1
            sumRed += numbers[last]
    if flag:
        print("YES")
    else:
        print("NO")

