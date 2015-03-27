// welcome screen
HANDLE rHnd,wHnd;
void locate(int,int);
void locate(int x, int y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition (wHnd,pos);

}

void welcome();
void welcome()
{
	int i;
	//system("color C4");
		//printf("\n\n");
	
	printf("\t\t");
	for(i=0; i<33 ; i++)
	printf("\xB0");
	
	printf("\n\t\t\xB0");
	printf("      TIME TABLE GENERATOR \t\xDB"); // 6 spaces, and ajdusted \xDB..
	
	printf("\n");
	printf("\t\t");
	for(i=0; i<33 ; i++)
	printf("\xDB");
	
    //locate(2,1);
    //Sleep(250);
    
}
void mainwelcome();
void mainwelcome()
{
		
    Sleep(1000);
    system("cls");
    printf("\n\n\n\n");
    welcome();
    printf("\nMade by: ");
    Sleep(1000);
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
	welcome();
	printf("\nIbrahim");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n");
    welcome();
    printf("\nShezad");
    
    Sleep(1000);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    welcome();
    printf("\nand Waleed");
    
    Sleep(1000);
    system("cls");
}
