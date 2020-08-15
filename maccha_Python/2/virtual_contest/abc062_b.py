# B - Picture Frame
# https://atcoder.jp/contests/abc062/tasks/abc062_b
h, w = map(int, input().split())
print("#" * (w + 2))
for _ in range(h):
    print("#", end = "")
    print(input(), end = "")
    print("#")
print("#" * (w + 2))
