#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))


int R[100000][3],N,HAPPINESS,happiness_value=0,tmp=0,sub_max=0;
vector<int> PAIR,MEMO;

void calc_happiness(int t_happiness,int i,vector<int> PAIR_,vector<int> MEMO_){

    if(i<N){

        printf("%d\n", t_happiness);

        if(t_happiness!=R[i][0]){//A
            PAIR_.__emplace_back(R[i+1][0]);
        }else{
            MEMO_.__emplace_back(R[i+1][0]);
        }
        if(t_happiness!=R[i][1]){//B
            PAIR_.__emplace_back(R[i+1][1]);;
        }else{
            MEMO_.__emplace_back(R[i+1][1]);
        }
        if(t_happiness!=R[i][2]){//C
            PAIR_.__emplace_back(R[i+1][2]);
        }else{
            MEMO_.__emplace_back(R[i+1][2]);
        }

        std::cout << (int)PAIR_.size() << std::endl;

        if((int)PAIR_.size()==1){
            sub_max=max(MEMO_[0],MEMO_[1]);
            PAIR_.__emplace_back(sub_max);
        }else if((int)PAIR_.size()==0){
            sub_max=MEMO_[0];
            PAIR_.__emplace_back(sub_max);
            PAIR_.__emplace_back(sub_max);
        }

        t_happiness=max(PAIR_[0],PAIR_[1]);
        happiness_value+=t_happiness;
        PAIR_.erase(PAIR_.begin(),PAIR_.end());
        MEMO_.erase(MEMO_.begin(),MEMO_.end());
        calc_happiness(t_happiness,++i,PAIR_,MEMO_);

    }

}

int main(){
    // input stdin one liner
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){

            cin>>R[i][j];

        }
    }

    tmp = R[0][0];//A

    if(tmp<R[0][1]){
        tmp=R[0][1];//B
    }
    if(tmp<R[0][2]){
        tmp=R[0][2];//C
    }
    happiness_value+=tmp;

    calc_happiness(tmp,0,PAIR,MEMO);

    printf("%d\n",happiness_value);

    /*     for(int i = 0; i<N; i++){ */
    /*         for(int j = 0; j<3; j++){ */
    /*             printf("%d\n",R[i][j]); */
    /*         } */
    /*     } */

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


