#include <stdio.h>

void ctest1(int *);
void ctest2(int *);


int main()
{
   int x;
 
   ctest1(&x);
   printf("Valx=%d\n",x);


   ctest2(&x);
   printf("Valx=%d\n",x);


   return 0;
}




/*

Compile: cc -Wall -c ctest1.c ctest2.c

Create library "libctest.a": ar -cvq libctest.a ctest1.o ctest2.o

List files in library: ar -t libctest.a


Linking with the library:

    cc -o executable-name prog.c libctest.a
    cc -o executable-name prog.c -L/path/to/library-directory -lctest



*/