#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getExtension(char*, char*);

int main(int argc, const char* argv[])
{
	int shift = atoi(argv[1]);
	int byte, i, x, y;
	char b;
	char filename[255];
	char newFilename[255];
	char ext[25];
	FILE *f_in;
	FILE *f_out;

	strcpy(filename, argv[2]);
	strcpy(newFilename, filename);
	getExtension(ext, filename);
	
	
	if (strcmp(ext, "enc") == 0)
		{
		//We have encrypted file here.
		for (y=shift; y<23; y++)
		{
		;
		newFilename[strlen(newFilename) - 4] = '\0';
		f_in = fopen(filename, "r");
		strcat(newFilename, ".dec");
		f_out = fopen(newFilename, "w");		
		for (i = 0; (byte = getc(f_in)) != EOF; i++)
		{
			fputc(byte - y, f_out);
		}
		fclose(f_out);
		f_out = fopen(newFilename, "r");
		if (feof==1)
			rewind;
		printf("%i: ", y);
		for(i=0; (i<15) || ((b =getc(f_out)) !=EOF); i++) 
		{
			printf("%c", b);
		}
		putchar('\n');
		}
		}
	
	else
	{
		//We want to encrypt this here.
		f_in = fopen(filename, "r");
		strcat(newFilename, ".enc");
		f_out = fopen(newFilename, "w");
		for (i = 0; (byte = getc(f_in)) != EOF; i++)
		{
			fputc(byte + shift, f_out);
		}
	}
	fclose(f_in);
	fclose(f_out);	
	
	return 0;
}

void getExtension(char* ext, char* file)
{
	int i, j = 0;
	for (i = strlen(file) - 1; i >= 0; i--)
	{
		if(file[i] == '.')
			break;
		ext[j] = file[i];
		j++;
	}
	ext[j] = '\x0';
	strrev(ext);
}