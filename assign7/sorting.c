#include <stdio.h>
#include <string.h>
#define MAXLENGTH	255

int main()
{
		
	char names[][MAXLENGTH] = {"Nithin James", "Sumanthsamrat Pedapudi", "Pallela V Suryanarayana", "Aravind P.A.", "Rashmi M"};
	char temp[MAXLENGTH];
	int marks[]={75,80,73,81,83};

	for(int i = 0; i < 5; ++i)
	{
          for(int j = i+1; j < 5 ; ++j)
	   {
            if(strcmp(names[i], names[j]) > 0)
	     {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
          }
       }

	printf("\nIn the lexicographical order: \n");
	for(int i = 0; i < 5; ++i)
	{
       fputs(names[i], stdout);
	printf("\n");
	}


return 0;
}
