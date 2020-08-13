#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(){
    ll A[200000],B[200000];
    int i, N;
    scanf("%d",&N);


    // input stdin one liner
    for (int i = 0; i < N; i++) {
        scanf("%lld",&A[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%lld",&B[i]);
    }



    // output
    for (int i = 0; i < N; i++) {
        printf("%lld ",A[i]);
    }
    puts("");
    for (int i = 0; i < N; i++) {
        printf("%lld ",B[i]);
    }
    puts("");


    return 0;

}





