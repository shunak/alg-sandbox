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
    ll i,j,n,flag=0;
    scanf("%lld",&n);
    chrono::system_clock::time_point start, end;

    start = chrono::system_clock::now();

    // 何かの処理
    for (i =1; i <=9; i++) {
        for (j = 1; j<=9;j++) {
            if (i*j==n) {
                flag=1;
            }
        }
    }

    if(flag) puts("Yes");
    else puts("No");

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

