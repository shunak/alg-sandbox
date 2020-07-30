#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int compatibility[15][15];
int group[15];
int happiness;
void dfs(int phase) {
    if(phase == n) {
        int sum = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < i; ++j){
                if(group[i] == group[j]) sum += compatibility[i][j];
            }
        }
        happiness = max(happiness, sum);
        return;
    }
    for(int i = 0; i < 3; ++i) {
        group[phase] = i;
        dfs(phase+1);
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            cin >> compatibility[i][j];
            compatibility[j][i] = compatibility[i][j];
        }
    }
    happiness = -2e9;
    dfs(0);
    cout << happiness << endl;
    return 0;
}
