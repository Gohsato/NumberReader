
#include <stdio.h>
#include <math.h>

#define Pi 3.14159265

double atan2(double y, double x){          //Function that can find primary arg
	
	if(x>0){
		return atan(y/x);
	}
	if(x==0&&y>0){
		return (Pi/2);
	}
	if(x==0&&y<0){
		return (-Pi/2);
	}
	if(x<0&&(y==0||y>0)){
		return atan(y/x)+Pi;
	}
	if(x<0&&y<0){
		return atan(y/x)-Pi;
	}
}

double mag(double x, double y){          	//Magnitude
	
	return sqrt(x*x + y*y);
}



int main(void)								//Test Program
{
	 double y,x,r,theta;
	 
	 setvbuf(stdout, NULL, _IONBF, 0);
	 
	 printf("Enter x value of cartesian coordinates");
	 
	 fflush(stdout);
	 scanf("%lf",&x);
	 printf("Enter y value of cartesian coordinates");
	 
	 fflush(stdout);
	 scanf("%lf",&y);
	 
	 r = mag(x,y);
	 theta = atan2(y,x);
	 
	 printf("Magnitude: %lf\nTheta:%lf",r,theta);
 
 
 
 
  return 0;
}