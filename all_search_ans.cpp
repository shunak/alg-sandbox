#include <cstdlib>
#include <stdio.h>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <string>
#include <chrono>

//macros
#define lp(i,n) for(int i=0;i<n;i++)
#define si(n) scanf("%lld",&n)
#define si3(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define pt(n) printf("%lld\n",n)
#define pt_nnl(n) printf("%lld ",n) //nnl =no newline
#define ll long long
#define nl puts("")

using namespace std;

int main()
{
    ll A,B,C,N,Y,flag=0;
    scanf("%lld",&N);
    scanf("%lld",&Y);
    chrono::system_clock::time_point start, end;

    start = chrono::system_clock::now();

    // start count process time
    for (A =0; A<=N; A++) {
        for (B = 0; B+A<=N;B++) {
            C=N-A-B;
            if(10000*A+5000*B+1000*C==Y){
                printf("%lld %lld %lld\n",A,B,C);
                end = chrono::system_clock::now();
                double time = static_cast<double>(chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0);
                printf("time %lf[ms]\n", time);
                return 0;
            }
        }
    }

    puts("-1 -1 -1");

    end = chrono::system_clock::now();
    double time = static_cast<double>(chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0);
    printf("time %lf[ms]\n", time);

    return 0;
}

/* pt(A); */
/* pt(B); */
// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/

