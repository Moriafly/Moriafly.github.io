#include<stdio.h>
int main()
void max_min(int a[]);
{
    int n,a[],i;
    scanf("%d",&n),
    for(i=0;i<n;i++)
        scanf("%d' ",&a[i]);
    max_min(a);
}
void max_min(int a[])
{
    int max,min,i;
    extern n;
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])max=a[i];
        if(min>a[i])min=a[i];
    }
    printf("max=%d\nmin=%d",max,min);
}