#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int tmp=0,N,HAPPINESS,happiness_value=0,first_value=0;

    // input stdin one liner
    cin >> N;
    vector<int> A,B,C,PAIR,sel;
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

    first_value = A[0];

    if(first_value<B[0]){
        first_value=B[0];
    }
    if(first_value<C[0]){
        first_value=C[0];
    }
    happiness_value+=first_value;

    if(first_value!=A[0]){
        PAIR.__emplace_back(A[1]);
    }
    if(first_value!=B[0]){
        PAIR.__emplace_back(B[1]);
    }
    if(first_value!=C[0]){
        PAIR.__emplace_back(C[1]);
    }

    tmp=max(PAIR[0],PAIR[1]);
    happiness_value+=tmp;

    PAIR.erase(PAIR.begin(),PAIR.end());

    if(tmp!=A[1]){
        PAIR.__emplace_back(A[2]);
    }
    if(tmp!=B[1]){
        PAIR.__emplace_back(B[2]);
    }
    if(tmp!=C[1]){
        PAIR.__emplace_back(C[2]);
    }

    tmp=max(PAIR[0],PAIR[1]);
    happiness_value+=tmp;

    PAIR.erase(PAIR.begin(),PAIR.end());

    printf("%d\n",happiness_value);

    /* printf("%d\n",moving_cost_to_here[N-1]); */
    /* puts("-----"); */
    /* for(int i = 0; i<N; i++){ */
    /*     printf("%d\n",A[i]); */
    /* } */
    /* for(int i = 0; i<N; i++){ */
    /*     printf("%d\n",B[i]); */
    /* } */
    /* for(int i = 0; i<N; i++){ */
    /*     printf("%d\n",C[i]); */
    /* } */
    return 0;
    // Dynamic Planning method is like a Recurrence formula.

}





