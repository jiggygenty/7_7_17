#include<stdio.h>
#include<math.h>
double function(double *x)
{
    return(exp(-*x)-*x);
}
double functionderiv(double *x)
{
    return(-exp(-*x)-1);
}
void main()
{
    double tolerance=0.001,xnew,x,xl=0,xu=2,error=1000;
//BISECTION METHOD
        x=(xl+xu)/2;
     while(fabs(error)>tolerance)
    {
        if((function(&x)*function(&xl))<0)
            xu=x;
        else if(function(&x)==0)
            break;
        else
            xl=x;

        xnew=(xl+xu)/2;
        error=fabs((xnew-x)/x)*100;
        x=xnew;
    }
    printf("The root of the function using the BISECTION METHOD is: %.5lf\n",x);
    printf("The resulting error of the BISECTION METHOD is: %.5lf\n",error);

    //------------------------------------------------------//

    double xi,xaddi,xsubi;
//SECANT METHOD
    xi=x;
    xaddi=xi-(function(&xi)*(xsubi-xi))/(function(&xsubi)-function(&xi));
    while(fabs(function(&xaddi))>tolerance)
    {
    xaddi=xi-(function(&xi)*(xsubi-xi))/(function(&xsubi)-function(&xi));
    }
    printf("The root of the function using the SECANT METHOD is: %.5lf\n",xaddi);

    //------------------------------------------------------//

//NEWTON RAPHSON METHOD
    xi=x;
    while(fabs(function(&xaddi))>tolerance)
    {
    xaddi=xi-(function(&xi))/(functionderiv(&xi));
    }
    printf("The root of the function using the NEWTON-RAPHSON METHOD is: %.5lf",xaddi);
}
