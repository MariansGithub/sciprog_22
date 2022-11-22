//Programme to display Fibonacci series up to n

#include<stdio.h>
#include<stdlib.h>

// input arguments F(n-1) and F(n-2)--*a and *b respectively
// at the end values will equal Fn and Fn-1
void fibonnaci (int *a, int *b);

int main()
{
int n, i;
int f1=1; int f0=0;

printf("Enter positive integer n\n");
scanf("%d", &n);

if (n<1){
printf("The number is not positive\n");
//exit the programme
exit(1);
}

printf ("The fibonacci series is:\n");
printf ("%d, %d, ", f0, f1);

for (i=2; i<=n; i++){
fibonnaci(&f1, &f0);
printf("%d, ", f1); 

//to print only 10 numbers per line
if(((i+1)%10) == 0) printf ("\n");
}

return 0;
}
void fibonnaci(int *a, int *b){

int next;
//next =F(n)
next=*a+*b;

//*a=f(n), *b=f(n-1)
*b=*a;
*a=next;
}
