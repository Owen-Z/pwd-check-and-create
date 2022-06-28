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

## compare char and string item

string[] equivlent to a char;

## fstream can't seek to the end of file

1.when open the fstrem should add ios::in attribute
2.using ios::app attribute