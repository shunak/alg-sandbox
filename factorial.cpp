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

// Devide and Conquer

ll factorial(ll n)
{
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}


int main()
{
    printf("%lld",factorial(10));
    
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


