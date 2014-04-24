#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void output(char* command)
{
    FILE *in;
//    char buff[512];
char buff[512] = "";
    char line[50];
    if(!(in = popen(command, "r")))
        return;

    while(fgets(line, sizeof(line), in)!=NULL)
	strcat(buff,line);

    pclose(in);

//    return &buff;
}

int main (void)
{
   int i;
   char command[100];

   while(1)
   {
	printf("Enter your command: ");
	fgets (command, 100, stdin);
	printf("%s\n",command);
	output(command);
   	printf("%s",buff);
	buff[0] = '\0';
   }

   return 0;
}

//char* cmd_system(const char* command)
//{
//    char* result = "";
//    FILE *fpRead;
//    fpRead = popen(command, "r");
//    char buf[1024];
//    memset(buf,'\0',sizeof(buf));
//    while(fgets(buf,1024-1,fpRead)!=NULL)
//    {
//        result = buf;
//    }
//    if(fpRead!=NULL)
//       pclose(fpRead);
//    return result;
//}
