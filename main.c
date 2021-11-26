#include <stdio.h>
int main()
{
int a = 6;
int b = 6;
int c;
if(a > b)
c = a - b;
else
c = b - a;
printf("Result: %d\n", c);
return 0;
}
