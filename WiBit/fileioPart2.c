#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long getFileSize(FILE*);
char* readAllText (char*);

int main ()
{
	FILE *f;
	f = fopen("fopen.txt.", "w");
	fprintf(f, "Hey Buddy!");
	fclose(f);
	
	f = fopen("fopen.txt.", "r");
	char word[255];
	while(!feof(f)) // while not end of file
	{
		fscanf(f, "%s", word); //prints characters to a space
		puts(word);
	}
	fclose(f);

	FILE *g;
	char* txt = "Hey, Dude";
	g = fopen("fwrite.txt", "w");
	fwrite(txt, 1, strlen(txt), g); //writes string to file
	fclose(g);
	
	f = fopen("fwrite.txt.", "r");
	int b;
	for(int i=0; (b =getc(f)) !=EOF; i++) //get character if not end of file
		printf("Byte %d = %X\n", i+1, b);
	fclose(f);
	
	FILE *h;
	char *s ="Hey Buddy111";
	h=fopen("fputc.txt", "w");
	for(int i=0; i<strlen(s);i++)
	{
		printf("%d\n", ftell(h));
		fputc(s[i], h);
	}
	fclose(h);
	
	char* fileData = readAllText("fputc.txt");
	puts(fileData);
	free(fileData);
	
	
	return 0;
}

***********************************************
long getFileSize(FILE *filePointer)
{
	long fSize;
	fseek (filePointer, 0 , SEEK_END);
	fSize = ftell(filePointer);
	rewind(filePointer);
	return fSize;
}

***********************************************
char* readAllText(char* filePath)
{
	FILE *h = fopen(filePath, "r");
	int fileSize = getFileSize(h);
	char* buffer = (char*)malloc(sizeof(char) *fileSize+1);
	fread(buffer, 1, fileSize, h);
	fclose(h);
	return buffer; //buffer is the whole file +1 space
}