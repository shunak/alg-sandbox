#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int N,COST,min_cost=0;

    // input stdin one liner
    cin >> N;
    vector<int> H,moving_cost_to_here;
    for (int i=0; i<N; i++) {
        cin >> COST;
        H.__emplace_back(COST);
        moving_cost_to_here.__emplace_back(-1);// initialize vector array by -1.
    }
    /* moving_cost_until_here[i]: moving cost until i  */
    moving_cost_to_here[0] = 0;
    moving_cost_to_here[1] = abs(H[1]-H[0]);
    /* dp[i>=2]: 2patterns moving */
    for (int i=2; i<N;i++) {
        int step1_move_cost = moving_cost_to_here[i-1] + abs(H[i]-H[i-1]); // moving cost of before 1cell
        int step2_move_cost = moving_cost_to_here[i-2] + abs(H[i]-H[i-2]); // moving cost of before 2cells
        moving_cost_to_here[i] = min(step1_move_cost,step2_move_cost); // least moving cost value until here
    }

    printf("%d\n",moving_cost_to_here[N-1]);
    return 0;

    // Dynamic Planning method is like a Recurrence formula.

}





