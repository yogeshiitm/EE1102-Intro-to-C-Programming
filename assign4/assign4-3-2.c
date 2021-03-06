/*This is a program to multiply two matrix of size 3x4 and 4x3 and the result is to be stored and displayed in
an array of size 3x3*/

#include <stdio.h>

int main()
{

int i,j,p,q,m,n,a,b;
int sum=0;
int A[3][4];
int B[4][3];
int C[3][3];


	printf ("Enter the 12 elements of a matrix_A of dimension 3x4:\n");
	for(i=0;i<3;i++)
	   for(j=0;j<4;j++)
	     scanf ("%d",& A[i][j]);

	printf ("Enter the 12 elements of a matrix_B of dimension 4x3:\n");
	for(p=0;p<4;p++)
	   for(q=0;q<3;q++)
	     scanf ("%d",& B[p][q]);

	
	for(a=0;a<3;a++)
	   for(b=0;b<3;b++)	
	     for(m=0;m<3;m++)
	       {for(n=0;n<4;n++)
	         sum=sum + A[m][n]*B[n][m];
	           C[a][b]=sum;}

	

return 0;
}
