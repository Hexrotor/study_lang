/* fopen usage:
 * r means readonly
 * r+ means readwrite, from the HEAD of file
 * w means write only. Create a new file if doesnt exist, else wipe the file data
 * w+ means readwrite. Create a new file if doesnt exist, else wipe the file data
 * a means append.Create a new file if doesnt exist, else add data from the end of file
 * ..x means only create a new file. Return NULL if the file already exists(example: r+a)
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char text[10] = {0};
	printf("Your input: %s\n", argv[1]);
	FILE *file2open = fopen(argv[1],"r");//dir and r/w
	if(file2open){//return null if this file doesnt exist
		//things to do
		fscanf(file2open, "%s", text);
		printf("Read result: %s\n", text);
		fclose(file2open);//close and release this file
	} else {
		printf("Cannot read file");
	}
	return 0;
}
