// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

int N,O,S[10],T[10],cnt=0;

int sentinelSearchJudge(int searchingVal, int termVal, int A[]){
    
    int i=0;
    A[termVal]=searchingVal;
    while(A[i]!=searchingVal){
        i++;
    }
    return i!=termVal;//探索が最後まで進まなければ値を発見できたということになる
}

int main()
{
    
    scanf("%d",&N);    
    rep(i,N)scanf("%d",&S[i]);
    
    
    scanf("%d",&O);
    rep(i,O){
        scanf("%d",&T[i]);
        if(sentinelSearchJudge(T[i],N,S))cnt++;
    }
    
    
    cout << cnt << endl;
    
}

// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/



