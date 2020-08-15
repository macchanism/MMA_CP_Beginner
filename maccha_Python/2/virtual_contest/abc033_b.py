# B - 町の合併
# https://atcoder.jp/contests/abc033/tasks/abc033_b
n = int(input())
s = [""] * n
p = [0] * n
p_sum = 0
for i in range(n):
    s[i], p_s = map(str, input().split())
    p[i] = int(p_s)
    p_sum += p[i]

new_name = "atcoder"
for i in range(n):
    if p_sum // 2 < p[i]:
        new_name = s[i]
        break

print(new_name)
