#include<stdio.h>
int main()
{
	int a,b;
	int sum;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
    	sum=a+b;
   if(sum>=0){
   
    if(sum<1000&&sum>=0)
    {
    	printf("%d",sum);
    }
    else if(sum>=1000&&sum<1000000)
    {
    	printf("%d,%03d",sum/1000,sum%1000);
    }
	else
    {
    	printf("%d,%03d,%03d",sum/1000000,(sum/1000)%1000,sum%1000);
    }
    }
    else if(sum<0)
    {
    	sum=-sum;
    	printf("-");
		if(sum<1000&&sum>0)
    {
    	printf("%d",sum);
    }
    else if(sum>=1000&&sum<1000000)
    {
    	printf("%d,%03d",sum/1000,sum%1000);
    }
	else
    {
    	printf("%d,%03d,%03d",sum/1000000,(sum/1000)%1000,sum%1000);
    }
}
}
    return 0;
} 
