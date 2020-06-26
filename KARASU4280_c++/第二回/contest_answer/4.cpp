#include<bits/stdc++.h>
using namespace std;

int main (void){
  int a[110];
  int n;
  cin >> n;

  for(int i = 0;i < n;i++){
    cin >> a[i];
  }
  for(int i = 0;i < n;i++){
    if(a[i] % 2 == 0){
      if(a[i] % 3 != 0 && a[i] % 5 != 0){
        cout << "DENIED\n";
        return 0;
      }
    }
  }
  cout << "APPROVED\n";
  return 0;
  /*
    条件は[書類に書かれている整数のうち、偶数であるものは全て、3または 5で割り切れる。]ことです。
    なので、奇数は関係ないので無視します。
    そして、偶数が3またが5で割り切れる事が条件なので、3でも5でも割り切れない数があればその人は許可されません。
    実装するとこのようになります。
  */
}
