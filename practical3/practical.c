// practical3 code area under the curve 

# include <stdio.h>
# include <math.h>

int main (void){

int N=12, i;
float a=0.0, b_deg=60.0;
float b_rad, area, mult_rad;

//convert b_deg=pi/3 to radians
b_rad=(M_PI*b_deg)/18.0;
printf("pi/3 in Radians=%f\n", b_rad);

//initalize area sum tan(a) +tan(b) (a and b in rad)


area =tan(a) +tan(b_rad);
//calculate the area at points x1 to x11
for (i=5; i<60; i=i+5)
//because 60 divided by 15 is 5, increments are each 5
{
area =area +2*tan((M_PI*i)/180);
}
//convert to radians
//multiply partial area by (pi/3)/(2x12) 
mult_rad=(M_PI*((b_deg)/(2*N)))/180;
area=mult_rad*area;

printf("Approximated=%f,Exact=%f\n", area, log(2.0));
return 0;
}
