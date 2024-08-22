#include<bits/stdc++.h>
using namespace std;

void startPos(int *a, int *b, int n, int m, int arr[][m]){

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(arr[i][j] == 1){
        *a = i;
        *b = j;
        return;
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin>>n>>m;

  int arr[n][m];

  for(int i = 0; i< n; i++){
    for(int j = 0; j < m; j++){
      cin>>arr[i][j];
    }
  }
  int a, b;
  

  startPos(&a, &b, n, m, arr);
  int i = a;
  for(i = a; i < n; i++){
    if(arr[i][b] == 1){
      break;
    }
  }
  int j = b;
  for(j = b; j < m; j++){
    if(arr[a][j] == 1){
      break;
    }
  }
  a++;
  b++;
  cout<<(double)(a + i)/2<<" "<<(double)(b + j)/2<<endl;

  return 0;
}