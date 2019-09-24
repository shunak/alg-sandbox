// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#define lp(i,n) for(int i=0; i<n; i++)
using namespace std;

int main()
{

    int n,v[100];
    
    scanf("%d",&n);
    
    lp(i,n)scanf("%d",&v[i]);
    
    sort(v,v+n);//O(nlogn),not stable
    
    lp(i,n)printf("%d ",v[i]);
    
}

// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/




