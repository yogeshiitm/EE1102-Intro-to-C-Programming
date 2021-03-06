//Yogesh Agarwala_EE19B130
//a program that stores lists of names and their marks in parallel arrays and sorts the names into alphabetical order keeping the marks with the correct names
// sorting using selection sort method


#include<stdio.h>
#define MAXLENGTH	255
void SelectSort(char names[][MAXLENGTH],int marks[MAXLENGTH],int n);
int compare(char names[][MAXLENGTH],int n,int m);
int getPre(char names[][MAXLENGTH],int i,int n);
void swapNames(char names[][MAXLENGTH],int a,int b);
void swapMarks(char names[][MAXLENGTH],int marks[MAXLENGTH],int i,int j);

void main()
{

	//initialisation of the names and marks array
	char names[][MAXLENGTH] = {"Nithin James", "Sumanthsamrat Pedapudi","Pallela V Suryanarayana", 
	"Aravind P.A.", "Durgum Khasim Hussain", "Bharath L.R", "Sreekanth V P", "Thallam Srinivasarao", "Joshi Bhargav Bharatbhai", 		"Amardeep Dewangan", "Umashankar G","Arjun Bharadwaj","Anup Kulkarni","Balakrishna Reddy","Dhivagar","Rashmi M"};
	int marks[]={75,80,73,81,60,90,95,64,78,82,86,83,84,72,68,83};
	int i,j;
	int n=16;


	//funtion call
	SelectSort(names,marks,n);


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



void SelectSort(char names[][MAXLENGTH],int marks[MAXLENGTH],int n){
	int i=0,c;
    	for(i=0;i<n-1;i++)
    	{   
           c=getPre(names,i,n);
           swapNames(names,i,c); //calling swapArray funtion
           swapMarks(names,marks,i,c); //calling swapMarks funtion
    	}
}



int getPre(char names[][MAXLENGTH],int i,int n){
    	int pre=i;
	int c=i;
    	for(i=c;i<(n-1);i++)
	pre= compare(names,(i+1),pre);
	//getting the number of the row which should the first according to the dictionary
    	return pre;
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



void swapNames(char names[][MAXLENGTH],int a,int b){
	int k=0;
    	char t;
       for(k=0;k<MAXLENGTH;k++)
    	{//Swapping the array
        t=names[a][k];
        names[a][k]=names[b][k];
        names[b][k]=t;
    	}
}



void swapMarks(char names[][MAXLENGTH],int marks[MAXLENGTH],int i,int j){
    	int t;
	//swapping the corressponding marks
    	t=marks[i];
       marks[i]=marks[j];
	marks[j]=t;
}
