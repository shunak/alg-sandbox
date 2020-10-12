#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int N,HAPPINESS,happiness_value=0,first_value=0;

    // input stdin one liner
    cin >> N;
    vector<int> A,B,C,PAIR;
    for (int i=0; i<N; i++) {
        cin >> HAPPINESS;
        A.__emplace_back(HAPPINESS);
    }
    for (int i=0; i<N; i++) {
        cin >> HAPPINESS;
        B.__emplace_back(HAPPINESS);
    }
    for (int i=0; i<N; i++) {
        cin >> HAPPINESS;
        C.__emplace_back(HAPPINESS);
    }

    /* first_value=max(A[0],B[0],C[0]); */

    /* for(int i=1; i<N; i++){ */

    /* } */


    /* for (int i=2; i<N;i++) { */
    /*     int step1_move_cost = moving_cost_to_here[i-1] + abs(H[i]-H[i-1]); // moving cost of before 1cell */
    /*     int step2_move_cost = moving_cost_to_here[i-2] + abs(H[i]-H[i-2]); // moving cost of before 2cells */
    /*     moving_cost_to_here[i] = min(step1_move_cost,step2_move_cost); // least moving cost value until here */
    /* } */

    /* printf("%d\n",moving_cost_to_here[N-1]); */
    puts("-----");
    for(int i = 0; i<N; i++){
        printf("%d\n",A[i]);
    }
    for(int i = 0; i<N; i++){
        printf("%d\n",B[i]);
    }
    for(int i = 0; i<N; i++){
        printf("%d\n",C[i]);
    }
    return 0;
    // Dynamic Planning method is like a Recurrence formula.

}





