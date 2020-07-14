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
    ll i,j,n;
    scanf("%lld",&n);
    for (i =1; i <=9; i++) {
        for (j = 1; j<=9;j++) {
            if (i*j==n) {
                puts("Yes");
                return 0;
            }
        }
    }

    puts("No");
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

