# 入力された情報を代入するには、"input"
a_s = input()
# int型に変換するには、"int"
a = int(a_s)

bc = input()

# スペース(" ")で文字(str型)を区切り、別々の変数に格納する
b_s, c_s = bc.split()

b = int(b_s)
c = int(c_s)

# input()で格納された情報はstr型
s = input()

# 出力には、"print"
print("{} {}".format(a + b + c, s))
