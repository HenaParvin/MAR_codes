// smallest between 3 numbers ; copyright : Hena Parvin
#include<stdio.h>
int main()
{
	int a,b,c,i=1;
	printf("a b c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
			printf("%d\n",a);
		else
			printf("%d\n",c);
	}
	if(b<a)
	{
		if(b<c)
			printf("%d\n",b);
		else
			printf("%d\n",c);
	}
return 0;
}
