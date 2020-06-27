#include<bits/stdc++.h>
using namespace std;

int main (void){
  string n;
  cin >> n;
  if(n[0] == n[1] && n[1] == n[2] || n[1] == n[2] && n[2] == n[3]){
    cout << "Yes\n";
  }else{
    cout << "No\n";
  }
  return 0;
  /*
  整数を数値ではなく数字として受け取ったので文字列型を使いました。
  &&が'かつ'、||が'または'をあらわすので、連続する三桁が等しいことを上記で実装しました。
  */
}
