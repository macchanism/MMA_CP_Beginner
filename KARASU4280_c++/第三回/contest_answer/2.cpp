#include<bits/stdc++.h>
using namespace std;

int main (void){
  int a,b,c,ans;

  cin >> a >> b >> c;

  if(b/a > c){
    ans = c;
  }else{
    ans = b/a;
  }
  cout << ans << "\n";
  return 0;
}

/*高橋君が満足出来るか出来ないかで場合分けするとうまくいきます。 */
