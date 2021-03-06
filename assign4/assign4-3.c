//Yogesh Agarwala_EE19B130
/*This is a program to multiply two matrix of size 3x4 and 4x3 and the result is to be stored and displayed in
an array of size 3x3*/

#include<stdio.h>

int main()
{
	//Assigning three arrays for the three matrices
	int i,j,g;
	float matrix1[12],matrix2[12],matrix3[9];
    
    
	// Taking the inputs for the first matrix
	printf("Enter 12 elements(row wise) for a matrix_1 of dimension 3x4:\n");
	for(i=1;i<=12;i++)
    	scanf("%f",&matrix1[i]);
   
    
    	//Taking the inputs for the second matrices
    	printf("Enter 12 elements(row wise) for a matrix_2 of dimension 3x4:\n");
   	for(j=1;j<=12;j++)
       scanf("%f",&matrix2[j]);
   
   
    	matrix3[1]=(matrix1[1]*matrix2[1])+(matrix1[2]*matrix2[4])+(matrix1[3]*matrix2[7])+(matrix1[4]*matrix2[10]);
    	// The value of the element of the product matrix
   
    	matrix3[2]=(matrix1[1]*matrix2[2])+(matrix1[2]*matrix2[5])+(matrix1[3]*matrix2[8])+(matrix1[4]*matrix2[11]);
    	// The value of the element of the product matrix
   
    	matrix3[3]=(matrix1[1]*matrix2[3])+(matrix1[2]*matrix2[6])+(matrix1[3]*matrix2[9])+(matrix1[4]*matrix2[12]);
    	// The value of the element of the product matrix
   
    	matrix3[4]=(matrix1[5]*matrix2[1])+(matrix1[6]*matrix2[4])+(matrix1[7]*matrix2[7])+(matrix1[8]*matrix2[10]);
    	// The value of the element of the product matrix
   
    	matrix3[5]=(matrix1[5]*matrix2[2])+(matrix1[6]*matrix2[5])+(matrix1[7]*matrix2[8])+(matrix1[8]*matrix2[11]);
    	// The value of the element of the product matrix
   
    	matrix3[6]=(matrix1[5]*matrix2[3])+(matrix1[6]*matrix2[6])+(matrix1[7]*matrix2[9])+(matrix1[8]*matrix2[12]);
    	// The value of the element of the product matrix
   
    	matrix3[7]=(matrix1[9]*matrix2[1])+(matrix1[10]*matrix2[4])+(matrix1[11]*matrix2[7])+(matrix1[12]*matrix2[10]);
    	// The value of the element of the product matrix
   
   	matrix3[8]=(matrix1[9]*matrix2[2])+(matrix1[10]*matrix2[5])+(matrix1[11]*matrix2[8])+(matrix1[12]*matrix2[11]);
    	// The value of the element of the product matrix
   
    	matrix3[9]=(matrix1[9]*matrix2[3])+(matrix1[10]*matrix2[6])+(matrix1[11]*matrix2[9])+(matrix1[12]*matrix2[12]);
   	// The value of the element of the product matrix
   
   
    
	//for printing the first row of the matrix
	printf("The product of these two matrix is:\n");
    	for(g=1;g<=2;g++)
        {printf("%f \t",matrix3[g]);}
        printf("%f \n",matrix3[3]);


        //for printing the second row of the matrix
	for(g=4;g<=5;g++)
        {printf("%f \t",matrix3[g]);}
        printf("%f \n",matrix3[6]);
        
        
	//for printing the third row of the matrix
        for(g=7;g<=8;g++)
        {printf("%f \t",matrix3[g]);}
        printf("%f \n",matrix3[9]);


return 0;
}
