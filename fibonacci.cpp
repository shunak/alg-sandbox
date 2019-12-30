// This file is a "Hello, world!" in C++ language by GCC for wandbox.
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


int fib(int x){
    
    if(x<0){
        //puts("error!");
        return 0;
            
    }else if(x==0){
         
        return 0;
        
    }else if(x==1){
        
        return 1;
    
    }else{
        //いまの値とその次の値の和をとる
        return fib(x-1)+fib(x-2);
    }
    
    return 0;
}
    


int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    
}



// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/


