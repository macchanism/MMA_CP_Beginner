# B - Papers, Please
# https://atcoder.jp/contests/abc155/tasks/abc155_b
n = input()
a = list(map(int, input().split(" ")))
s = "APPROVED"
for i in a:
  if i % 2 == 0 and (i % 3 != 0 and i % 5 != 0):
    s = "DENIED"
    break
print(s)
