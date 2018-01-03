#include<p18f45k80.h> 

void delay(unsigned int);

void delay(unsigned int time)
{
	int i;
	for(i=0;i<time;i++)
	Nop();
}
 
 TRISAbits.TRISA4 = 0; 

void main()
{
	TRISA=0X00;
	PORTA=0XFF;
	
	while (1)
	{
		PORTA=0XFF;
	
		delay(1000);
		PORTA=0X00;
		delay(100);
		
		
	}
	
}

