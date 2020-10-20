#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int N,HAPPINESS,happiness_value=0,tmp=0;
vector<int> C1,C2,C3,A,B,C,PAIR;

void calc_happiness(int t_happiness,int i,vector<int> PAIR_){

    if(i<N-1){

        if(t_happiness!=A[i]){
            PAIR_.__emplace_back(A[i+1]);
        }
        if(t_happiness!=B[i]){
            PAIR_.__emplace_back(B[i+1]);
        }
        if(t_happiness!=C[i]){
            PAIR_.__emplace_back(C[i+1]);
        }

        t_happiness=max(PAIR_[0],PAIR_[1]);
        happiness_value+=t_happiness;
        PAIR_.erase(PAIR_.begin(),PAIR_.end());

        calc_happiness(t_happiness,++i,PAIR_);

    }

}

int main(){
    // input stdin one liner
    cin >> N;
    /* for (int i=0; i<N; i++) { */
    /*     cin >> HAPPINESS; */
    /*     A.__emplace_back(HAPPINESS); */
    /* } */
    /* for (int i=0; i<N; i++) { */
    /*     cin >> HAPPINESS; */
    /*     B.__emplace_back(HAPPINESS); */
    /* } */
    /* for (int i=0; i<N; i++) { */
    /*     cin >> HAPPINESS; */
    /*     C.__emplace_back(HAPPINESS); */
    /* } */
    int rows=2,cols=2,vals=0;
    vector<vector<int> > R;
    /* vector<vector<int> > R(rows, vector<int>(cols, vals)); */
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){

            cin>>HAPPINESS;
            /* R[0].__emplace_back(3); */
            R[0].__emplace_back(HAPPINESS);

        }
    }

    for(int i = 0; i<N; i++){
        printf("%d\n",R[0][i]);
    }

    /* cout << R << endl; */


    /* tmp = A[0]; */

    /* if(tmp<B[0]){ */
    /*     tmp=B[0]; */
    /* } */
    /* if(tmp<C[0]){ */
    /*     tmp=C[0]; */
    /* } */
    /* happiness_value+=tmp; */

    /* calc_happiness(tmp,0,PAIR); */

    /* printf("%d\n",happiness_value); */

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


