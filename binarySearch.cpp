// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int N, S[100],searchVal,ans;

//get search values pos index.
int binarySearch(int searchVal, int EdgeIndex, int ary[]){
    
    int leftEdge=0;
    int rightEdge=EdgeIndex;
    int mid = (leftEdge+rightEdge)/2;
    //int index=0;
    
    while(leftEdge<rightEdge){
        
        mid = (leftEdge+rightEdge)/2;
        
        if(ary[mid]==searchVal){
            
            return mid;
            
        }else if(searchVal>ary[mid]){
            
            leftEdge = mid+1;
                
        }else if(searchVal<ary[mid]){
            
            rightEdge = mid;
            
        } 
    }
   
    return 10000;

}



int main()
{
    
    //input int array
    scanf("%d",&N);
    rep(i,N)scanf("%d",&S[i]);
    
    //rep(i,N)printf("%d ",S[i]);
    
    //input search value
    scanf("%d",&searchVal);
    
    //search the value index by binay search
    ans = binarySearch(searchVal,N,S);
    
    
    cout << ans << endl;
}

// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/




