#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,K,now=1;
int dfs(int remain, int K, int now){
    if (remain==0) return now;
    return min(dfs(remain-1, K, now*2),dfs(remain-1, K, now+K));
}

int main(){
    cin >> N;
    cin >> K;
    cout <<dfs(N,K,1)<< endl;
    return 0;
}
