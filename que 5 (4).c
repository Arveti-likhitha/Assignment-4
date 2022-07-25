#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    for(i = 20; i>=1; i--)
        if(i%2!=0)
            printf("%d\t", i);

    return 0;
}
