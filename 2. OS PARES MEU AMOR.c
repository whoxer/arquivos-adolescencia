#include <stdio.h>
int main(void)
{
    int count;

    for(count=1; count<=100;count++)

    if(count%2 == 0)
    {
        printf("%d\n", count);
        count++;
    }
}
