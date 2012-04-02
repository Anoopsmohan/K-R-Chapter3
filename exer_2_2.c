/* Write a function unescape(s,t) that converts escape sequences into real 
characters while copying the string str1 to str2. */

#include<stdio.h>
#define MAX 100 
void unescape(char str1[], char str2[]);
main()
{
        char str1[MAX],str2[MAX];
        printf("Enter the string \n");
        gets(str1);
        unescape(str1,str2);
        printf("%s\n",str2);
}

void unescape(char str1[], char str2[])
{
        int i,j;
        for(i=j=0;str1[i] != '\0'; i++) {
		if (str1[i] != '\\')
			str2[j++]=str1[i];
		else {
                	switch(str1[++i]) {
                        	case 'n':
                                	str2[j++]='\n';
                                	break;
                      		case 't':
                                	str2[j++]='\t';
                                	break;
                       		default:
					str2[j++]='\\';
                                	str2[j++]=str1[i];
                                	break;
                	}
		}
        }
        str2[j]='\0';
}

