#include<bits/stdc++.h>
using namespace std;

int main (void){
  string s;
  cin >> s;

  for(int i = 0;i < 3;i++){
    cout << s[i];
  }
  cout << '\n';
  return 0;
  /*
  適当に連続する3文字を出力すれば良いです。
  しかし、問題文の制約を見ると名前が3文字しかない場合もあります。
  なので、名前の頭から3文字をあだ名として出力する方がよいです。
  また、string型は文字列型なので文字数の指定は必要ありません。
  */
}
