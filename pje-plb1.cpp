// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    
    int n=1000,ans=0;
    //sum of multiples of 3
    rep(i,n){
        if(i%3==0 || i%5==0){
            ans+=i;
        }
    }
    printf("%d\n",ans);    
    
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
// update
