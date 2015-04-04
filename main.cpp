#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<strings.h>
#include"welcome.h"
#include<time.h>
#include<cstring>
#include<winbase.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
#include"structdec.h"

void classwise(void);
int main()
{
	
	int mode,i,j,n,mode1;
	char teachers[20][20],ch;
	system("color FC");
	welcome(); //declared in header file
    mainwelcome();
    
    welcome();
	printf("\n\n\n\n");
	printf("\t\t1.Create a New Time Table\n\t\t2.Open An Existing Time Table\n\t\t3.Exit\n");
	printf("\n\n\t\tEnter Your Choice: ");
	scanf("%d",&mode);
	
	switch(mode){
		case 1: 
		{
		   system("cls");
		   printf("Still Working");
		   break;
		}
	   case 2: {
	   	  system("cls");
	   	  printf("\t\tOpen An Existing File: ");
	   	  printf("\n\n\n\n\t\tSelect an Option\n\t\t1.Teacher's View\n\t\t2.Classwise Time Table View\n\t\t\n");
	   	  scanf("%d",&mode1);
	   	  switch(mode1)
	   	  {
	   	  	case 1: { system("cls");
	   	  	          printf("Here is the Recent Time table with teachers view(incomplete he abhi)");
					break;
				 }
	   	  	case 2:{system("cls");
	   	  	          printf("Here is the Recent Time table in Classwise view(incomplete he abhi)");
					classwise();
					break;
				 } 
	   	  	
	   }
	
	   case 3:
	   {
		system("cls");
	   	printf("\n\n\n\n\n\n\n\n\t\tSaving and Exiting..");
	   	Sleep(2000);
	   	printf("\n\n\n\n");
	   	exit(0);
	   	break;}
	}
	
    }
}


void classwise(void)    //function to show a created timetable
{
	int n;
	int e_class; //h0ga 1 character hi but phr b lelya 5
	system("cls");
	printf("\n\n\t\tENTER THE CLASS NUMBER:");
	scanf("%d",&e_class);  //stores the entered class
	
	n=e_class-1; //as arrays start from 0
	
	for(int d=0; d<5 ; d++)   //days
	{
		printf("%s\t",cls[n].days[d].d_name); //prints day once in 8
		for(int p=0; p<8 ; p++)    //periods
		{
		   printf("%s\t",cls[n].day[d].period[p]);
	    }
	    printf("\n");
    }
}
