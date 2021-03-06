//Yogesh Agarwala_EE19B130
//a program that stores lists of names and their marks in parallel arrays and sorts the names into alphabetical order keeping the marks with the correct names
//sorting usin insertion sort method
	
	

#include <stdio.h>
#include <string.h>
#define MAXLENGTH 255
int sort(char a[][255],int ,int);


int main()
{
	
char names[][MAXLENGTH]={"Nithin James","Sumanthsamrat Pedapudi","Pallela V Suryanarayana","Aravind P.A","Durgum Khasim Hussain","Bharath L.R","Sreekanth V P","Thallam Srinivasarao","Joshi Bhargav Bharatbhai","Amardeep Dewangan","Umashankar G","Arjun Bharadwaj","Anup Kulkarni","Balakrishna Reddy","Dhivagar","Rashmi M"},temp[MAXLENGTH];

	int marks[MAXLENGTH]={75,80,73,81,60,90,95,64,78,82,86,83,84,72,68,83};
	int i,index,min,n,Temp; //declaring names and marks
	
	for(i=1;i<=15;i++)
	{
		
        	index=i;
		
        	min=i;
		
        	for(n=i-1;n>=0;n--)
        	{
			
            		if(sort(names,n,min)==min)  //checking for min alphabet
         	   	{
				
                		strcpy(temp,names[n]);
                		strcpy(names[n],names[min]);
                		strcpy(names[min],temp);
				              		
				Temp=marks[n];
                		marks[n]=marks[min];
                		marks[min]=Temp;
                		min=n;          //storing in temporary variable and then swapping
            		}
			
            		else if(sort(names,n,min)==n) 
            		{
            	    		break;       //if already in order then no need to arrange
            		}
        	}

    	}
	
	printf(" Marks    Names\n\n");
	for(i=0;i<=15;i++)
	{
		printf(" %d	  %s\n",marks[i],names[i]); //for displaying result
	}
}


int sort(char a[][255],int p,int q)
{
	
	int i;
	
	for(i=0;;i++)
	{
		
		if(a[p][i]=='\0' && a[q][i]!='\0') return p;  //givng conditions for result and swappping
		if(a[p][i]!='\0' && a[q][i]=='\0') return q;
		if(a[p][i]=='\0' && a[q][i]=='\0') return p;  
		if(a[p][i]<a[q][i]) return p;
		if(a[q][i]<a[p][i]) return q;
	}
}



