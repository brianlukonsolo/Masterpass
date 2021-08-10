#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define BILLION 1000000000

float getval(void);
int section1();
int section2();
int section3();
int section4();
	int writer(); /*used by section 4*/
	int reader(); /*used by section 4*/
int section5();

int main()
{
	char code1[10] = {"mcb"};
	char code2[10];
	int result;
	int menuitem;
	system("color 4");
	
	printf("                    Created by Brian Lukonsolo on [   ] 2013\n");
	/******************************************login**********************************/
	system("color 4");
	
	int count;
	int flag=3,num=0,i;
	flag=0;
	srand(time(NULL));
	time_t start_time, end_time;

	for(count=0; count<1000; count++)
	{
		flag++;

			if(flag<417)
			{
				num=flag+1;
				count=0;
				printf("%d ",(rand()%2));
			}
			
			if(flag==455){printf("MCbrian 2013  ");}
			
			if(flag>500)
			{
				num=flag+1;
				count=0;
				printf("%d ",(rand()%2));
				if(flag>916){break;}
			}
			
			
	}
	start_time = time(NULL);	
	for(i=0; i < BILLION; i++)
	{
		if(i%1000000000==10000000){printf(" login: Commander\n");break;}
	}
	end_time = time(NULL);
	
	
	/****************************************end login***********************************/
	
	
	printf(" Enter authorisation code:");
	
	/*Asks user to enter code*/
	
	scanf("%s", &code2);
	/*while(getchar()!='\n');*/
	result = strcmp(code2, code1);
		
		if(result == 0)
			{
					system("cls");	
					printf("Code Accepted.\n");
					printf("Welcome, Commander.\n\n");
					int mainmenu;
				
					mainpart:
				
					
						printf("The available program Sections are listed below.\n\n");
						/*program sections list below*/
						printf("1 - Section 1 [Confidential]\n");
						printf("2 - Section 2 [Pilot Tools]\n");
						printf("3 - Section 3 [Electronics Calculator]\n");
						printf("4 - Section 4 [Database]\n");
						printf("5 - Section 5 [S7 Encrypter]\n");
						printf("6 - Section 6 \n");
						printf("7 - Section 7 \n\n");
						printf("0 - Exit\n\n\n");

				for(;;) /* MAIN LOOP STARTS HERE*/
				{
						
				
									menuitem = getchar();	
									

									switch(menuitem)
									{
										case '1': system("cls");
												  printf("Accessing Section 1 . . .\n");
												  section1();
												  
												  goto mainpart;
													break;
										case '2': system("cls");
												  printf("Accessing Section 2 . . .\n"); 
												  section2();
							
												  goto mainpart;
													break;
										case '3': system("cls");
												  printf("Accessing Section 3 . . .\n");
												  section3();
												  system("cls");
												  
												  goto mainpart;
													break;
										case '4': while(getchar()!='\n');
												  system("cls");
												  printf("Accessing Section 4 . . .\n");
												  section4();
												  system("cls");
												  
												  goto mainpart;
													break;
										case '5': system("cls");
												  printf("Accessing Section 5 . . .\n");
												  section5();
												  system("cls");
												  goto mainpart;
													break;
													
										case '6': system("cls");
												  printf("Accessing Section 6 . . .\n");
													break;
										case '7': system("cls");
												  printf("Accessing Section 7 . . .\n");
													break;
										case '0':if(menuitem == '0')
													{
														return 0;
													}
													else
													{
														break;
														continue;
													}				
													
										
						
												default: printf("Press 0 then Enter to exit the program.\n");
														
													break;
									
									}
								
							
				
				}
				/*END OF THE FOR(;;) LOOP*/
				
			
			}
		else if(result != 0)
			{
				system("cls");
				printf("\n Access Denied. Press Enter to exit safely.");
				while(getchar()!='\n');
				getchar();
			}
			
	return 0;
}
/*************************************************************************/
/*MAIN SECTION OF PROGRAM COMPLETE. FUNCTIONS LISTED BELOW THIS COMMENT*/
/*************************************************************************/

int section1() /*////////////////FUNCTION FOR SECTION 1 CASE//////////////////*/
{
	int birthdate = 21071992;
	int birthdatetyped;
	int done;
	
	system("cls");
	printf("\n Welcome to Section 1, Commander.\n");
	printf("Please enter your date of birth in the format: ddmmyyyy\n");
	
	scanf("%d", &birthdatetyped);
	while(getchar()!='\n');
	
	if(birthdatetyped == birthdate)
	{
		printf("Identity verification complete.\n");
		printf("\n Section 1 is available for use.\n");
		getchar();
		system("cls");
		
		return 0;	
	}
	else if(birthdatetyped != 21071992);
	{
		printf("\nIdentity verification failed.\n\n");
		printf("Press Enter to go back to main menu.\n");
		getchar();
		system("cls");
		
		return 0;	
	}

	return 0;	
}
/*//////////////////////////////end function for case 1/////////////////////////////*/


