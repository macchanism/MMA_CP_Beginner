#include<bits/stdc++.h>
using namespace std;

int main (void){
  int a,b,c,x,d,ans = 0;
  cin >> a >> b >> c >> x;

  for(int i = 0;i <= a;i++){
    for(int j = 0;j <= b;j++){
      for(int k = 0;k <= c;k++){
        d = 500 * i + 100 * j + 50 * k;
        if(x == d){
          ans++;
        }
      }
    }
  }

  cout << ans << "\n";
  return 0;
 }
