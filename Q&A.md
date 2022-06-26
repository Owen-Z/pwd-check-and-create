# Q&A

## can't compile multiple cpp files in code

solution: using cmake tools  
cmake: quick start  

## Using cmake to compile multiple cpp files

```txt
file(GLOB pwd-program_SRC
     "*.h"
     "*.cpp"
)

add_executable(pwd-program ${pwd-program_SRC})
```

## redifinition of class

using  

```c++
     #ifndef HEADER_H
     #define HEADER_H
     #endif
```
