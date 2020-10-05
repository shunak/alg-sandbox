# alg-sandbox

experimental algorithm codes.

## REMARKS

if your environment c++ compiler generate error like
_greedy_method_atc131d.cpp:18:14: error: no member named 'emplace_back' in 'std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >'_<br>

because your machine's compiler is not supporting C++11.<br>
The ``emplace_back`` member function of ``std::vector<T>`` has been added since C++11<br>

complie your source like this
```
g++ -o "outputfilename" sourcefile.cpp -std=c++11 -stdlib=libc++
```
Otherwise you might need to update your compiler version to a more recent one.

Refs [https://stackoverflow.com/questions/19789353/c-compiler-class-stdvectorstdvectorchar-has-no-member-named-empla](https://stackoverflow.com/questions/19789353/c-compiler-class-stdvectorstdvectorchar-has-no-member-named-empla)
