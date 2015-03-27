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
int main()
{
	
	int mode,i,j,n;
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
		case 1: system("cls");
		printf("\t\t_____Symbols For Subjects_____\n\n");
	
	   case 3:{
		
	   
	   	system("cls");
	   	printf("\n\n\n\n\n\n\n\n\t\tSaving and Exiting.");
	   	Sleep(2000);
	   	printf("\n\n\n\n")
	   	exit(0);
	   	break;}
	}
	
}
