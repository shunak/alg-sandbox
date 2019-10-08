#include <cstdio>
#include <cmath>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define num1 2000
#define num2 2000
#define rep(i,n) for(i=0;i<=(n);i++)
#define rep3(i,n) for(i=1;i<(n);i++)
#define rep2(i,k,n) for(i=k;i<(n);i++)
#include <iostream>
#include <cstdlib>
using namespace std;

// find maxVal By
// Devide and Conquer

ll findMaximum(ll A[], ll l, ll r)
{
    ll m,u,v,x;

    m=(l+r)/2;
    if(r-l==1){
        return A[l];
    }else{
        u = findMaximum(A,m,r);
        v = findMaximum(A,l,m);
        x = max(u,v);    
    }
    return x;

}


int main()
{

    ll A[]={7,3,4,5,6};

    printf("%lld",findMaximum(A,0,5));
    
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



