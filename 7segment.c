#include<reg51.h>
#define sevensgement_data P1

sbit DISP1_sel=P0^3;
sbit DISP2_sel=P0^2;
sbit DISP3_sel=P0^1;
sbit DISP4_sel=P0^0;

sbit lcd_back_light =P0^7;



//extern void port_init(void);
void delay_ms(unsigned int );

void main(void)
{
	unsigned char count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0;
	unsigned bcd_code[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};

  	//initilise all the port

			do
			{
				do
				{
					do
					{
						do
						{
							do
							{
								DISP1_sel=0;		 		//display firest digit
								sevensgement_data=bcd_code[count1];
								delay_ms(2);
								DISP1_sel=1;
								
								DISP2_sel=0;		 		//display second digit
								sevensgement_data=bcd_code[count2];
								delay_ms(2);
								DISP2_sel=1;
								
								DISP3_sel=0;		 		//display thired digit
								sevensgement_data=bcd_code[count3];
								delay_ms(2);
								DISP3_sel=1;
								
								DISP4_sel=0;		 		//display fourth digit
								sevensgement_data=bcd_code[count4];
								delay_ms(2);
								DISP4_sel=1;
								
																
							    count0+=1;
							}while(count0<=25);

								
					
							 count0=0;
							 count1 +=1;
						}while(count1<=9);

						count1 =0;
						count2 +=1;
					}while(count2<=9);

						
					count2 =0;
					count3 +=1;
				}while(count3<=9);
				count3 =0;
				count4 +=1;
			}while(count4<=9);
			count4 =0;
			

	while(1); //terminate the program

}		

void delay_ms(unsigned int itime)
{
	unsigned int i,j;
	for(i=0;i<itime;i++)
	for(j=0;j<100;j++);
	
}
