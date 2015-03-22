#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<strings.h>
int main()
{
	system("color D");
	int mode,i,j,n;
	char teachers[20][20],ch;
	printf("\n\n");
	
	printf("\t\t");
	for(int i=0; i<33 ; i++)
	printf("\xB0");
	
	printf("\n\t\t\xB0");
	printf("      TIME TABLE GENERATOR \t\xDB"); // 6 spaces, and ajdusted \xDB..
	
	printf("\n");
	printf("\t\t");
	for(i=0; i<33 ; i++)
	printf("\xDB");

	printf("\n\n\n\n");
	printf("\t\t1.Create a New Time Table\n\t\t2.Open An Existing Time Table\n\t\t3.Exit\n");
	printf("\n\n\t\tEnter Your Choice: ");
	scanf("%d",&mode);
	
	switch(mode){
		case 1: system("cls");
		printf("\t\t_____Symbols For Subjects_____\n\n");
	
	
	}
	
}
