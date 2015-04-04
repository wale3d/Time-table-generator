#include<stdio.h>
#include<conio.h>

//(					For storing data input
struct subject		
{
	char s_name[20];
	char abb[3];
	char teacher[30];
	int t_id;
	int periods;
};

struct classs
{
	int c_name;
	struct subject sub[10];
};

struct classs cls[10];
//)

//(					For arrangement and output of data classwise
struct day
{
	char d_name[5];
	char period[8][4];  // period per day, abbr of subject
};

struct clas
{
	struct day days[5];
};                
          
struct clas cl_s[10];
//)

//(					For arrangement and output of data teacherwise
struct days_t
{
	char dayname_t[3];
	char period_t[8][5];
};

struct teacher
{
	char teacher_t[20];
	struct days_t day_t[5];	
};

struct teacher teach[120];
//)


/*int main()
{
	printf("Enter class name: ");
	// use printf instead} gets(cls[0].c_name);
	printf("\nEnter subject name: ");
	gets(cls[0].sub[0].s_name);
	printf("\nEnter subject abbreviation: ");
	gets(cls[0].sub[0].abb);
	printf("\nEnter teacher name: ");
	gets(cls[0].sub[0].teacher);
	printf("\nEnter t_id");
	scanf("%d",&cls[0].sub[0].t_id);
	printf("\nEnter periods per week");
	scanf("%d",&cls[0].sub[0].periods);
    // use printf instead} puts(cls[0].c_name);
    puts(cls[0].sub[0].s_name);
    puts(cls[0].sub[0].abb);
    puts(cls[0].sub[0].teacher);
    printf("\n%d",cls[0].sub[0].t_id);
    printf("\n%d",cls[0].sub[0].periods);
    getch();
}*/





