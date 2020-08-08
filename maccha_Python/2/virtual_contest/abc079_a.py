# A - Good Integer
# https://atcoder.jp/contests/abc079/tasks/abc079_a
s = input()
if s[0] == s[1] and s[1] == s[2]:
    print("Yes")
elif s[1] == s[2] and s[2] == s[3]:
    print("Yes")
else:
    print("No")
