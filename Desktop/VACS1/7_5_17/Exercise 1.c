#include <math.h>
#include<stdlib.h>

void main()
{
//1.1
    int i;
    double absolute, approx, relative, curval, K, N;
    K=1; N=10;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
printf("\n");
system("pause");
    K=5; N=10;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
printf("\n");
system("pause");
    K=10; N=10;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
printf("\n");
system("pause");
    K=20; N=10;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
printf("\n");
system("pause");
    K=20; N=100;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
printf("\n");
system("pause");
    K=20; N=500;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
printf("\n");
system("pause");
    K=1; N=100;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
printf("\n");
system("pause");
    K=1; N=1000;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
printf("\n");
system("pause");
    K=1; N=10000;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
printf("\n");
system("pause");
    K=1; N=1000000;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
printf("\n");
system("pause");
    K=1; N=1000000000;
    absolute=0;
    approx=0;
    for(i=0;i<11;i++)
    {
        approx=(sin(K*(i+1)/N)-sin((double)K*i/N))*N;
        curval=K*cos(K*((double)i/N));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("When K is: %lf\tand\tN is: %lf\n",K,N);
    printf("The Absolute Error is:  %0.20lf\nThe Relative Error is:  %0.20lf\n",absolute,relative);

}
