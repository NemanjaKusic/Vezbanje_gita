#include <stdio.h>

int Calculation(int a, int b)
{
if(a > b)
return a - b;
else
return b - a;
}

void PrintResult(int res)
{
printf("Result: %d\n", res);
}

int main()
{
int a = 3;
int b = 7;
int c;

PrintResult(c);

c = Calculation(a,b);

printf("Result: %d\n", c);
return 0;
}