int section2()
{
	char menu; /*used by switch*/
	char emptyweight[10], passengers[10], cargo[10], fuel[10];  /*used by case 1*/
	int ew, pax, bag, gas;	
	int grossweight;
	char exit='Q';

	int takeoffweight;
	char taxirunupburn[10];
	int trfuelburn;

	int done;

	char groundspeed[10]; /*used by case 3*/
	char time[10];
	float distance;
	float a;
	float b;
	char zz='q';

	double distance2, speed, windspeed; /*used by case 4*/
	double time2;
	double dist, spd, wind;
	int clock;
	float total;
	char q;	
	int w;
	char z='0';

	for(;;)
	{
		system("cls");
		printf("MasterPilot. Finnished on 6/08/2012 at 01:30am\n");
		printf("Created by Brian Lukonsolo \n\n\n");
		printf("*******************************************************************************\n");
		printf(".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.\n");
		printf("                    Welcome to section 2: Pilot tools.\n");
		printf(".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.\n");
		printf("*******************************************************************************\n");
	
		printf("*******Please select a menu item*******\n\n");
		printf("#WARNING: Do not use these tools for real world flight planning!#\n");
		printf("1 - Calculate aircraft gross weight\n");
		printf("2 - Calculate takeoff weight\n");
		printf("3 - Calculate distance travelled\n");
		printf("4 - Calculate time taken\n\n");
		
		printf("5 - *Go back to main menu*\n");
		
		
		menu=getchar();
		switch(menu)
		{
		
			case '1':	
				system("cls");
				printf("This program calculates the gross weight of your aircraft.\n\n\n");
				printf("*******************************************************************************\n");
				while(getchar()!='\n');
			
				printf("Please enter your aircraft's weight as listed in the weight/balance report :\n");
				ew=atoi(fgets(emptyweight, 10, stdin));
			
				printf("Please enter your total passenger (pax) weight:\n");
				pax=atoi(fgets(passengers, 10, stdin));
			
				printf("Please enter your baggage/cargo weight:\n");
				bag=atoi(fgets(cargo, 10, stdin));
			
				printf("***Aviation gas - 6lbs per gallon**** Jet fuel (JP-4) - 6.6lbs per gallon***\n");
				printf("Please enter your fuel weight:\n");
				gas=atoi(fgets(fuel, 10, stdin));
				
				grossweight=(ew + pax + bag + gas);
				printf("\n\nGROSS WEIGHT = %d pounds\n\n\n", grossweight);
				printf("*********************************************************************************\n");
		
				printf("Press 0 then Enter to quit. Press Enter to continue. . .\n");
				exit=getchar();
				if(exit=='0' || exit=='0')
					{
						return(0);
					}
					else
					{
						break;
						continue;
					}
					
			case '2':
				system("cls");
				while(getchar()!='\n');
				printf("*********************************************************************************\n");
				printf("This program calculates your take-off weight.\n");
				printf("*********************************************************************************\n");
				printf("Please enter your taxi/engine run-up fuel weight:\n");
				trfuelburn=atoi(fgets(taxirunupburn, 10, stdin));
				
				takeoffweight=(grossweight-trfuelburn);
				printf("TAKE-OFF WEIGHT = %d \n", takeoffweight);
				printf("*********************************************************************************\n");
		
				printf("Press 0 then Enter to quit. Press Enter to continue. . .\n");
				exit=getchar();
				if(exit=='0' || exit=='0')
					{
						return(0);
					}
					else
					{
						break;
						continue;
					}
					break;

			case '3':
				system("cls");
				while(getchar()!='\n');
				do
				{
				printf("********************************************************************************\n");
				printf("This program calculates the distance covered during flight.\n\n\n");
				printf("********************************************************************************\n");

				printf("Please enter your speed in knots:\n");
				/*a=atoi(fgets(groundspeed, 10, stdin));*/
				scanf("%f",&a);
				while(getchar()!='\n');

				printf("Please enter the time taken (in hours):\n");
				/*b=atoi(fgets(time, 10, stdin));*/
				scanf("%f",&b);
				while(getchar()!='\n');

				distance=(a*b);
				printf("The distance is %0.3f nautical miles.\n", distance);

				printf("Press 0 then Enter to quit. Press Enter to continue. . .\n");
				exit=getchar();
				if(exit=='0' || exit=='0')
					{
						return(0);
					}
					else
					{
						break;
						continue;
					}
				}
				while(getchar()!='\n');
						break;

			case '4':
					system("cls");
					while(getchar()!='\n');
					do
					{
					printf(".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.\n");
					printf("This program calculates estimated arrival time.\n");
					printf(".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.\n\n");	
				
		
					/**********get information required for calculation**********/
					printf("Please enter your distance from the destination in Nautical Miles :\n");
					distance2=getval();
					dist=distance2;
					/*****(For) type loops to exit program if letters are input*****/
					printf("Please enter your current airspeed :\n");
					speed=getval();
					spd=speed;

					printf("Enter windspeed (- =headwind, + =tailwind) :\n");
					windspeed=getval();
					wind=windspeed;

	

					time2=(distance2/(speed+windspeed));  
					clock=(dist/(spd+wind));

					total=time2 - clock;

					printf("YOU WILL ARRIVE AT YOUR DESTINATION IN %i HOURS\n", clock);
					printf("AND %0.f MINUTES.\n\n\n\n\n", total*60);
					
					printf("press '0' then Enter to quit. Press Enter to continue...\n");
					w=getchar();
					
					
					if(w == z)
					{
						break;
					
					}
					else if(w != z) 
					{
						break;
						continue;
					}
					else
						return(0);
						
				}

				while(w=='Q','q');
				break;
				
			case '5':	system("cls");
						return(0);
						break;

	/*cases end here*/
		}
		
	}
while(getchar()!='\n');
	return(0);

}
/*//////////////////////////////end function for case 2/////////////////////////////*/

float getval(void) ///////////***function called by case 2 function***/////////////
{
	char input[10];
	float x;

	x=atoi(fgets(input, 10, stdin));
	/*atoi(input);*/

	return(x);
}
/*///////////////////////////////end of section 2////////////////////////*/

