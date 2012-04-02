/* Write a function expand(s1,s2) that expands shorthand notations like a-z in
the string s1 into the equivalent complete list abc...xyz in s2. Allow for
letters of either case and digits, and be prepared to handle cases like a-b-c
and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally. */

#include<stdio.h>
#define MAX 100
void expand(char s1[], char s2[]);
main()
{
	char s1[MAX],s2[MAX];
	printf("Enter the string  \n");
        gets(s1);
        expand(s1,s2);
        printf("%s\n",s2);
}

void expand(char s1[],char s2[])
{
	int i=0,j=0,c;
	for(i,j;(c=s1[i])!='\0';i++){
		if(s1[i] < s1[i+2] && s1[i+1] =='-'){
			while(c<s1[i+2])
				s2[j++]=c++;
			++i;
		}
		else
		s2[j++]=c;

	}
	s2[j]='\0';
}	
