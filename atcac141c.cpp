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
#define pt(n) printf("%lld ",n)
#define ll long long
using namespace std;

int main()
{
    ll n,k,q,ipt;
    vector<ll> A,ansIdx;
    
    si3(n,k,q);
    
    lp(i,n){
        A.push_back(k-q);
    }
    
    lp(i,q){
        si(ipt);
        A[ipt-1]++;
    }
    
    lp(i,n){
        if(A[i]<=0){
            puts("No");
        }else{
            puts("Yes");
        }
    }
   
    return 0;

}

// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/

