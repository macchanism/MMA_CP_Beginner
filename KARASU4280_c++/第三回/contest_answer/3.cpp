#include<bits/stdc++.h>
using namespace std;

int main (void){
  int k,s,ans = 0;
  cin >> k >> s;

  for(int i = 0;i <= k;i++){
    for(int j = 0;j <= k;j++){
      if(s-i-j <= k && s-i-j >=0){
        ans++;
      }
    }
  }

  cout << ans << "\n";
  return 0;
}

/*
この問題も値によってはTLEとなるので、ループ構文を減らす工夫が必要です。
二つの要素を足し合わせた値をsから引いた値が0以上k以下である組み合わせを数え上げれば良いです。
*/
