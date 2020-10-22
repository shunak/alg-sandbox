#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
#define ll long long


int maximized_happiess=0,N,TodaysHappiness[100000][3],A[100000],B[100000],C[100000];

int calc_happiness(int day, int preChoice){
    if(day==N) return 0;
    if(TodaysHappiness[day][preChoice]!=-1) return TodaysHappiness[day][preChoice];
    int choiceA, choiceB, choiceC;
    // case cannot select the happiness
    choiceA=INT_MIN,choiceB=INT_MIN,choiceC=INT_MIN;
    // calc max value of each day, according to preChoice.
    if(preChoice!=0) choiceA=A[day]+calc_happiness(day+1,0);//case todays choice is A, pass the 0 value to the calc_happiness func 2nd argument. when calculate next day happiness, avoid preChoice pattarn by referencing this value.
    if(preChoice!=1) choiceB=B[day]+calc_happiness(day+1,1);//case todays choice is B
    if(preChoice!=2) choiceC=C[day]+calc_happiness(day+1,2);//case todays choice is C
    return TodaysHappiness[day][preChoice]=max(choiceA,max(choiceB,choiceC));

}

int main(){
    // input stdin one liner
    cin >> N;
    // input each day's happiness
    for(int i=0; i<N; i++){
        scanf("%d",&A[i]);
        scanf("%d",&B[i]);
        scanf("%d",&C[i]);
    }

    // initialize happiness
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){

            TodaysHappiness[i][j]=-1;

        }
    }

    // select happiness maximized plan
    maximized_happiess=max(calc_happiness(0,0),max(calc_happiness(0,1),calc_happiness(0,2)));
    printf("%d\n",maximized_happiess);
    return 0;

}
// dp is recurrencive for loop

