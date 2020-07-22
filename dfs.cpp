#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int a[15][15];
int b[15];
int ans;
void dfs(int depth) {
    if(depth == n) {
        int sum = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < i; ++j){
                if(b[i] == b[j]) sum += a[i][j];
            }
        }
        ans = max(ans, sum);
        return;
    }
    for(int i = 0; i < 3; ++i) {
        b[depth] = i;
        dfs(depth+1);
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            cin >> a[i][j];
            a[j][i] = a[i][j];
        }
    }
    ans = -2e9;
    dfs(0);
    cout << ans << endl;
    return 0;
}
