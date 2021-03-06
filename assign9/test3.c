#include<stdio.h>
#include<string.h>

struct student_record
{
char StudentName[255];
char RollNumber[8];
char HostelName[255];
int RoomNumber;
};

int main()
{

int i,j;
struct student_record s[26];
struct student_record temp;
     
struct student_record s[0]= {"Sarat Chandra",	"EE07B089",	"Kaveri Hostel",	6}; //don't write integer within ""
s[1]= {"Krishnadevraj",	"EE07B049",	"Tunga Hostel",	9};
s[2]= {"Ashok Kumar",	"EE07B051",	"Bhadra Hostel",	6};
s[3]= {"Nikhil Bandwale",	"EE07B005",	"Kaveri Hostel",	5};
s[4]= {"Ashish Krishna",	"EE07B085",	"Tunga Hostel",	3};
s[5]= {"Ishaque",	"EE07B064",	"Alakananda Hostel",	7};
s[6]= {"Karthik Rao",	"EE07B020",	"Bhadra Hostel",	8};
s[7]= {"Gowtham",	"EE07B061",	"Bhadra Hostel",	11};
s[8]= {"Naveen Kumar",	"EE07B054",	"Tunga Hostel",	1};
s[9]= {"Harshad Madhukar",	"EE07B002",	"Kaveri Hostel",	1};
s[10]= {"Girish P",	"EE07B073",	"Bhadra Hostel",	9};
s[11]= {"Pravinth Samuel",	"EE07B030",	"Alakananda Hostel",	4};
s[12]= {"Rajan Gupta",	"EE07B039",	"Alakananda Hostel",	10};
s[13]= {"Rohith Teja",	"EE07B008",	"Sabaramati Hostel",	2};
s[14]= {"Sagar Dewan",	"EE07B017",	"Sabaramati Hostel",	8};
s[15]= {"Shweta Ghosh",	"EE07B079",	"Sabaramati Hostel",	7};
s[16]= {"Siva Krishna M",	"EE07B033",	"Sabaramati Hostel",	1};
s[17]= {"Vemula Achuth",	"EE07B067",	"Kaveri Hostel",	10};
s[18]= {"Venkata Janendra",	"EE07B045",	"Brahmaputra Hostel",	2};
s[19]= {"Ananda Narayanan",	"EE07B014",	"Alakananda Hostel",	6};
s[20]= {"Archan Kumar",	"EE07B048",	"Brahmaputra Hostel",	9};
s[21]= {"Gade Sumanth",	"EE07B027",	"Brahmaputra Hostel",	10};
s[22]= {"Gaurav Gupta",	"EE07B058",	"Bhadra Hostel",	3};
s[23]= {"Jayanth Chintapalli",	"EE07B076",	"Tunga Hostel",	2};
s[24]= {"Maitrey Shridhar",	"EE07B023",	"Brahmaputra Hostel",	11};
s[25]= {"Mallikarjuna K",	"EE07B070",	"Bhadra Hostel",	5};
     


     for(i=0;i<26;i++)
     {
          for(j=i+1;j<26;j++)
          {
               if(strcmp(s[i].StudentName,s[j].StudentName)>0)
               {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=t;
               }
          }
     }

     printf("\nData after rearrangement\n");
     printf("Student Name\tRoll Number\tHostel Name\tRoom Number\n");

     for(i=0;i<26;i++)
     {
          printf("\n%s\t%s\t%s\t%d\n",s[i].StudentName,s[i].RollNumber,s[i].HostelName,s[i].RoomNumber);
     }
     return 0;
}
