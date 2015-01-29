#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getExtension(char*, char*);

int main(int argc, const char* argv[])
{
	int shift = atoi(argv[1]);
	int n =0;
	int byte, i;
	char filename[255];
	char newFilename[255];
	char print [255];
	char ext[25];
	FILE *f_in;
	FILE *f_out;
	
	strcpy(filename, argv[2]);
	strcpy(newFilename, filename);
	getExtension(ext, filename);
	
	if(strcmp(ext, "enc") == 0)
		{
			// we have an encrypted file
			newFilename[strlen(newFilename)-4] = '\0';
			f_in=fopen(filename, "r");
			strcat(newFilename, ".dec");
			f_out=fopen(newFilename, "w");
			for(n=0; n<26; n++)
			{
				for (i=0; (byte = getc(f_in)) !=EOF; i++)
				{
				fputc(byte - n, f_out);
				}
				if (feof==1)
				{
					rewind;
				}
				while(!feof(f_out)) // while not end of file
				{
				fscanf(f_out, "%s", print); //prints characters to a space
				printf("%i ",n);
				puts(print);
				}
			}
			for(n=0; n < -26; n--)
			{
				for (i=0; (byte = getc(f_in)) !=EOF; i++)
				{
				fputc(byte - n, f_out);
				}
				if (feof == 1)
				{
					rewind;
				}
				while(!feof(f_out)) // while not end of file
				{
				fscanf(f_out, "%s", print); //prints characters to a space
				printf("%i ",n);
				puts(print);
				}
			}
		}
	else
	{
		//encrypt here
		f_in = fopen(filename, "r");
		strcat(newFilename, ".enc");
		f_out = fopen(newFilename, "w");
		for (i=0; (byte = getc(f_in)) !=EOF; i++)
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
	int i, j=0;
	for(i = strlen(file) - 1;i >= 0;i--)
		{
			if(file[i] == '.')
			break;
		ext[j] = file[i];
		j++;
		}
	ext[j] ='\x0';
	
	strrev(ext);

}