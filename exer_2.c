/* Write a function escape(s,t) that converts characters like newline and tab in
to visible escape sequences like \n and \t as it copies the string t to s. */

#include<stdio.h>
#define MAX 100 
void escape(char str1[], char str2[]);
main()
{
	char str1[MAX],str2[MAX];
	printf("Enter the string  \n");
	gets(str1);
	escape(str1,str2);
	printf("%s\n",str2);
}

void escape(char str1[], char str2[])
{
	int i,j;
	for(i=j=0;str1[i] != '\0'; i++) {
		switch(str1[i]){
			case '\n':
				str2[j++]='\\';
				str2[j++]='n';
				break;
			case '\t':
				str2[j++]='\\';
				str2[j++]='t';
				break;
			default:
				str2[j++]=str1[i];
				break;
		}
	}
	str2[j]='\0';
}
