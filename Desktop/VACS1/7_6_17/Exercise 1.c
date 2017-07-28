#include<stdio.h>
#include<math.h>

void main()
{
    double cur,i,sum=0;
    for(i=0;i<10000;i++)
    {
        cur=1/((i+1)*(i+1));
        sum+=cur;
    }
    printf("%.15lf\n",sum);
    sum=0;
    for(i=10000;i>0;i--)
    {
        cur=1/((i)*(i));
        sum+=cur;
    }
    printf("%.15lf",sum);
}