int section3()
{
	while(getchar()!='\n');
	system("cls");		/*thou shalt clear thy screen*/
	system("color 4");	/*let there be red light!*/
	
	int menu1,exit;
	float current,resistance,voltage,power,vsupply,vfoward,rating;
	
	for(;;)				
	{
		
		printf("****************** Welcome to the Electronics section, commander.***************\n");
		printf("Created by Brian Lukonsolo on 20/08/2013 at 23:26pm.\n");
		printf("Tip: To select an item, type the corresponding number/letter and press Enter.\n\n");
		
		printf("Ohm's Law equations\n");
		printf(" 1 - Calculate Voltage ----------------->[using current, resistance]\n");
		printf(" 2 - Calculate Current ----------------->[using voltage, resistance]\n");
		printf(" 3 - Calculate Resistance -------------->[using voltage, current]\n");
		printf(" 4 - Calculate Resistor rating needed -->[using Vsupply, Vfoward, current]\n");
		printf(" 5 - Calculate Power consumption ------->[using voltage, current]\n");
		printf(" 6 - Calculate Power ------------------->[using Vsupply, Vfoward, current]\n");
		printf(" 7 - Calculate Voltage ----------------->[using power, current]\n");
		printf(" 8 - Calculate Current ----------------->[using power, voltage]\n\n");
		
		printf("Joule's Law equations\n");
		printf(" 9 - Calculate Power ------------------->[using current, resistance]\n");
		printf(" q - Calculate current ----------------->[using power, current, resistance]\n");
		printf(" w - Calculate Resistance -------------->[using power, current]\n");
		printf(" e - Calculate Power ------------------->[using Vsupply, Vfoward, resistance]\n");
		printf(" r - Calculate Voltage ----------------->[using power, voltage, resistance]\n");
		printf(" t - Calculate Resistance -------------->[using voltage, power]\n\n");
	
		printf("0 - Exit \n");
	
		/*_________________Switch-case menu begins_______________*/
	
		menu1 = getchar();
	
			switch(menu1)
			{	
				/*Ohm's law*/
				case '1': system("cls"); printf("***Calculating the Voltage***\n");
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');
										
											voltage = (current*resistance); /*Equation*/
										 
										 printf("\n\n{Method[V=IxR]} Voltage is: %f Volts.\n",voltage);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
										 
				case '2': system("cls"); printf("***Calculating Current***\n");
										 printf("Enter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');
										 
											current = (voltage/resistance); /*Equation*/
											
										 printf("\n\n{Method[I=V/R]} Current is: %f Amps.\n",current);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
										 
				case '3': system("cls"); printf("***Calculating Resistance***\n");
										 printf("Enter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 
											resistance = (voltage/current); /*Equation*/
										
										printf("\n\n{Method[R=V/I]} Resistance is: %f Ohms.\n",resistance);
										printf("\nPress Enter to go back to menu.\n");
										getchar();
										break;
										 
				case '4': system("cls"); printf("***Calculating resistor rating required***\n");
										 printf("\nEnter known Power Supply voltage [Volts]:\n");
										 scanf("%f",&vsupply);
										 while(getchar()!='\n');
										 printf("Enter known Foward Voltage [Volts]:\n");
										 scanf("%f",&vfoward);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 
											rating = ((vsupply-vfoward)/current); /*Equation*/
											
										 printf("\n\n{Method[Rating=((Vs-Vf)/I)]} Resistor rating required: %f Ohms.\n",rating);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case '5': system("cls"); printf("***Calculating Power consumption***\n");
										 printf("\nEnter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');						 
										 
											power = (voltage*current); /*Equation*/
											
										 printf("\n\n{Method[P=(VxI)]} Power consumption is: %f Watts.\n",power);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case '6': system("cls"); printf("***Calculating a circuit's Power***\n");
										 printf("\nEnter known Power Supply voltage [Volts]:\n");
										 scanf("%f",&vsupply);
										 while(getchar()!='\n');
										 printf("Enter known Foward Voltage [Volts]:\n");
										 scanf("%f",&vfoward);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 
											power = ((vsupply-vfoward)*current); /*Equation*/
											
										 printf("\n\n{Method[P=((Vs-Vf)xI)]} Power of circuit is: %f Watts.\n",power);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case '7': system("cls"); printf("***Calculating Voltage***\n");
										 printf("\nEnter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');						 
										 
											voltage = (power/current); /*Equation*/
											
										 printf("\n\n{Method[V=(P/I)]} Voltage is: %f Volts.\n",voltage);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case '8': system("cls"); printf("***Calculating Current***\n");
										 printf("\nEnter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');
										 printf("Enter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');						 
										 
											current = (power/voltage); /*Equation*/
											
										 printf("\n\n{Method[I=(P/V)]} Current is: %f Amps.\n",current);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				/*joule's law*/
				case '9': system("cls"); printf("***Calculating Power***\n");
										 printf("\nEnter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');						 
										 
											power = ((current*current)*resistance); /*Equation*/
											
										 printf("\n\n{Method[P=((IxI)/R)]} Power is: %f Watts.\n",power);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case 'q': system("cls"); printf("***Calculating Current***\n");
										 printf("\nEnter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 
											current = (power/(current*resistance)); /*Equation*/
											
										 printf("\n\n{Method[I=(P/(IxR)]} Current is: %f Amps.\n",current);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case 'w': system("cls"); printf("***Calculating Resistance***\n");
										 printf("\nEnter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 printf("Enter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');						 
										 
											resistance = (power/(current*current)); /*Equation*/
											
										 printf("\n\n{Method[R=(P/(IxI)]} Resistance is: %f Ohms.\n",resistance);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case 'e': system("cls"); printf("***Calculating Power***\n");
										 printf("\nEnter known Power Supply Voltage [Volts]:\n");
										 scanf("%f",&vsupply);
										 while(getchar()!='\n');
										 printf("Enter known Foward Voltage [Volts]:\n");
										 scanf("%f",&vfoward);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');						 
										 
											power = (((vsupply-vfoward)*(vsupply-vfoward))/resistance); /*Equation*/
											
										 printf("\n\n{Method[P=(((Vs-Vf)x(Vs-Vf))/R)]} Power is: %f Watts.\n",power);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case 'r': system("cls"); printf("***Calculating Voltage***\n");
										 printf("\nEnter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');
										 printf("Enter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');						 
										 
											power = (power/(voltage*resistance)); /*Equation*/
											
										 printf("\n\n{Method[I=(P/(VxR)]} Power is: %f Watts.\n",power);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case 't': system("cls"); printf("***Calculating Resistance***\n");
										 printf("\nEnter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');
										 printf("Enter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');						 
										 
											resistance = ((voltage*voltage)/power); /*Equation*/
											
										 printf("\n\n{Method[R=((VxV)/P)]} Resistance is: %f Ohms.\n",resistance);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
			
				case '0': exit=getchar(); return 0;
			}
	}

}
/*************************************end of section 3*****************************/


int section4()
{
	
	for(;;)
	{	
		char menu;
		
		printf("*********************************************\n");
		printf("Welcome to the Cashflow database.\n");
		printf("*********************************************\n\n");
	
		printf("1 - Database writer [Use this to add new data]\n");
		printf("2 - Database reader [Use this to view database]\n\n");
		printf("5 - Back to main menu\n");
		
		menu = getchar();
	
		switch(menu)
		{
			case '1': 	system("cls");
						while(getchar()!='\n');
						printf("--------------------- Database writer ------------------------\n");
						writer();
						break;
		
			case '2':	system("cls");
						/*while(getchar()!='\n');*/
						printf("--------------------- Database Reader ------------------------\n");
						reader();
						break;
		
			case '5':	system("cls");
						return 0;
						break;
			
			default: printf("Press 5 then Enter to go back to main menu.\n");
						break;
						
		}
	
	}
	
	
}

	/*FUNCTIONS BELOW THIS COMMENT*/

int writer()
{
		struct customer
		{
			char todaysdate[15];
			char firstname[20];
			char lastname[20];
			char accountnumber[10]; /*dd/mm/yyyy*/
			char cash_in[20];
		}c1;
		
		
	printf("************************************************************\n");
	printf("This program lets you enter cashflow data and store it.\n");
	printf("************************************************************\n\n\n");
	
	printf("Enter current date (ddmmyyyy) without spaces:\n");
	fgets(c1.todaysdate, 15, stdin);

	printf("Enter customer's first name:\n");
	fgets(c1.firstname, 20, stdin); 
	
	printf("Enter customer's last name:\n");
	fgets(c1.lastname, 20, stdin);
	
	printf("Enter customer's account number:\n");
	fgets(c1.accountnumber, 10, stdin);


	printf("Enter cash-in amount:\n");
	fgets(c1.cash_in, 20, stdin);
	
	
	FILE *fileplace;
	fileplace = fopen("databaserecords.txt","a");
	
	if(fileplace != NULL)
	{
		fprintf(fileplace, "%s %s %s %s %s\n",c1.todaysdate,c1.firstname,c1.lastname,c1.accountnumber,c1.cash_in);
		
		fclose(fileplace);
		printf("Account records have been ammended. Press enter to exit.\n");
		getchar();
		
		system("cls");
		return 0;
	}
	else
	{
		printf("Error ammending records. Press Enter to quit.\n");
		getchar();
		system("cls");
		return 1;
	}



}
/*WRITER FUNTION ENDS HERE*/

int reader()
{
	char text[1000000];
	FILE *filepointer;
	
	filepointer = fopen("databaserecords.txt","r");
	
	while(getchar()!='\n');
	if(filepointer != NULL)
	{
		printf("\nAccessing database. \n\nPress Enter to view contents:\n\n");
		
		getchar();
		
		while(fread(text, 1, 1000, filepointer)==EOF);
		printf("%s", text);
		printf("\n\nEnd of file. Press Enter to quit.\n");

		getchar();	
			
	fclose(filepointer); /*dont forget to close file*/
	system("cls");
	return 0;
	}
	else
	{
		printf("Unable to access databaserecords file.\n\n");
		printf("Likely reason: file does not exist yet.\n");
		printf("Press Enter to quit.\n");
		getchar();
		system("cls");
		
		return 1;
	}

}

int section5()
{
	
	printf("Welcome to the mcbrian matrix encrypter.\n\n");
	printf("Created by brian lukonsolo on 06/08/2013 at 00:09am.\n\n");
	
	for(;;)
	{	
		while(getchar()!='\n');
		int menu5;
		
		printf("1 - S7 Encrypter\n");
		printf("2 - S7 Decrypter\n");
		printf("\n5 - Exit.\n");
		
		menu5=getchar();
		switch(menu5)
		{
			case '1':	while(getchar()!='\n');				  
						srand(time(NULL));
						int rndnum;
						char exit;
						/*Two declarations used by timer below*/
						time_t start_time, end_time;
						int sec;
	
	
							for(;;)
							{
							start_time = time(NULL);
		
							/*intitialise connectors*/
							char    a0,b0,c0,d0,e0,f0,g0,h0,i0,j0,k0,l0,m0,n0,o0,p0,q0,r0,s0,t0,u0,v0,w0,x0,y0,z0,
									A0,B0,C0,D0,E0,F0,G0,H0,I0,J0,
									A10, B10, C10, D10, E10, F10, G10, H10, I10, J10,
									xx0,x10,x20,x30,x40,x50,x60,x70,x80,x90,
									a10,b10,c10,d10,e10,f10,g10,h10,i10,j10,k10,l10,m10,n10,o10,p10,q10,r10,s10,t10,u10,v10,w10,y10,z10,
									xx10,xx20,xx30,xx40,xx50,xx60,xx70,xx80,xx90,
									yy10,yy20,yy30,yy40,yy50,yy60,yy70,yy80,yy90;
		
							for(sec=0; sec<40; sec++)
							{
		
								system("cls");
					
								char a=(rand()%89),b=(rand()%89),c=(rand()%89),d=(rand()%89),
								e=(rand()%89),f=(rand()%89),g=(rand()%89),h=(rand()%89),
								i=(rand()%89),j=(rand()%89),k=(rand()%89),l=(rand()%89),
								m=(rand()%89),n=(rand()%89),o=(rand()%89),p=(rand()%89),
								q=(rand()%89),r=(rand()%89),s=(rand()%89),t=(rand()%89),
								u=(rand()%89),v=(rand()%89),w=(rand()%89),x=(rand()%89),
								y=(rand()%89),z=(rand()%89),A=(rand()%89),B=(rand()%89),
								C=(rand()%89),D=(rand()%89),E=(rand()%89),F=(rand()%89),
								G=(rand()%89),H=(rand()%89),I=(rand()%89),J=(rand()%89),
								A1=(rand()%89),B1=(rand()%89),C1=(rand()%89),D1=(rand()%89),
								E1=(rand()%89),F1=(rand()%89),G1=(rand()%89),H1=(rand()%89),
								I1=(rand()%89),J1=(rand()%89),xx=(rand()%89),x1=(rand()%89),
								x2=(rand()%89),x3=(rand()%89),x4=(rand()%89),x5=(rand()%89),
								x6=(rand()%89),x7=(rand()%89),x8=(rand()%89),x9=(rand()%89),
								a1=(rand()%89),b1=(rand()%89),c1=(rand()%89),d1=(rand()%89),
								e1=(rand()%89),f1=(rand()%89),g1=(rand()%89),h1=(rand()%89),
								i1=(rand()%89),j1=(rand()%89),k1=(rand()%89),l1=(rand()%89),
								m1=(rand()%89),n1=(rand()%89),o1=(rand()%89),p1=(rand()%89),
								q1=(rand()%89),r1=(rand()%89),s1=(rand()%89),t1=(rand()%89),
								u1=(rand()%89),v1=(rand()%89),w1=(rand()%89),y1=(rand()%89),
								z1=(rand()%89), xx1=(rand()%89),xx2=(rand()%89),xx3=(rand()%89),
								xx4=(rand()%89),xx5=(rand()%89),xx6=(rand()%89),xx7=(rand()%89),
								xx8=(rand()%89),xx9=(rand()%89),yy1=(rand()%89),yy2=(rand()%89),
								yy3=(rand()%89),yy4=(rand()%89),yy5=(rand()%89),yy6=(rand()%89),
								yy7=(rand()%89),yy8=(rand()%89),yy9=(rand()%89);
					
									char matrix[9][11] =
										{
											{a0, b0, c0, d0, a10, b10, c10, d10, x10, xx10, yy10},
											{e0, f0, g0, h0, e10, f10, g10, h10, x20, xx20, yy20},
											{i0, j0, k0, l0, i10, j10, k10, l10, x30, xx30, yy30},
											{m0, n0, o0, p0, m10, n10, o10, p10, x40, xx40, yy40},
											{q0, r0, s0, t0, q10, r10, s10, t10, x50, xx50, yy50},
											{u0, v0, w0, x0, u10, v10, w10, xx0, x60, xx60, yy60},
											{y0, z0, A0, B0, y10, z10, A10, B10, x70, xx70, yy70},
											{C0, D0, E0, F0, C10, D10, E10, F10, x80, xx80, yy80},
											{G0, H0, I0, J0, G10, H10, I10, J10, x90, xx90, yy90}
			
										};
								/*START OF CONNECTOR BLOCK*/
										a0=a; if( a0==0||a0==1||a0==2||a0==3||a0==4||a0==5||a0==6||a0==7||a0==8||a0==9);{	a0=a0+10; }
										b0=b; if( b0==0||b0==1||b0==2||b0==3||b0==4||b0==5||b0==6||b0==7||b0==8||b0==9);{	b0=b0+10; }
										c0=c; if( c0==0||c0==1||c0==2||c0==3||c0==4||c0==5||c0==6||c0==7||c0==8||c0==9);{	c0=c0+10; }
										d0=d; if( d0==0||d0==1||d0==2||d0==3||d0==4||d0==5||d0==6||d0==7||d0==8||d0==9);{	d0=d0+10; }
										e0=e; if( e0==0||e0==1||e0==2||e0==3||e0==4||e0==5||e0==6||e0==7||e0==8||e0==9);{	e0=e0+10; }
											f0=f; if( f0==0||f0==1||f0==2||f0==3||f0==4||f0==5||f0==6||f0==7||f0==8||f0==9);{	f0=f0+10; }
										g0=g; if( g0==0||g0==1||g0==2||g0==3||g0==4||g0==5||g0==6||g0==7||g0==8||g0==9);{	g0=g0+10; }
										h0=h; if( h0==0||h0==1||h0==2||h0==3||h0==4||h0==5||h0==6||h0==7||h0==8||h0==9);{	h0=h0+10; }
										i0=i;if( i0==0||i0==1||i0==2||i0==3||i0==4||i0==5||i0==6||i0==7||i0==8||i0==9);{	i0=i0+10; }
										j0=j;if( j0==0||j0==1||j0==2||j0==3||j0==4||j0==5||j0==6||j0==7||j0==8||j0==9);{	j0=j0+10; }
										k0=k;if( k0==0||k0==1||k0==2||k0==3||k0==4||k0==5||k0==6||k0==7||k0==8||k0==9);{	k0=k0+10; }
										l0=l;if( l0==0||l0==1||l0==2||l0==3||l0==4||l0==5||l0==6||l0==7||l0==8||l0==9);{	l0=l0+10; }
										m0=m;if( m0==0||m0==1||m0==2||m0==3||m0==4||m0==5||m0==6||m0==7||m0==8||m0==9);{	m0=m0+10; }
										n0=n;if( n0==0||n0==1||n0==2||n0==3||n0==4||n0==5||n0==6||n0==7||n0==8||n0==9);{	n0=n0+10; }
										o0=o;if( o0==0||o0==1||o0==2||o0==3||o0==4||o0==5||o0==6||o0==7||o0==8||o0==9);{	o0=o0+10; }
										p0=p;if( p0==0||p0==1||p0==2||p0==3||p0==4||p0==5||p0==6||p0==7||p0==8||p0==9);{	p0=p0+10; }
										q0=q;if( q0==0||q0==1||q0==2||q0==3||q0==4||q0==5||q0==6||q0==7||q0==8||q0==9);{	q0=q0+10; }
										r0=r;if( r0==0||r0==1||r0==2||r0==3||r0==4||r0==5||r0==6||r0==7||r0==8||r0==9);{	r0=r0+10; }
										s0=s;if( s0==0||s0==1||s0==2||s0==3||s0==4||s0==5||s0==6||s0==7||s0==8||s0==9);{	s0=s0+10; }
										t0=t;if( t0==0||t0==1||t0==2||t0==3||t0==4||t0==5||t0==6||t0==7||t0==8||t0==9);{	t0=t0+10; }
										u0=u;if( u0==0||u0==1||u0==2||u0==3||u0==4||u0==5||u0==6||u0==7||u0==8||u0==9);{	u0=u0+10; }
										v0=v;if( v0==0||v0==1||v0==2||v0==3||v0==4||v0==5||v0==6||v0==7||v0==8||v0==9);{	v0=v0+10; }
										w0=w;if( w0==0||w0==1||w0==2||w0==3||w0==4||w0==5||w0==6||w0==7||w0==8||w0==9);{	w0=w0+10; }
										x0=x;if( x0==0||x0==1||x0==2||x0==3||x0==4||x0==5||x0==6||x0==7||x0==8||x0==9);{	x0=x0+10; }
										y0=y;if( y0==0||y0==1||y0==2||y0==3||y0==4||y0==5||y0==6||y0==7||y0==8||y0==9);{	y0=y0+10; }
										z0=z;if( z0==0||z0==1||z0==2||z0==3||z0==4||z0==5||z0==6||z0==7||z0==8||z0==9);{	z0=z0+10; }
										A0=A;if( A0==0||A0==1||A0==2||A0==3||A0==4||A0==5||A0==6||A0==7||A0==8||A0==9);{	A0=A0+10; }
										B0=B;if( B0==0||B0==1||B0==2||B0==3||B0==4||B0==5||B0==6||B0==7||B0==8||B0==9);{	B0=B0+10; }
										C0=C;if( C0==0||C0==1||C0==2||C0==3||C0==4||C0==5||C0==6||C0==7||C0==8||C0==9);{	C0=C0+10; }
										D0=D;if( D0==0||D0==1||D0==2||D0==3||D0==4||D0==5||D0==6||D0==7||D0==8||D0==9);{	D0=D0+10; }
										E0=E;if( E0==0||E0==1||E0==2||E0==3||E0==4||E0==5||E0==6||E0==7||E0==8||E0==9);{	E0=E0+10; }
										F0=F;if( F0==0||F0==1||F0==2||F0==3||F0==4||F0==5||F0==6||F0==7||F0==8||F0==9);{	F0=F0+10; }
										G0=G;if( G0==0||G0==1||G0==2||G0==3||G0==4||G0==5||G0==6||G0==7||G0==8||G0==9);{	G0=G0+10; }
										H0=H;if( H0==0||H0==1||H0==2||H0==3||H0==4||H0==5||H0==6||H0==7||H0==8||H0==9);{	H0=H0+10; }
										I0=I;if( I0==0||I0==1||I0==2||I0==3||I0==4||I0==5||I0==6||I0==7||I0==8||I0==9);{	I0=I0+10; }
										J0=J;if( J0==0||J0==1||J0==2||J0==3||J0==4||J0==5||J0==6||J0==7||J0==8||J0==9);{	J0=J0+10; }
										A10=A1; if( A10==0||A10==1||A10==2||A10==3||A10==4||A10==5||A10==6||A10==7||A10==8||A10==9);{	A10=A10+10; }
										B10=A1; if( B10==0||B10==1||B10==2||B10==3||B10==4||B10==5||B10==6||B10==7||B10==8||B10==9);{	B10=B10+10; }
										C10=C1; if( C10==0||C10==1||C10==2||C10==3||C10==4||C10==5||C10==6||C10==7||C10==8||C10==9);{	C10=C10+10; }
										D10=D1; if( D10==0||D10==1||D10==2||D10==3||D10==4||D10==5||D10==6||D10==7||D10==8||D10==9);{	D10=D10+10; }
										E10=E1; if( E10==0||E10==1||E10==2||E10==3||E10==4||E10==5||E10==6||E10==7||E10==8||E10==9);{	E10=E10+10; }
										F10=F1; if( F10==0||F10==1||F10==2||F10==3||F10==4||F10==5||F10==6||F10==7||F10==8||F10==9);{	F10=F10+10; }
										G10=G1; if( G10==0||G10==1||G10==2||G10==3||G10==4||G10==5||G10==6||G10==7||G10==8||G10==9);{	G10=G10+10; }
										H10=H1; if( H10==0||H10==1||H10==2||H10==3||H10==4||H10==5||H10==6||H10==7||H10==8||H10==9);{	H10=H10+10; }
										I10=I1; if( I10==0||I10==1||I10==2||I10==3||I10==4||I10==5||I10==6||I10==7||I10==8||I10==9);{	I10=I10+10; }
										J10=J1;if( J10==0||J10==1||J10==2||J10==3||J10==4||J10==5||J10==6||J10==7||J10==8||J10==9);{	J10=J10+10; }
										xx0=xx;if( xx0==0||xx0==1||xx0==2||xx0==3||xx0==4||xx0==5||xx0==6||xx0==7||xx0==8||xx0==9);{	xx0=xx0+10; }
										x10=x1;if( x10==0||x10==1||x10==2||x10==3||x10==4||x10==5||x10==6||x10==7||x10==8||x10==9);{	x10=x10+10; }
										x20=x2;if( x20==0||x20==1||x20==2||x20==3||x20==4||x20==5||x20==6||x20==7||x20==8||x20==9);{	x20=x20+10; }
										x30=x3;if( x30==0||x30==1||x30==2||x30==3||x30==4||x30==5||x30==6||x30==7||x30==8||x30==9);{	x30=x30+10; }
										x40=x4;if( x40==0||x40==1||x40==2||x40==3||x40==4||x40==5||x40==6||x40==7||x40==8||x40==9);{	x40=x40+10; }
										x50=x5;if( x50==0||x50==1||x50==2||x50==3||x50==4||x50==5||x50==6||x50==7||x50==8||x50==9);{	x50=x50+10; }
										x60=x6;if( x60==0||x60==1||x60==2||x60==3||x60==4||x60==5||x60==6||x60==7||x60==8||x60==9);{	x60=x60+10; }
										x70=x7;if( x70==0||x70==1||x70==2||x70==3||x70==4||x70==5||x70==6||x70==7||x70==8||x70==9);{	x70=x70+10; }
										x80=x8;if( x80==0||x80==1||x80==2||x80==3||x80==4||x80==5||x80==6||x80==7||x80==8||x80==9);{	x80=x80+10; }
										x90=x9;if( x90==0||x90==1||x90==2||x90==3||x90==4||x90==5||x90==6||x90==7||x90==8||x90==9);{	x90=x90+10; }
										a10=a1;if( a10==0||a10==1||a10==2||a10==3||a10==4||a10==5||a10==6||a10==7||a10==8||a10==9);{	a10=a10+10; }
										b10=b1;if( b10==0||b10==1||b10==2||b10==3||b10==4||b10==5||b10==6||b10==7||b10==8||b10==9);{	b10=b10+10; }
										c10=c1;if( c10==0||c10==1||c10==2||c10==3||c10==4||c10==5||c10==6||c10==7||c10==8||c10==9);{	c10=c10+10; }
										d10=d1;if( d10==0||d10==1||d10==2||d10==3||d10==4||d10==5||d10==6||d10==7||d10==8||d10==9);{	d10=d10+10; }
										e10=e1;if( e10==0||e10==1||e10==2||e10==3||e10==4||e10==5||e10==6||e10==7||e10==8||e10==9);{	e10=e10+10; }
										f10=f1;if( f10==0||f10==1||f10==2||f10==3||f10==4||f10==5||f10==6||f10==7||f10==8||f10==9);{	f10=f10+10; }
										g10=g1;if( g10==0||g10==1||g10==2||g10==3||g10==4||g10==5||g10==6||g10==7||g10==8||g10==9);{	g10=g10+10; }
										h10=h1;if( h10==0||h10==1||h10==2||h10==3||h10==4||h10==5||h10==6||h10==7||h10==8||h10==9);{	h10=h10+10; }
										i10=i1;if( i10==0||i10==1||i10==2||i10==3||i10==4||i10==5||i10==6||i10==7||i10==8||i10==9);{	i10=i10+10; }
										j10=j1;if( j10==0||j10==1||j10==2||j10==3||j10==4||j10==5||j10==6||j10==7||j10==8||j10==9);{	j10=j10+10; }
										k10=k1;if( k10==0||k10==1||k10==2||k10==3||k10==4||k10==5||k10==6||k10==7||k10==8||k10==9);{	k10=k10+10; }
										l10=l1;if( l10==0||l10==1||l10==2||l10==3||l10==4||l10==5||l10==6||l10==7||l10==8||l10==9);{	l10=l10+10; }
										m10=m1;if( m10==0||m10==1||m10==2||m10==3||m10==4||m10==5||m10==6||m10==7||m10==8||m10==9);{	m10=m10+10; }
										n10=n1;if( n10==0||n10==1||n10==2||n10==3||n10==4||n10==5||n10==6||n10==7||n10==8||n10==9);{	n10=n10+10; }
										o10=o1;if( o10==0||o10==1||o10==2||o10==3||o10==4||o10==5||o10==6||o10==7||o10==8||o10==9);{	o10=o10+10; }
										p10=p1;if( p10==0||p10==1||p10==2||p10==3||p10==4||p10==5||p10==6||p10==7||p10==8||p10==9);{	p10=p10+10; }
										q10=q1;if( q10==0||q10==1||q10==2||q10==3||q10==4||q10==5||q10==6||q10==7||q10==8||q10==9);{	q10=q10+10; }
										r10=r1;if( r10==0||r10==1||r10==2||r10==3||r10==4||r10==5||r10==6||r10==7||r10==8||r10==9);{	r10=r10+10; }
										s10=s1;if( s10==0||s10==1||s10==2||s10==3||s10==4||s10==5||s10==6||s10==7||s10==8||s10==9);{	s10=s10+10; }
										t10=t1;if( t10==0||t10==1||t10==2||t10==3||t10==4||t10==5||t10==6||t10==7||t10==8||t10==9);{	t10=t10+10; }
										u10=u1;if( u10==0||u10==1||u10==2||u10==3||u10==4||u10==5||u10==6||u10==7||u10==8||u10==9);{	u10=u10+10; }
										v10=v1;if( v10==0||v10==1||v10==2||v10==3||v10==4||v10==5||v10==6||v10==7||v10==8||v10==9);{	v10=v10+10; }
										w10=w1;if( w10==0||w10==1||w10==2||w10==3||w10==4||w10==5||w10==6||w10==7||w10==8||w10==9);{	w10=w10+10; }
										y10=y1;if( y10==0||y10==1||y10==2||y10==3||y10==4||y10==5||y10==6||y10==7||y10==8||y10==9);{	y10=y10+10; }
										z10=z1;if( z10==0||z10==1||z10==2||z10==3||z10==4||z10==5||z10==6||z10==7||z10==8||z10==9);{	z10=z10+10; }
										xx10=xx1;if( xx10==0||xx10==1||xx10==2||xx10==3||xx10==4||xx10==5||xx10==6||xx10==7||xx10==8||xx10==9);{	xx10=xx10+10; }
										xx20=xx2;if( xx20==0||xx20==1||xx20==2||xx20==3||xx20==4||xx20==5||xx20==6||xx20==7||xx20==8||xx20==9);{	xx20=xx20+10; }
										xx30=xx3;if( xx30==0||xx30==1||xx30==2||xx30==3||xx30==4||xx30==5||xx30==6||xx30==7||xx30==8||xx30==9);{	xx30=xx30+10; }
										xx40=xx4;if( xx40==0||xx40==1||xx40==2||xx40==3||xx40==4||xx40==5||xx40==6||xx40==7||xx40==8||xx40==9);{	xx40=xx40+10; }
										xx50=xx5;if( xx50==0||xx50==1||xx50==2||xx50==3||xx50==4||xx50==5||xx50==6||xx50==7||xx50==8||xx50==9);{	xx50=xx50+10; }
										xx60=xx6;if( xx60==0||xx60==1||xx60==2||xx60==3||xx60==4||xx60==5||xx60==6||xx60==7||xx60==8||xx60==9);{	xx60=xx60+10; }
										xx70=xx7;if( xx70==0||xx70==1||xx70==2||xx70==3||xx70==4||xx70==5||xx70==6||xx70==7||xx70==8||xx70==9);{	xx70=xx70+10; }
										xx80=xx8;if( xx80==0||xx80==1||xx80==2||xx80==3||xx80==4||xx80==5||xx80==6||xx80==7||xx80==8||xx80==9);{	xx80=xx80+10; }
										xx90=xx9;if( xx90==0||xx90==1||xx90==2||xx90==3||xx90==4||xx90==5||xx90==6||xx90==7||xx90==8||xx90==9);{	xx90=xx90+10; }
										yy10=yy1;if( yy10==0||yy10==1||yy10==2||yy10==3||yy10==4||yy10==5||yy10==6||yy10==7||yy10==8||yy10==9);{	yy10=yy10+10; }
										yy20=yy2;if( yy20==0||yy20==1||yy20==2||yy20==3||yy20==4||yy20==5||yy20==6||yy20==7||yy20==8||yy20==9);{	yy20=yy20+10; }
										yy30=yy3;if( yy30==0||yy30==1||yy30==2||yy30==3||yy30==4||yy30==5||yy30==6||yy30==7||yy30==8||yy30==9);{	yy30=yy30+10; }
										yy40=yy4;if( yy40==0||yy40==1||yy40==2||yy40==3||yy40==4||yy40==5||yy40==6||yy40==7||yy40==8||yy40==9);{	yy40=yy40+10; }
										yy50=yy5;if( yy50==0||yy50==1||yy50==2||yy50==3||yy50==4||yy50==5||yy50==6||yy50==7||yy50==8||yy50==9);{	yy50=yy50+10; }
										yy60=yy6;if( yy60==0||yy60==1||yy60==2||yy60==3||yy60==4||yy60==5||yy60==6||yy60==7||yy60==8||yy60==9);{	yy60=yy60+10; }
										yy70=yy7;if( yy70==0||yy70==1||yy70==2||yy70==3||yy70==4||yy70==5||yy70==6||yy70==7||yy70==8||yy70==9);{	yy70=yy70+10; }
										yy80=yy8;if( yy80==0||yy80==1||yy80==2||yy80==3||yy80==4||yy80==5||yy80==6||yy80==7||yy80==8||yy80==9);{	yy80=yy80+10; }
										yy90=yy9;if( yy90==0||yy90==1||yy90==2||yy90==3||yy90==4||yy90==5||yy90==6||yy90==7||yy90==8||yy90==9);{	yy90=yy90+10; }
									/*END OF CONNECTOR BLOCK*/
											system("color 4");
																		
											printf("\n   	        	    %d%d%d%d%d%d%d%d%d%d%d	\n", a0, b0, c0, d0, a10, b10, c10, d10, x10, xx10, yy10);
											printf("   	    		    %d%d%d%d%d%d%d%d%d%d%d	\n", e0, f0, g0, h0, e10, f10, g10, h10, x20, xx20, yy20);
											printf("   	        	    %d%d%d%d%d%d%d%d%d%d%d	\n", i0, j0, k0, l0, i10, j10, k10, l10, x30, xx30, yy30);
											printf("  	    		    %d%d%d%d%d%d%d%d%d%d%d	\n", m0, n0, o0, p0, m10, n10, o10, p10, x40, xx40, yy40);
											printf("		            %d%d%d%d%d%d%d%d%d%d%d	\n", q0, r0, s0, t0, q10, r10, s10, t10, x50, xx50, yy50);
											printf("		            %d%d%d%d%d%d%d%d%d%d%d	\n", u0, v0, w0, x0, u10, v10, w10, xx0, x60, xx60, yy60);
											printf("		            %d%d%d%d%d%d%d%d%d%d%d	\n", y0, z0, A0, B0, y10, z10, A10, B10, x70, xx70, yy70);
											printf("		            %d%d%d%d%d%d%d%d%d%d%d	\n", C0, D0, E0, F0, C10, D10, E10, F10, x80, xx80, yy80);
											printf("		            %d%d%d%d%d%d%d%d%d%d%d	\n\n", G0, H0, I0, J0, G10, H10, I10, J10, x90, xx90, yy90);
	
	
											if(sec % 40 ==0)
												end_time = time(NULL); /*stop timer*/
				
									}			
												printf("*--> Press Enter to randomize again. <-****************************************\n");
												printf("*--> Press 1 then Enter to encrypt and write a password to file. <-************\n");
												printf("*--> Press 0 then Enter to exit. <-********************************************\n");
					
												exit = getchar();
		
												if(exit=='\n')
												{
													continue;
												}	
									/*begin*/	else if(exit=='1')
												{
					
													FILE *filepointer;
													int p1,p2,p3,p4,p5,p6,p7;
													char alphabet[83] = 
													{"0123456789zyxwvutsrqponmlkjihgfedcba_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%&@!<>"};
					
					
			/*THIS BLOCK COLLECTS THE PASSWORD FROM THE USER*/
							for(;;)
							{	
								int yesno;
								
								system("cls");
								
								printf("Arrangement stored. Program is ready.\n");
								printf("Enter 7 characters one by one using the mcbrian cypher for encryption:\n");
						
								scanf("%d",&p1);
								'z'=='0';
								r0 = p1+10;
								while(getchar()!='\n');
								scanf("%d",&p2);
								e10 = p2+10;
								while(getchar()!='\n');
								scanf("%d",&p3);
								x80 = p3+10;
								while(getchar()!='\n');
								scanf("%d",&p4);
								D10 = p4+10;
								while(getchar()!='\n');
								scanf("%d",&p5);
								J0 = p5+10;
								while(getchar()!='\n');
								scanf("%d",&p6);
								xx40 = p6+10;
								while(getchar()!='\n');
								scanf("%d",&p7);
								t10=p7+10;
								
								system("cls");
								/*Now the cypher is temporarily converted to text for the user to confirm*/
								printf("Data to be encrypted: %c%c%c%c%c%c%c \n",alphabet[r0],alphabet[e10],alphabet[x80],alphabet[D10],alphabet[J0],alphabet[xx40],alphabet[t10]);
								printf("Do you wish to encrypt this data? \n");
								printf("\nhelp -> [yes=1], [no=0], [Exit=5] \n");
								
								
								while(getchar()!='\n');
								yesno = getchar();					
								
								switch(yesno)
								{
									case '1': printf("Affirm.\n\a\a");
											  goto encryptprocess;
											  break;
									case '0': printf("Negative.\n\n\a");
											  continue;
											  break;
									case '5': return 0;		  
								}
							}	
			/*END OF PASSWORD COLLECTION BLOCK*/
			
			
	encryptprocess: /*swichcase above uses this 'jump-to' label*/
						filepointer = fopen("senc.txt", "w+");
	
						if(filepointer!=NULL)
						{
							fprintf(filepointer, "%d%d%d%d%d%d%d%d%d%d%d\n", a0, b0, c0, d0, a10, b10, c10, d10, x10, xx10, yy10);
							fprintf(filepointer, "%d%d%d%d%d%d%d%d%d%d%d\n", e0, f0, g0, h0, e10, f10, g10, h10, x20, xx20, yy20);
							fprintf(filepointer, "%d%d%d%d%d%d%d%d%d%d%d\n", i0, j0, k0, l0, i10, j10, k10, l10, x30, xx30, yy30);
							fprintf(filepointer, "%d%d%d%d%d%d%d%d%d%d%d\n", m0, n0, o0, p0, m10, n10, o10, p10, x40, xx40, yy40);
							fprintf(filepointer, "%d%d%d%d%d%d%d%d%d%d%d\n", q0, r0, s0, t0, q10, r10, s10, t10, x50, xx50, yy50);
							fprintf(filepointer, "%d%d%d%d%d%d%d%d%d%d%d\n", u0, v0, w0, x0, u10, v10, w10, xx0, x60, xx60, yy60);
							fprintf(filepointer, "%d%d%d%d%d%d%d%d%d%d%d\n", y0, z0, A0, B0, y10, z10, A10, B10, x70, xx70, yy70);
							fprintf(filepointer, "%d%d%d%d%d%d%d%d%d%d%d\n", C0, D0, E0, F0, C10, D10, E10, F10, x80, xx80, yy80);
							fprintf(filepointer, "%d%d%d%d%d%d%d%d%d%d%d\n", G0, H0, I0, J0, G10, H10, I10, J10, x90, xx90, yy90);
							fclose(filepointer);
							
							printf("\nEncryption complete. Press Enter to exit.\n");
							getchar();
						}
						else;
						}
							while(getchar()!='\n');
							return 1;
						}
						if(exit=='0');
						{
						system("cls");
						return 0;
						}
						
			
						break;
			case '2':	
						while(getchar()!='\n');
						system("color 4");
						FILE *filepointer;
						char alphabet[83] = {"0101010101zyxwvutsrqponmlkjihgfedcba_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%&@!<>"};
						
					/*Init Line Holders*/
						char s1[27],s2[27],s3[27],s4[27],s5[27],s6[27],s7[27],s8[27],s9[27],s10[27],s11[27],s12[27],s13[27],s14[27],s15[27],s16[27],s17[27];
					/*End Line Holders*/
						int m1,m2,m3,m4,m5,m6,m7,n1,n2,n3,n4,n5,n6,n7;
	
						filepointer = fopen("senc.txt","r");
	
					if(filepointer!=NULL)
					{
						system("cls");
						int a,b,c,d,e,f,g;
						printf("Welcome to the matrix Decrypter.\n");
						printf("Created by brian lukonsolo on 06/08/2013 at 00:09am.\n\n");
		
							fgets(s1, 27, filepointer);
						printf("%s",s1);	
							fgets(s2, 27, filepointer);
						printf("%s",s2);	
							fgets(s3, 27, filepointer);
						printf("%s",s3);	
							fgets(s4, 27, filepointer);
						printf("%s",s4);	
							fgets(s5, 27, filepointer);				
						printf("%s",s5);
							fgets(s6, 27, filepointer);
						printf("%s",s6);	
							fgets(s7, 27, filepointer);
						printf("%s",s7);	
							fgets(s8, 27, filepointer);
						printf("%s",s8);	
							fgets(s9, 27, filepointer);
						printf("%s",s9);	

					printf("\nEncrypted block retrieved successfully. Press Enter to view data code.\n");
					getchar();
		
		/*BEGIN DECRYPTION*/
					a=(s5[2],s5[3]);
					b=(s2[8],s2[9]);
					c=(s8[16],s8[17]);
					d=(s8[10],s8[11]);
					e=(s9[6],s9[7]);
					f=(s4[18],s4[19]);
					g=(s5[14],s5[15]);
		/*DECRYPTION COMPLETE*/
		
					printf("%c%c ",s5[2],s5[3]);
					printf("%c%c ",s2[8],s2[9]);
					printf("%c%c ",s8[16],s8[17]);
					printf("%c%c ",s8[10],s8[11]);
					printf("%c%c ",s9[6],s9[7]);
					printf("%c%c ",s4[18],s4[19]);
					printf("%c%c \n",s5[14],s5[15]);
		
					printf("Enter the code above, one integer(xx) at a time.\n");
		
		/*get integer and subtract 10 for cypher reasons in encryption*/
					scanf("%d",&m1);
					n1=m1;
					while(getchar()!='\n');
		
					scanf("%d",&m2); 
					n2=m2;
					while(getchar()!='\n');
		
					scanf("%d",&m3); 
					n3=m3;
					while(getchar()!='\n');
		
					scanf("%d",&m4); 
					n4=m4;
					while(getchar()!='\n');
		
					scanf("%d",&m5); 
					n5=m5;
					while(getchar()!='\n');
		
					scanf("%d",&m6); 
					n6=m6;
					while(getchar()!='\n');
		
					scanf("%d",&m7); 
					n7=m7;
					while(getchar()!='\n');
		
					/*printf("n1 is: %d",n1);*//*used this printf to debug*/
					printf("Decrypted data: %c%c%c%c%c%c%c\n",alphabet[n1],alphabet[n2],alphabet[n3],alphabet[n4],alphabet[n5],alphabet[n6],alphabet[n7]);
					printf("\aProcess complete. Press Enter to exit.\n");
					getchar();
		
		
					fclose(filepointer);
					return 0;
					}
					else;
					{
						printf("Failed. Encrypted text file does not exist.\n");
						printf("Press Enter to exit.\n");
						getchar();
						return 1;
					}

						break;		

				case '5': 	if(menu5=='5')
							{
								return 0;
							}
							break;

		}
	
	while(getchar()!='\n');
	}
return 0;
}








