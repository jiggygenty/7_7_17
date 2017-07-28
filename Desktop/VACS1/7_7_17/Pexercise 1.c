#include <math.h>
#include<stdlib.h>

void main()
{
////1.2
double X0=1, V0=0, w=0.95, t, star, dt=0.01;
int SIZE=M_PI*4/dt;
double xarray[SIZE],varray[SIZE],x[SIZE],v[SIZE];
int count=0;
for(t=0;t<=M_PI*4;t+=dt)
{
   x[count]=X0*cos(t);
   v[count]=V0-sin(t);
   count++;
}
xarray[0]=X0;
varray[0]=V0;
xarray[1]=X0*cos(dt);
varray[1]=-sin(dt);

count=0;
printf("Actual X Values:      Approximated X Values:\n");
system("pause");
for(t=0;t<=0.15;t+=dt)
{
 xarray[count+2]=(4*xarray[count+1])-(3*xarray[count])-(2*varray[count]*dt);
 varray[count+2]=(4*varray[count+1])-(3*varray[count])+w*w*(2*xarray[count]*dt);


 printf("%.18lf\t\t%.18lf\n",x[count],xarray[count]);
 count++;

}

printf("Actual V Values:      Approximated V Values:\n");
system("pause");
count=0;
for(t=0;t<=0.15;t+=dt)
{

 printf("%.15lf\t\t%.15lf\n",v[count],varray[count]);
 count++;

}
}
