/* Convert n to characters in s , w characters wide */

#include<stdio.h>
#define MAX 25
#define abs(x)  ((x)<0? -(x) : (x))
void itoa(int n, char str[], int w);
void reverse(char str[]);
main()
{
	int n,width;
	char str[MAX];
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter the width : ");
	scanf("%d",&width);
	itoa(n,str,width);
	reverse(str);
	printf("%s\n",str);
}

void itoa(int n, char str[], int w)
{
	int sign,i=0;
	sign=n;
	do{
		str[i++]=abs(n%10)+'0';
	} while((n/=10)!=0);
	if(sign <0)
		str[i++]='-';
	while(i < w)
		str[i++]=' ';
	str[i]='\0';
}

void reverse(char str[])
{
	int i,j;
	char c;
	for(i=0,j=strlen(str)-1;i<j;i++,j--){
		c=str[i];
		str[i]=str[j];
		str[j]=c;
	}
}
	
