#include <math.h>
#include<stdlib.h>

void main()
{
////1.2
double X0=1, V0=0, w=1, t, star, dt=0.01;
int SIZE=M_PI*4/dt;
double xarray[SIZE],varray[SIZE],x[SIZE],v[SIZE];
int count=0;
for(t=0;t<=M_PI*4;t+=dt)
{
   x[count]=X0*cos(w*t);
   v[count]=-V0*w*sin(w*t);
   count++;
}
xarray[0]=X0;
varray[0]=V0;
 count=0;

printf("Actual X Values:      Approximated X Values:\n");
system("pause");
for(t=0;t<=M_PI*4/w;t+=dt)
{
 xarray[count+1]=varray[count]*dt+xarray[count];
 varray[count+1]=-xarray[count]*dt+varray[count];


// varray[count+1]=(varray[count]-dt*xarray[count])/(1+dt*dt);
// xarray[count+1]=(xarray[count]+dt*varray[count])/(1+dt*dt);

 printf("%0.8lf\t\t%0.8lf\n",x[count],xarray[count]);
 count++;

}

printf("Actual V Values:      Approximated V Values:\n");
system("pause");
for(t=0;t<=M_PI*4/w;t+=dt)
{

 printf("%lf\t\t%lf\n",v[count],varray[count]);
 count++;

}
}
