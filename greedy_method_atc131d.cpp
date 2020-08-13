#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(){
    ll A[200000],B[200000];
    int i, N, Time=0;

    // input stdin one liner
    cin >> N;
    vector<pair<int,int>> task;
    for (int i = 0; i < N; i++) {
        int A,B;
        cin >> A >> B;
        task.emplace_back(B,A);
    }
    // sort deadline array order by deadline
    sort(task.begin(),task.end());
    // output

    for (int i=0; i<N; i++) {
        Time+=task[i].second;// worktime
        if (Time>task[i].first) { // cumulative worktime over limit time
            puts("No");
            return 0;
        }
        /* cout << Task.first << " " << Task.second << endl; */
    }
    puts("Yes");


    return 0;

}





