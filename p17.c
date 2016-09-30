include <stdio.h>
int main(void) {
char a[40]="1940985421";
int l,k=0,i;
l=strlen(a);
for(i=0;i<l;)
if(k<=2)
{
printf("%c",a[i]);
k++; i++;
}
else
{
printf(".");
k=0;
}
	return 0;
}

