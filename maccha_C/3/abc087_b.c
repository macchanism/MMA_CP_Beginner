#include <stdio.h>

int a, b, c, x;

int solve(){
  int ans = 0;
  for(int i = 0; i <= a; i++){
    for(int j = 0; j <= b; j++){
      for(int k = 0; k <= c; k++){
        int tmp = 500 * i + 100 * j + 50 * k;
        if(tmp == x) ans++;
      }
    }
  }
  return ans;
}

int main(){
  scanf("%d%d%d%d", &a, &b, &c, &x);
  printf("%d\n", solve());
  return 0;
}
