#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double functiona(double t,double u)
{
return((pow(t,3)*u)-(1.5*u));
}
double functionb(double x,double u)
{
return((1+2*x)*pow(u,0.5));
}
void main()
{
    int count;
    double i,y,dt=0.1;
    int SIZEA=2/dt;
    int SIZEB=1/dt;
    double uarraya[SIZEA];
    double uarrayb[SIZEB];
    double ustara[SIZEA];
    double ustarb[SIZEB];
//EULER
    uarraya[0]=1;
    uarrayb[0]=1;

    count=0;
    printf("Euler Approximation A:\n");
    for(i=dt;i<=(2+dt*2);i+=dt)
    {
        uarraya[count+1]=(uarraya[count]+dt*functiona(i,uarraya[count]));
        printf("%.5lf\n",uarraya[count]);
        count++;
    }
    printf("\n");
    printf("Euler Approximation B:\n");
    count=0;
    for(i=dt;i<=(1+dt*2);i+=dt)
    {
        uarrayb[count+1]=(uarrayb[count]+dt*functionb(i,uarrayb[count]));
        printf("%.5lf\n",uarrayb[count]);
        count++;
    }
    printf("\n");

//MIDPOINT
    count=0;
    printf("Midpoint Approximation A:\n");
    for(i=0;i<=(2);i+=dt)
    {
        y=functiona(i,uarraya[count]);
        uarraya[count+1]=uarraya[count]+dt*functiona(i+0.5*dt,uarraya[count]+0.5*dt*y);
        printf("%lf\n",uarraya[count]);
        count++;
    }
    printf("\n");

    count=0;
    printf("Midpoint Approximation B:\n");
    for(i=0;i<=(1);i+=dt)
    {
        y=functionb(i,uarraya[count]);
        uarrayb[count+1]=uarrayb[count]+dt*functionb(i+0.5*dt,uarrayb[count]+0.5*dt*y);
        printf("%lf\n",uarrayb[count]);
        count++;
    }
    printf("\n");

    count=0;
    printf("Heun's Approximation A:\n");
    for(i=0;i<=(2);i+=dt)
    {
        ustara[count]=uarraya[count]+dt*functiona(i,uarraya[count]);
        uarraya[count+1]=uarraya[count]+dt*0.5*(functiona(i,uarraya[count])+functiona(i+dt,ustara[count]));
        printf("%lf\n",uarraya[count]);
        count++;
    }
    printf("\n");

    count=0;
    printf("Heun's Approximation B:\n");
    for(i=0;i<=(1);i+=dt)
    {
        ustarb[count]=uarrayb[count]+dt*functionb(i,uarrayb[count]);
        uarrayb[count+1]=uarrayb[count]+dt*0.5*(functionb(i,uarrayb[count])+functionb(i+dt,ustarb[count]));
        printf("%lf\n",uarrayb[count]);
        count++;
    }
    printf("\n");

    count=0;
    printf("Runge-Kutta A:\n");
    for(i=0;i<=(2);i+=dt)
    {
        uarraya[count+1]=uarraya[count]+(dt/6)*(functiona(i,uarraya[count])+2*functiona(i+0.5*dt,uarraya[count]+0.5*dt*functiona(i,uarraya[count]))+2*functiona(i+0.5*dt,uarraya[count]+0.5*dt*functiona(i+0.5*dt,uarraya[count]+0.5*dt*functiona(i,uarraya[count])))+functiona(i,uarraya[count]+dt*functiona(i,uarraya[count]+0.5*dt*functiona(i+0.5*dt,uarraya[count]+0.5*dt*functiona(i,uarraya[count])))));
        printf("%lf\n",uarraya[count]);
        count++;
    }
    printf("\n");

    count=0;
    printf("Runge-Kutta B:\n");
    for(i=0;i<=(1);i+=dt)
    {
        uarrayb[count+1]=uarrayb[count]+(dt/6)*(functionb(i,uarrayb[count])+2*functionb(i+0.5*dt,uarrayb[count]+0.5*dt*functionb(i,uarrayb[count]))+2*functionb(i+0.5*dt,uarrayb[count]+0.5*dt*functionb(i+0.5*dt,uarrayb[count]+0.5*dt*functionb(i,uarrayb[count])))+functionb(i,uarrayb[count]+dt*functionb(i,uarrayb[count]+0.5*dt*functionb(i+0.5*dt,uarrayb[count]+0.5*dt*functionb(i,uarrayb[count])))));
        printf("%lf\n",uarrayb[count]);
        count++;
    }
    printf("\n");
}
