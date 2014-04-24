#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include  <signal.h>

void INThandler(int);

int main(void)
{
     signal(SIGINT, INThandler);
     while (1)
          printf("In While Loop...\n");
     return 0;
}

void  INThandler(int sig)
{
     char  c;
     
     signal(sig, SIG_IGN);
     printf("OUCH, did you hit Ctrl-C?\n"
            "Do you really want to quit? [y/n] ");
     getchar();
          exit(0);
}
/*int main() 
{
	
	/*int slave_id_array[] = {14,10,0,0,0,0,0,0,0,0};
	int temp_id_array[] = {14,17,19,10,0,0,0,0,0,0};
	int i,flag,j;
	int slave_id_count = 2;
	for(i = 0; i < 10; i++)
	{
		flag = 0;
		for(j = 0; j < 10; j++)
		{
			if(temp_id_array[i] == slave_id_array[j])
				flag = 1;
		}
		if(!flag && temp_id_array[i] != 0)
			slave_id_array[slave_id_count++] = temp_id_array[i];
	}
	
	for(i = 0; i < slave_id_count; i++)
	{
		flag = 0;
		for(j = 0; j < 10; j++)
		{
			if(temp_id_array[j] == slave_id_array[i])
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
		{
			slave_id_array[i] = 0;
		}
	}
	
	for(i = 0; i < 10 ; i++)
	{
		if(slave_id_array[i] == 0)
		{
			int j;
			for(j = i; j < 9; j++)
			{
				int temp = slave_id_array[j];
				slave_id_array[j] = slave_id_array[j+1];
				slave_id_array[j+1] = temp;
			}
		}
	}
	
	for(i = 0; i < 10 ; i++)
		printf("%d\t",slave_id_array[i]);
	printf("\n");
	for(i = 0; i < 10 ; i++)
		printf("%d\t",temp_id_array[i]);
	printf("\n");
	
	/*int i;
	for(i = 0; i < sizeof(a)/4 ; i++)
	{
		if(a[i] == 0)
		{
			int j;
			for(j = i; j < (sizeof(a)/4 - 1); j++)
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for(i = 0; i < sizeof(a)/4 ; i++)
		printf("%d\t",a[i]);
	printf("\n");
	
	/*char comm[100];
	sprintf(comm,"ls /%s","home/mridul");
	system(comm);
	int a;
	printf("Int: ");
	scanf("%d",&a);
	
	char snum[5];
	
	sprintf(snum, "%d", a);
	printf("String is %s\n\n",snum);
	printf("Enter string : ");
    char abc[100];
    fgets(abc,99,stdin);
    
    char *point,*temp = abc-1;
    
    while((point = (char *)strstr(temp+1, "id")) != NULL)
    {
    	temp = point;
    	char num[10]="";
    	char temp[2]="";
    	point = point + 3;
    	while(!isspace(*point))
    	{
    		temp[0] = *point;
    		strcat(num,temp);
    		point++;
    	}
    	printf("%d\n",atoi(num));
    }
    return(0);
}*/
