#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,K,now=1;
int main(){
    cin >> N;
    cin >> K;
    for(int i = 0; i < N; ++i) {
        now = min(now*2,now+K);
    }
    cout << now<< endl;
    return 0;
}
