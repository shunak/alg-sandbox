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
    ll k,n,A[200000],B[200000],Same=-1,No=-1;

    si(n);
    lp(i,n){
        si(A[i]);
    }
    lp(i,n)B[A[i]]++;

    for (ll i = 1; i <= n; i++) {
        if(B[i]==0)No=i;
        if(B[i]==2)Same=i;
    }
    if(Same==-1)puts("Correct");
    else printf("%lld %lld\n",Same,No);



    /* lp(i,n) */
    /*     pt_nnl(A[i]); */
    /* lp(i,n) */
    /*     pt_nnl(B[i]); */
    /* nl; */

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

