#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int Activity_happiness[100000][3],N,GrossHappiness[100000][3],maximized_happiess=0;

int main(){
    // input stdin one liner
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){

            cin>>Activity_happiness[i][j];

        }
    }

    // GrossHappinessappiness of day 1st each activity
    GrossHappiness[0][0] = Activity_happiness[0][0];//A
    GrossHappiness[0][1] = Activity_happiness[0][1];//B
    GrossHappiness[0][2] = Activity_happiness[0][2];//C

    // GrossHappinessappiness of over day 2nd each activity
    // record each happiness to array
    for(int i=1; i<N; i++){
        GrossHappiness[i][0] = max(GrossHappiness[i-1][1],GrossHappiness[i-1][2]) + Activity_happiness[i][0]; //case activity A choice
        GrossHappiness[i][1] = max(GrossHappiness[i-1][0],GrossHappiness[i-1][2]) + Activity_happiness[i][1]; //case activity B choice
        GrossHappiness[i][2] = max(GrossHappiness[i-1][0],GrossHappiness[i-1][1]) + Activity_happiness[i][2]; //case activity C choice
    }

    // select happiness maximized plan
    maximized_happiess=max(max(GrossHappiness[N-1][0],GrossHappiness[N-1][1]),GrossHappiness[N-1][2]);
    printf("%d\n",maximized_happiess);
    return 0;

}
// dp is recurrencive for loop

