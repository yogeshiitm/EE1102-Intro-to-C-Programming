//Yogesh Agarwala_EE19B130
//Program to arrange hostel name in lexicographical order 
//And within each hostel arrangement room no in ascendig order
//We have 26 name of student and hostel name and room no of each students

#include<stdio.h>
#include<string.h>
#define MAXLENGTH 255

struct student_record
{
char *names;
char *rollno;
char *hostel;
int roomno;
};

int main()
{

int n=26;
struct student_record s[26], temp;

//Giving the input of names,rollno,hostel,roomno
char names[][MAXLENGTH]={"Sarat Chandra","Krishnadevraj","Ashok Kumar","Nikhil Bandwale","Ashish Krishna","Ishaque","Karthik Rao","Gowtham","Naveen Kumar","Harshad Madhukar","Girish P","Pravinth Samuel","Rajan Gupta","Rohith Teja","Sagar Dewan","Shweta Ghosh","Siva Krishna M","Vemula Achuth","Venkata Janendra","Ananda Narayanan","Archan Kumar","Gade Sumanth","Gaurav Gupta","Jayanth Chintapalli","Maitrey Shridhar","Mallikarjuna K"};


char rollno[][MAXLENGTH]= {"EE07B089","EE07B049","EE07B051","EE07B005","EE07B085","EE07B064","EE07B020","EE07B061","EE07B054","EE07B002","EE07B073","EE07B030","EE07B039","EE07B008","EE07B017",
 "EE07B079","EE07B033","EE07B067","EE07B045","EE07B014","EE07B048","EE07B027","EE07B058","EE07B076","EE07B023","EE07B070"};


char hostel[][MAXLENGTH]={"Kaveri hostel","Tunga hostel","Bhadra hostel","Kaveri hostel","Tunga hostel","Alaknanda hostel","Bhadra hostel","Bhadra hostel","Tunga hostel","Kaveri hostel","Bhadra hostel","Alaknanda hostel",
"Alaknanda hostel","Sabarmati hostel","Sabarmati hostel","Sabarmati hostel","Sabarmati hostel","Kaveri hostel","Brahmaputra hostel","Alaknanda hostel","Brahmaputra hostel",
"Brahmaputra hostel","Bhadra hostel","Tunga hostel","Brahmaputra hostel","Bhadra hostel"};

int roomno[]={6,9,6,5,3,7,8,11,1,1,9,4,10,2,8,7,1,10,2,6,9,10,3,2,11,5};


//Using selection sort to arrange the hostel names in lexicographic order and also roomno in increasing order
for(int i=0;i<n;i++)
	{
	  s[i].names=names[i];
	  s[i].rollno=rollno[i];
	  s[i].hostel=hostel[i];
	  s[i].roomno=roomno[i];
	}


//comparing the hostel names and arranging them in lexicographic order
for(int i=0;i<n;i++)
    {
	char maxh[MAXLENGTH];
	strcpy(maxh,s[i].hostel);
	int maxr=s[i].roomno;
	int index=i;
	int j;
     
	for(j=i+1;j<n;j++)
	{
	    if(strcmp(s[j].hostel,maxh)<0)
	    {
	    strcpy(maxh,s[j].hostel);
	    maxr=s[j].roomno;
	    index =j;
	    }

	//Arranging the roomno in increasing order if hostel names are equal
	    else if(strcmp(s[j].hostel,maxh)==0)
	    { 
	       if(maxr>s[j].roomno)
	       {
	       maxr=s[i].roomno;
	       index=j;
	       }
	    }
	}

	//Swapping the structures as per the above selection sort function
	temp=s[i];
	s[i]=s[index];
	s[index]=temp;
    }


//printing the output after arranging
	printf("\n%20s\t%8s\t%20s\t%s \n\n","Student Name", "Roll Number", "Hostel Name", "Room No.");
	
	for(int i=0;i<n;i++)
	printf("%20s\t%8s\t%20s\t%d \n",s[i].names,s[i].rollno,s[i].hostel,s[i].roomno);


return 0;
}

