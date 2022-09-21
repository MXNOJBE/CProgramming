#include<stdio.h>
#include<string.h>

void paragraph(char str[100])
{
	int i,count=0;
	if(str[i]!='\0')
	{
	count=1;
	for(i=0;str[i]!='\0';i++)
	{
		//printf("%s",str[i]);
		if(str[i]=='.' && str[i+1]==' ')
		count=count+1;
	}}

	
	printf("\n Number of sentances in the paragraph is %d\n\n",count);
}
void word(char str[100])
{
	int i,count=1;
	for(i=0;str[i]!='\0';i++)
	{
		//printf("%s",str[i]);
		if(str[i]==' '&& str[i+1]!='\0')
		count=count+1;
	}
	printf("\n Number of word in the paragraph is %d\n\n",count);
}
void replace(char str[100])
{
	char str1[100],str2[100],str3[100];
	int l1,l2,l3,i,j,*find;
	printf("\nEnter the word to replaced : ");
	scanf("%s",&str1);
	l1=strlen(str1);
	find=strstr(str,str1);
	if(strstr(str,str1)==0)
	{
		printf("\nWord not Found\n\n");
	}
	else
	{
		strcpy(str3,find);
		l2=strlen(find);
		printf("\nEnter the new word : ");
		scanf("%s",&str2);
		l3=strlen(str2);
		j=l1;
		for(i=l3;str3[j]!='\0';i++)
		{
			str2[i]=str3[j];
			j++;
		}
		strcpy(find,str2);
		printf("\nThe new paragraph is :  %s\n\n",str);
	}
}
void check(char str[100])
{
	int i,count=0;
	if(str[i]=='A')
	{
	count=1;
	for(i=0;str[i]!='\0';i++)
	{
		//printf("%s",str[i]);
		if(str[i]==' ' && str[i+1]=='A')
		count=count+1;
	}}
	else
	{
		for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i+1]=='A')
		count=count+1;
	}
	}
	printf("\n Number of word starting with A in the paragraph is %d\n\n",count);
} 
int main()
{
	int choice,n;
	char str[100],neww[100],old[100];
	printf("Enter the Paragraph  : ");
	gets(str);
	menu:
	{
		printf("\n1) Find the number of sentences in the paragraph\n2) Find the number of words in the paragraph");
		printf("\n3) To replace an existing word in the paragraph with a new word");
		printf("\n4) To display the count of words starting with the letter A\n5) Exit");
		printf("\nEnter your Choice : ");
		scanf("%d",&choice);
		if(choice==1)
		{
			paragraph(str);
			goto menu;
		}
		else if(choice==2)
		{
			word(str);
			goto menu;
		}
		else if(choice==3)
		{
			replace(str);
			goto menu;
		}
		else if(choice==4)
		{
			check(str);
			goto menu;
		}
		else if(choice==5)
		{
			printf("~~~~~~~~~~~END~~~~~~~~~");
		}
		else if(choice!=5)
		goto menu;
	}
}
