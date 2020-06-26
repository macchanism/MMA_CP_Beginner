#include<bits/stdc++.h>
using namespace std;

int main (void){
  int n,h,max = 0,ans = 0;
  cin >> n;

  for(int i = 0;i < n;i++){
    cin >> h;
    if(h >= max){
      max = h;
      ans++;
    }
  }

  cout << ans << '\n';
  return 0;
  /*
  すなわち、後の山の高さが前の山以上であれば海が見えると言うことです。
  なので、入力された順に高さを比較して今まで入力された山の最高の高さよりも今入力された山の高さが同じもしくは高ければ海が見えます。
  そして、海が見える山の高さを数えていけば良いです。
  */
}
