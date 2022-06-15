#include <stdio.h>
main()
{
	char a[1500][1500],z[1500][1500];
	int b,c,d,e,f,g,h,i,j,k,l,m,n,x=0;
	scanf("%d",&b);
	for(c=1;c<=b;c++)
	{x=0;
	
		scanf("%d %d",&d,&e);
	for(f=1;f<=d;f++)
	{
		scanf("%s",a[f]);}
	
	scanf("%d %d",&h,&i);
	for(f=1;f<=h;f++)
		{
		scanf("%s",z[f]);}
		for(f=1;f<=d&&x<1;f++)
	{
	for(g=0;g<e&&x<1;g++)
		{
		if(a[f][g]==z[1][0])
			{l=0;
		j=f;
	    k=g;
	 for(m=1;m<=h;m++)
	{k=g;
	for(n=0;n<i;n++)
    {if(z[m][n]==a[j][k])
    	 l=l+1;
    	 else
    	 break;
    	 k=k+1;}
    	 j=j+1;}
    	 
    	 if(l==h*i)
    	    x=x+1;}}}
    	    if(x==1)
    	      printf("YES\n");
    	    else
    	    printf("NO\n");}}
