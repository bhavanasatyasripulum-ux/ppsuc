#include<stdio.h>
int main()
{
    int x,y,r;
    scanf("%d %d %d",&x, &y, &r);
    int extra_sticks = r/30;
    int total_sticks = x + extra_sticks;
    int plates = total_sticks/y;
    if(total_sticks%y!=0)
    {
        plates++;
    }
    printf("%d
",plates);
    return 0;
}
