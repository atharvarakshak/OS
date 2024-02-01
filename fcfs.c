#include <stdio.h>
void main(){

int p[100];
printf("enter three process's time \n");
for(int i = 0 ; i<3 ; i++)
{
scanf("%d",&p[i]);
}

float wt = 0;
float avt = 0 ;
float tt = 0;
for(int i = 0 ; i<3 ; i++)
{
printf( " waiting time of process %d  is %f  \n ",i+1,wt);
printf( " turn around time of process %d  is %f  \n ",i+1,wt+p[i]);
// to calculate avg waiting time
tt = wt+p[i] + p[i];
avt = avt + wt;
wt = wt+p[i] ;

}
avt = avt/3;
printf(" average wt is: %f\n",avt);

}