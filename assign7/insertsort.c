//Yogesh Agarwala_EE19B130
//a program that stores lists of names and their marks in parallel arrays and sorts the names into alphabetical order keeping the marks with the correct names
//sorting usin insertion sort method


#include<stdio.h>
#define MAXLENGTH	255
void InsertionSort(char names[][MAXLENGTH],int marks[MAXLENGTH],int n);
void InsertionPre(char names[][MAXLENGTH],int marks[MAXLENGTH],int i);
void shiftRight(char names[][MAXLENGTH],int b,int a);
int compare(char names[][MAXLENGTH],int n,int m);
void shiftMarks(int marks[MAXLENGTH],int i,int j);

void main()
{


	//initialisation of the names and marks array
	char names[][MAXLENGTH] = {"Nithin James", "Sumanthsamrat Pedapudi","Pallela V Suryanarayana", 
	"Aravind P.A.", "Durgum Khasim Hussain", "Bharath L.R", "Sreekanth V P", "Thallam Srinivasarao", "Joshi Bhargav Bharatbhai", 		"Amardeep Dewangan", "Umashankar G","Arjun Bharadwaj","Anup Kulkarni","Balakrishna Reddy","Dhivagar","Rashmi M"};
	int marks[]={75,80,73,81,60,90,95,64,78,82,86,83,84,72,68,83};
	int i,j;
	int n=16;


	//calling function
	InsertionSort(names,marks,n);


	//printing the sorted arrays
	printf("Marks\tNames \n");
	for(i=0;i<n;i++)
	{
	    printf("%d\t",marks[i]);
	    
	    for(j=0;j<MAXLENGTH;j++)
	    {printf("%c",names[i][j]);}

	    printf("\n");
	}
}



void InsertionSort(char names[][MAXLENGTH],int marks[MAXLENGTH],int n){
	int i;
	for(i=0;i<n;i++)
	InsertionPre(names,marks,i); //calling function
}



void InsertionPre(char names[][MAXLENGTH],int marks[MAXLENGTH],int i){
    
	int g=0,k=0;
	int index=i;
	int c=i;
	char valueAtIndex[MAXLENGTH];

	while(c>0 && compare(names,c,c-1)==c)
	{
	   int k=0;
	   char t;
	   for(k=0;k<MAXLENGTH;k++)
	   {//Shifting the previous array to the right one
		t=names[c][k];
		names[c][k]=names[c-1][k];
		names[c-1][k]=t;
	   }
	//Shifting the corresponding marks
	shiftMarks(marks,c,c-1);

	c--;  
	}
}



int compare(char names[][MAXLENGTH],int s,int m){
	int j=0;
	//finding the first uncommon letter       
	while(names[s][j]==names[m][j]&& j<MAXLENGTH)
       j++;

	if(names[s][j]<names[m][j])
   	return s;

	else
	{if(names[s][j]>names[m][j])
    	return m;}
	//returning the row no. which should preceed according to the dictionary
}



void shiftMarks(int marks[MAXLENGTH],int i,int j){
	int t;
	//Shifting the corresponding marks to right
	t=marks[i];
	marks[i]=marks[j];
	marks[j]=t;
}
