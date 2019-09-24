// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#define lp(i,n) for(int i=0;i<n;i++)
#define si(n) scanf("%d",&n);
#define pt(n) printf("%d ",n);


using namespace std;

int main()
{
    int n,x;
    vector<int> v;
    
    si(n);
    
    lp(i,n){
        si(x);
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    
    lp(i,n)pt(v[i]);
    

}

// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/



