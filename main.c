#include <stdio.h>
int inc(int counter);

int main(void)
{
    int i=10;
    printf("before loud i=%d\n", i);
    i =inc(i);
    printf("after loud i=%d\n", i);
    return 0;
}
int inc(int counter)
{
    counter++;
    return counter;
}