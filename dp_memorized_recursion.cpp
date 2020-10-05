#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define INF (long long) 1e9

int N,COST;
vector<int> H,moving_cost_from_here;

// Return least moving cost from here to goal.
int dfs(int pos){
    if (pos >=N) return INF; // case out of range array or last element.
    if (pos==N-1) return 0; // case last position, finish calculation.
    if (moving_cost_from_here[pos]!=-1) return moving_cost_from_here[pos]; // case calculated moving_cost_to_here
    // case on the way to calculating moving_cost_to_here
    int step1_moving_cost = dfs(pos+1)+abs(H[pos+1]-H[pos]);
    int step2_moving_cost = dfs(pos+2)+abs(H[pos+2]-H[pos]);
    return moving_cost_from_here[pos]=min(step1_moving_cost,step2_moving_cost);
}


int main(){

    // input stdin one liner
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> COST;
        H.__emplace_back(COST);
        moving_cost_from_here.__emplace_back(-1);// initialize vector array by -1.
    }

    printf("%d\n",dfs(0));
    return 0;

    // Dynamic Planning method is like a Recurrence formula.
    // DFS is like a recursive loop process.
    // about 1e9 https://teratail.com/questions/93585
}





