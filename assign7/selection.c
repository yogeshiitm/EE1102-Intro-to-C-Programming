//Yogesh Agarwala_EE19B130
//a program that stores lists of names and their marks in parallel arrays and sorts the names into alphabetical order keeping the marks with the correct names
// sorting using selection sort method

	

#include <stdio.h>
#include <string.h>
#define MAXLENGTH 255
int sort(char a[][255],int ,int);


int main()
{
	
	
char names[][MAXLENGTH]={"Nithin James","Sumanthsamrat Pedapudi","Pallela V Suryanarayana","Aravind P.A","Durgum Khasim Hussain","Bharath L.R","Sreekanth V P","Thallam Srinivasarao","Joshi Bhargav Bharatbhai","Amardeep Dewangan","Umashankar G","Arjun Bharadwaj","Anup Kulkarni","Balakrishna Reddy","Dhivagar","Rashmi M"},temp[MAXLENGTH];
	
	int marks[MAXLENGTH]={75,80,73,81,60,90,95,64,78,82,86,83,84,72,68,83};
	int i,n,min,index,Temp; //declaring names and marks of students
	
	for(i=0;i<=15;i++)
	{
		
		index=i;
		min=i;
		
		for(n=i+1;n<=15;n++)
		{if(sort(names,min,n)==n)  min=n;} 
		

		//checking for min in names storing in temp variable and swapping
		strcpy(temp,names[index]); 
		strcpy(names[index],names[min]);
		strcpy(names[min],temp);
		
		Temp=marks[index];
		marks[index]=marks[min];
		marks[min]=Temp;
	}
	
	//pprinting the result
	printf(" Marks   Names\n\n");
	for(i=0;i<=15;i++)
	{printf(" %d      %s\n",marks[i],names[i]);}

return 0;
}



int sort(char a[][255],int p,int q){
//taking result after swapping
	
	int i;
	for(i=0;;i++)
	{
		//conditions for result and swapping
		if(a[p][i]=='\0' && a[q][i]!='\0') return p; 
		if(a[p][i]!='\0' && a[q][i]=='\0') return q;
		if(a[p][i]=='\0' && a[q][i]=='\0') return p;
		if(a[p][i]<a[q][i]) return p;
		if(a[q][i]<a[p][i]) return q;
	}
}

			
			


