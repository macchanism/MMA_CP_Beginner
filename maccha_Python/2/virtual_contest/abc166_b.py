# B - Trick or Treat
# https://atcoder.jp/contests/abc166/tasks/abc166_b
n, k = map(int, input().split())
snk = [0] * n
for i in range(k):
    d = int(input())
    a = list(map(int, input().split()))
    for i in range(d):
        snk[a[i] - 1] += 1

c = 0
for i in snk:
    if i == 0:
        c += 1
print(c)
