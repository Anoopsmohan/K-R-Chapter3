/* Write the function itob(n,s,b) that converts the integer n into a base b
 character representation in the string s. In particular, itob(n,s,16) formats
 n as a hexadecimal integer in s. */

#include<stdio.h>
#define N 25
void itob(int n, char str[], int base);
void reverse(char str[]);

main()
{
	int n, base;
	char str[N];
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter base : ");
	scanf("%d",&base);
	itob(n,str,base);
	reverse(str);
	printf("%s\n",str);
}

void itob(int n, char str[], int base)
{
	int sign,i=0,j;
	if((sign=n)<0)
		n=-n;
	do {
		j = n%base;
		str[i++]= (j<=9) ? j+'0' : j+'A'-10;
	} while((n/=base) >0);
	if(sign < 0)
		str[i++]='-';
	else
		str[i]='\0';
}

void reverse(char str[])
{
	int i,j,c;
	for(i=0,j=strlen(str)-1; i<j ; i++,j--) {
		c = str[i];
		str[i]=str[j];
		str[j]=c;
	}
}	

