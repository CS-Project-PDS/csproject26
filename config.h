//config.h: Configuration settings

extern char read_myown_config(void)//num_value is used to record settings for random and standard play
{
	char num_value;
	FILE *fconf;//file pointer to configuration file
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	fseek(fconf,4L,SEEK_SET);
	fread(&num_value,sizeof(char),1,fconf);
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
	return num_value;
}

extern void write_myown_config(char n)//r is used to record settings for random and standard play
{
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	fseek(fconf,4L,SEEK_SET);
	fwrite(&n,sizeof(char),1,fconf);
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
}

extern char read_conf_mode(void)//num_value is used to record settings for random and standard play
{
	char num_value;
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	fseek(fconf,1L,SEEK_SET);
	fread(&num_value,sizeof(char),1,fconf);
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
	return num_value;
}

extern void write_conf_mode(char n)//r is used to record settings for random and standard play
{
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	fseek(fconf,1L,SEEK_SET);
	fwrite(&n,sizeof(char),1,fconf);
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
}

extern char read_conf_block_read(void)//num_value is used to record settings for random and standard play
{
	char num_value;
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	fseek(fconf,2L,SEEK_SET);
	fread(&num_value,sizeof(char),1,fconf);
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
	return num_value;
}

extern void write_conf_block_read(unsigned int n)//r is used to record settings for random and standard play
{
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	fseek(fconf,2L,SEEK_SET);
	fwrite(&n,sizeof(char),1,fconf);
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
}

extern char sound_config_read(void)//num_value is used to record settings for random and standard play
{
	char num_value;
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	fseek(fconf,3L,SEEK_SET);
	fread(&num_value,sizeof(char),1,fconf);
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
	return num_value;
}

extern void sound_config_write(unsigned int n)//r is used to record settings for random and standard play
{
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	fseek(fconf,3L,SEEK_SET);
	fwrite(&n,sizeof(char),1,fconf);
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
}

//writing message configuration to config file
extern void write_message_conf(char n)//r is used to record settings for random and standard play
{
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	rewind(fconf);
	fwrite(&n,sizeof(char),1,fconf);
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
}
extern short unsigned int first_time(void)
{
	FILE *fconf;
    char num_test=8;//value different from 0 or 1
	if((fconf=fopen("cmdtypist.conf", "rb+"))==NULL)//opening the file storing information on first time display.
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(1);
	}	
    rewind(fconf);//move to beginnning of the file
    fread(&num_test,sizeof(char),1,fconf);
    return num_test;
    fclose(fconf);
}
extern void confirm_user_exist(void)
{
	char num_test=1;
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
    {
    	fprintf(stderr, "%s\n", "Unable to read configuration file");
    	exit(EXIT_FAILURE);
    }
    rewind(fconf);
    fwrite(&num_test,sizeof(char),1,fconf);
	if(fclose(fconf)!=0)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
		exit(2);
	}
}
/*This function opens a binary file on which zero was initally written, it then checks if the zero is still there, 
if yes then it is the first time the program is being opened  and then replaces the zero with 1*/
extern void read_message_conf(void) {
    if (first_time() == 0) {
        system("clear");
        FILE *fconf;
        printf("%s\n", "============================WELCOME!!!============================");
        printf("\n\t\t\tCOMMAND TYPIST\n\nPractice and improve your typing speed, no need to exit your terminal "
               "\nVersion 1.01 developed for Programming and Data Structures project, Spring 2024 at IITP "
               "\n\nContact chaitanya_2301me13@iitp.ac.in for any issues or doubts regarding this project.\n");

        printf("\nPress ENTER to continue");
        while ((ch = getchar()) != '\n'); // Use getchar() to clear input buffer

        printf("\nFirst time tip:\n Enter \"select lesson-number\" when prompted for a command; lesson-number=valid lesson number"
               "\n\n Have a look at the help menu? You can revisit it later using \"cmdtypist --help\" command [y/n]: ");
        if (get_only_char() == 'y') {
            if ((fconf = fopen("help.md", "r")) == NULL) {
                fprintf(stderr, "Error: Unable to find help menu\n");
            } else {
                printf("\n\n");
                while ((ch = getc(fconf)) != EOF)
                    putchar(ch);
                printf("\n");
                fclose(fconf);
            }
        }
        printf("\nPress ENTER to continue");
        while ((ch = getchar()) != '\n'); // Use getchar() to clear input buffer
    }
}

extern void waiting(char *wait_style)//style in waiting for input.
	{
		    printf("%s",wait_style);
		    fflush(stdout);
			sleepf(1);
			printf("%s","." );
			fflush(stdout);
			sleepf(1);
			printf("%s","." );
			fflush(stdout);
			sleepf(1);
			printf("%s","." );
			letter_clear(3);
		    fflush(stdout);
			sleepf(1);
			printf("%s","." );
			fflush(stdout);
			sleepf(1);
			printf("%s","." );
			fflush(stdout);
			sleepf(1);
			printf("%s","." );			
	}

//helps to adapt to version by solving problem of erasing a character
//writes one or 
extern char adapt_to_ver(void)//num_value is used to record settings for random and standard play
{
	char num_value,n;
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	fseek(fconf,5L,SEEK_SET);
	fread(&num_value,sizeof(char),1,fconf);
	fseek(fconf,-1,SEEK_CUR);
	//num_value=2;//first time value writing, to be commented
	if(num_value==1)
	{
		num_value=2;
		fwrite(&num_value,sizeof(char),1,fconf);
	}
	else if(num_value==2)
	{
		num_value=1;
		fwrite(&num_value,sizeof(char),1,fconf);
	}
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
	return num_value;
}

extern char adapt_to_ver_read(void)//num_value is used to record settings for random and standard play
{
	char num_value;
	FILE *fconf;
	if((fconf=fopen("cmdtypist.conf","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	fseek(fconf,5L,SEEK_SET);
	fread(&num_value,sizeof(char),1,fconf);
	if(fclose(fconf))
	{
		fprintf(stderr, "%s\n", "Fatal Error, Unable to close some files\n");
	    exit(EXIT_FAILURE);
	}
	return num_value;
}
