#include <cstdio>
#include <cmath>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ll long long
#define num1 2000
#define num2 2000
#define rep(i,n) for(i=0;i<=(n);i++)
#define rep3(i,n) for(i=1;i<(n);i++)
#define rep2(i,k,n) for(i=k;i<(n);i++)
#include <iostream>
#include <cstdlib>
#define MAX 2000001
#define VMAX 10000

using namespace std;

int main()
{
    unsigned short *A,*B;
    
    int C[VMAX+1];
    int n, i, j;
    scanf("%d",&n);
    
    A=(unsigned short*)malloc(sizeof(short)*n+1);
    B=(unsigned short*)malloc(sizeof(short)*n+1);
    
    for(i=0;i<=VMAX; i++)C[i]=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%hu",&A[i+1]);        
        C[A[i+1]]++;
    }
    
    
    for(i=1;i<=VMAX;i++)C[i]+=C[i-1];
    
    for(j=1;j<=n;j++)
    {   
        B[C[A[j]]]=A[j];
        C[A[j]]--;
    }
    
    for(i=1;i<=n;i++)
    {
        if(i>1)printf(" ");
        printf("%d",B[i]);
    }
    puts("");
        
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

