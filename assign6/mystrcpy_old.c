//Yogesh Agarwala_EE19B130
//my strcpy funtion
//function to copy any string1 to string2


//input type char but output type string
const char * mystrcpy(char string[256])
{
	int i;
	char string2[256];


	//assigning string2 the same values as in string1 until string1 reaches '\n' 
	for(i = 0; string[i] != '\0'; ++i)
       string2[i] = string[i]; 

	
	const char *x = string2;	
	return x;
}
