#include<bits/stdc++.h>
using namespace std;

int main (void){
  int k,ans;
  cin >> k;

  if(k % 2 == 1){
    ans = (k - 1) / 2 * (k + 1) / 2;
  }else{
    ans = k/2 * k/2;
  }
  cout << ans << "\n";
  return 0;
}

/*奇数と偶数の組を1つずつ選ぶので、奇数の組の数をa偶数の組の数をbとすると、答えはa*bとなる。 */
