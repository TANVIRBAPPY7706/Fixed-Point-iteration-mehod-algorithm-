//given that f(x)=sinx-5x+2=0
#include<stdio.h>
#include<math.h>
float fn(float);
 void main(){
 float p[100],q[100], r=100.0;
 int i=1, j=0;
  q[0]=(sin(0)-5*0+1);

  printf("\nGive a initial value:\n");  // like a=.4,b=.5 .. div of them =.44
    scanf("%f",&p[0]);

   printf("\n\nIterations values are:\n\n ");
   while(r>0.00001){
     p[j+1]=fn(p[j]);
        r=p[j+1]-p[j];
        r=fabs(r);
        printf("%d\t%f\n",j,p[j]);
        j++;

   }
   printf("\n Now the root of the given equation is %f",p[j]);
 }
   float fn(float x)
   {

    float y;
    y=(sin(x)+2)/5;
    return y;
   }


