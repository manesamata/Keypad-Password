#include<reg51.h>
sbit r0=P1^0;
sbit r1=P1^1;
sbit r2=P1^2;
sbit r3=P1^3;
sbit c0=P1^4;
sbit c1=P1^5;
sbit c2=P1^6;
sbit c3=P1^7;
sbit led=P2^0;

void delay(void);
void main()
{
	unsigned int pass[4],i;
	led=0;
	while(i<4)
	{
		r0=0;
		r1=r2=r3=1;
		if(c0==0)
		{
			pass[i]=1;
			i++;
		}
		r0=0;
		r1=r2=r3=1;
		if(c1==0)
		{
			pass[i]=2;
			i++;
		}
		r0=0;
		r1=r2=r3=1;
		if(c2==0)
		{
			pass[i]=3;
			i++;
		}
		r1=0;
		r0=r1=r2=1;
		if(c0==0)
		{
			pass[i]=4;
			i++;
		}
		r1=0;
		r0=r2=r3=1;
		if(c1==0)
		{
			pass[i]=5;
			i++;
		}
		r1=0;
		r0=r2=r3=1;
		if(c2==0)
		{
			pass[i]=6;
			i++;
		}
		r2=0;
		r1=r0=r3=1;
		if(c0==0)
		{
			pass[i]=7;
			i++;
		}
		r2=0;
		r1=r0=r3=1;
		if(c1==0)
		{
			pass[i]=8;
			i++;
		}
		r2=0;
		r0=r1=r3=1;
		if(c2==0)
		{
			pass[i]=9;
			i++;
		}
		r3=0;
		r0=r1=r2=1;
		if(c1==0)
		{
			pass[i]=0;
			i++;
		}
		delay();
	}
	{
	if ((pass[0]==1)&&(pass[1]==7)&&(pass[2]==0)&&(pass[3]==6))
	{
		led=1;
	}
	else
	{
		led=0;
	}
}
}
void delay (void)
{
	int i,j;
	for(i=0;i<200;i++)
	{
		for(j=0;j<200;j++)
		{
		}
	}
}

