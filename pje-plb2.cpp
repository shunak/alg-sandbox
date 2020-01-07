// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#define rep(i,n) for(int i=0;i<n;i++)
#define val 50
#define ll long long

using namespace std;

int fib(ll x){
    
    if(x<=0){
        
        return 0;
        
    }else if(x==1){
        
        return 1;
        
    }else{
        
        return fib(x-2)+fib(x-1);
        
    }
}

int main()
{

    ll sum=0;
    
    for(ll i=0; i<=val; i++){
        
        if(fib(i)%2==0){
            
            sum+=fib(i);
        
        }
    }
    
    printf("%lld",sum);
    
    return 0;
    
}

