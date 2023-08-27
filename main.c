#include <stdio.h>
#include <stdlib.h>

main()
{
char c;
FILE* fptr;
fptr=fopen("MYFILE.TXT","w");
while((c=getche())!='\r'){
    putc(c,fptr);
}
  system ("PAUSE");
}
