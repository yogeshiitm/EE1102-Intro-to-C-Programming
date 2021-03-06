//Yogesh Agarwala_EE19B130
//my strlen funtion
//function to find length of any string written in main file


//input type char but output type integer
int mystrlen(char string[256])

{
	int i;

	//i continues to take value until string[i] =='\n'
	for(i=0; string[i] !='\n'; i++);


	//returning the value of i for which string[i] =='\n'
	return i;
}
