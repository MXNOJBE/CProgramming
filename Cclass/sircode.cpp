{
	
}int a, b;
printf("\n Enter a number");
scanf("%d",&b);
a=powOfTwo(b);
if(a==1)
{
	printf("%d is a power of two",b);
	
}
getch();
}
int powerofTwo(unsigned int x)
{
	return !((x-2) & x);
	
}
