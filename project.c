#include <stdio.h>
#include<conio.h>
#include <windows.h>
#include<string.h>
#include<time.h>
void add_accessories_info();
void edit_accessories_info();
void delete_accessories_info();
void view_accessories_info();
void add_user_info();
void edit_user_info();
void delete_user_info();
void view_user_info();
void add_payment_info();
void edit_payment_info();
void delete_payment_info();
void view_payment_info();
void add_vehicle_info();
void edit_vehicle_info();
void view_vehicle_info();
COORD c = {0, 0};
void setxy (int x, int y)
{
 c.X = x; c.Y = y; // Set X and Y coordinates
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
struct motor
{
	int id;
	char name[50];
	float price;
}m;
int main() 
{ 

 int i;
 label1:
 setxy(20,0);
 printf("\n\t\t\t AUTOMATIVE INFORMATION SYSTEM\n ") ;
 for(i=5; i<=70; i++)
{
  setxy(i,5); 
  printf("%c", 223);
  setxy(i,24);
  printf("%c",223);
}
for(i=5;i<=24;i++)
{
	setxy(5,i);
	printf("%c",223);
	setxy(70,i);
	printf("%c",223);
}
setxy(25,9);
printf("WELCOME TO AUTOMOBILE");
setxy(25,12);
FILE *fp;
fp=fopen("login.txt","w");
char username[20];
char password[20];
printf("\n");

printf("\t\t\t USERNAME:");
gets(username);
int n;
n=strcmp(username,"admin");
printf("\n");
printf("\t\t\t password:");
gets(password);
int num;
num=strcmp(password,"1234");
if(num==0)
{
printf("\n\n\t\t\tcorrect password\n\t\t");
system("pause");
system("cls");
}
else
{
	printf("\n\n\t\t\t wrong password! try again");
	system("cls");
	goto label1;
	fcolse(fp);
}
 setxy(20,0);
 printf("\n\t\t\t AUTOMOTIVE INFRORMATION SYSTEM\n ") ;
 for(i=5; i<=70; i++)
{
  setxy(i,5); 
  printf("%c", 223);
  setxy(i,24);
  printf("%c",223);
}
for(i=5;i<=24;i++)
{
	setxy(5,i);
	printf("%c",223);
	setxy(70,i);
	printf("%c",223);
}
setxy(25,12);
time_t t;
time(&t);
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t%s\n",ctime(&t));
setxy(25,5);
 int choice;
   printf("\tMain Menu \n");
   printf("\t.1-add accessoriesinfo\n");
   printf("\t.2-edit accessoriesinfo\n");
   printf("\t.3-delete accessoriesinfo\n");
   printf("\t.4-view accessoriesinfo\n");
   printf("\t.5-add userinfo\n");
   printf("\t.6-edit userinfo\n");
   printf("\t.7-delete userinfo\n");
   printf("\t.8-view userinfo\n");
   printf("\t.9-add paymentinfo\n");
   printf("\t.10-edit paymentinfo\n");
   printf("\t.11-delete paymentinfo\n");
   printf("\t.12-view paymentinfo\n");
   printf("\t.13-add vehicleinfo\n");
   printf("\t.14-edit vehicleinfo\n");
   printf("\t.15-view vehicleinfo\n");
   printf("\t.16-Exit\n");
   printf("\tenter your choice:");
   scanf("%d",&choice);
   switch(choice)
  {
   case 1:
	printf("\t\tAutomobile accessories\n");
	add_accessories_info();
	break;
   case 2:
   	printf("\t\tAutomobile accessories\n");
  	edit_accessories_info();
    break;
   case 3:
    printf("\t\tAutomobile accessories\n");
    delete_accessories_info();
    break;
   case 4:
   	printf("\t\tAutomobile accessories\n");
   	view_accessories_info();
  	break;
   case 5:
	printf("\t\t User \n");
	add_user_info();
	break;
   case 6:
   	printf("\t\t User \n");
  	edit_user_info();
   	break;
   case 7:
    printf("\t\t User \n");
    delete_user_info();
    break;
   case 8:
	printf("\\t\t User \n");
  	view_user_info();
   	break;
   case 9:
    printf("\t\t Payment \n");
	add_payment_info();
	break;
   case 10:
  	printf("\t\t Payment \n");
   	edit_payment_info();
   	break;
   case 11:
    printf("\t\t Payment \n");
    delete_payment_info();
    break;
   case 12:
    printf("\\t\t Payment \n");
  	view_payment_info();
   	break;
   case 13:
	printf("\t\t Vehicle \n");
	add_vehicle_info();
	break;
   case 14:
   	printf("\t\t Vehicle \n"); 
	edit_vehicle_info();
	break;
   case 15:
    printf("\t\t Vehicle \n");
    view_vehicle_info();
    break;
   case 16:
    printf("\n\n\n\n\t\t\t\t Thank you!!\n\n\n\n");
   	exit(0);
   	break;
   default:
	printf("\n\n\n\n\t\t\t\t INVALID INPUT !!! try again....");
	getch();
	fflush(stdin);
	break;
	}
}
void add_accessories_info()
{
	system("cls");
	char ch;
	FILE *fp;			
	fp=fopen("accesssories_recordfile.txt","wb");
	int i=1;
	do
	{
		printf("\n\tEnter the accessories record %d",i);
		printf("\n\tEnter the m id: ");
		scanf("%d",&m.id);
		fflush(stdin);
		printf("\tEnter the  name: ");
		gets(m.name);
		printf("\tEnter the price: ");
		scanf("%f",&m.price);
		fwrite(&m,sizeof(m),1,fp);
		printf("\n\tDo you want to add another data(Y/N): ");
		ch=getche();
		printf("\n\n");
		i++;
	}while(ch=='y'||ch=='Y');
	
	fclose(fp);
	system("cls");
	fp=fopen("accessories_recordfile.txt","rb");
	printf("\n\tThe accessories record you entered are as follows:\n\n");
	printf("\n\tid\t\tname\t\tprice\n");
	while(fread(&m,sizeof(m),1,fp)>0)
	{
		printf("\n\t%d\t\t%s\t\t%f",m.id,m.name,m.price);
	}
	fclose(fp);
	printf("\n\n\n\tPress any key to go back to Main Menu . . . ");
	fflush(stdin);
	getch();
	main();
}
void edit_accessories_info()
{
	system("cls");
	FILE *fp,*fp_Edit;
	int id_check;
	fp=fopen("accessories_recordfile.txt","rb");
	fp_Edit=fopen("accessories_edit.txt","wb");
	printf("\n\tEnter the id you want to edit: ");
	scanf("%d",&id_check);
	while(fread(&m,sizeof(m),1,fp)>0)
	{
		if(id_check!=m.id)
		{
			fflush(stdin);
			printf("\n\tThe id you entered is not found.");
			printf("\n\tPlease search for valid id . . . ");
			getch();
			edit_accessories_info();
		}
		{
			printf("\n\tThe id you entered is found\n");
			printf("\t");
			system("pause");
			system("cls");
			printf("\n\tPrevious accessories info of id %d is:\n",id_check);
			printf("\n\tid\t\tname\t\tprice");
			fflush(stdin);
			printf("\n\t%d\t\t%s\t\t%f",m.id,m.name,m.price);
			printf("\n\n\n\tEnter the new accessories you want to edit:");
			printf("\n\tEnter the m id: ");
			scanf("%d",&m.id);
			fflush(stdin);
			printf("\tEnter the m name: ");
			gets(m.name);
			printf("\tEnter the m price: ");
			scanf("%f",&m.price);
			printf("\n\n\tNew accessories info of id %d is:\n",id_check);
			printf("\n\tid\t\tname\t\tprice");
			fflush(stdin);
			printf("\n\t%d\t\t%s\t\t%f",m.id,m.name,m.price);
			fflush(stdin);
			fwrite(&m,sizeof(m),1,fp_Edit);
		}
	}
	fclose(fp_Edit);
	fclose(fp);
	fflush(stdin);
	printf("\n\n\tPress any key to go back to Main Menu . . . ");
	getch();
	main();
}
void delete_accessories_info()
{
	system("cls");
	FILE *fp,*fp_delete;
	int id_check;
	fp=fopen("accessories_recordfile.txt","rb");
	fp_delete=fopen("accessories_delete.txt","wb");
	printf("\n\tEnter the id you want to delete: ");
	scanf("%d",&id_check);
	while(fread(&m,sizeof(m),1,fp)>0)
	{
		if(id_check!=m.id)
		{
			fflush(stdin);
			printf("\n\tThe id you entered is not found.");
			printf("\n\tPlease search for valid id . . . ");
			getch();
			delete_accessories_info();
		}
		else
		{
			printf("\n\tThe id you entered is found\n");
			printf("\t");
			system("pause");
			system("cls");
			printf("\n\tPrevious accessories record of id %d is:\n",id_check);
			printf("\n\tid\t\tname\t\tprice");
			fflush(stdin);
			printf("\n\t%d\t\t%s\t\t%f",m.id,m.name,m.price);
			char od;
			printf("\n\n\tAre you sure want to delete this data(Y/N): ");
			scanf("%c",&od);
			if(od=='Y'||od=='y')
			{
				printf("\n\tData deleted successfully.");
			}
		}
	}
	fclose(fp_delete);
	fclose(fp);	
}
void view_accessories_info()
{
	system("cls");
	FILE *fp;
	fp=fopen("accessories_recordfile.txt","rb");
	printf("\n\tThe details record of the accessories are as follows:\n\n");
	printf("\n\tid\t\tname\t\tprice");
	while(fread(&m,sizeof(m),1,fp)>0)
	{
		printf("\n\t%d\t\t%s\t\t%f",m.id,m.name,m.price);
	}
	fclose(fp);
	printf("\n\n\n\tPress any key to go back to home page . . . ");
	fflush(stdin);
	getch();
	main();
}
void add_user_info()
{
}
void edit_user_info()
{
}
void delete_user_info()
{
}
void view_user_info()
{
}
void add_payment_info()
{
}
void edit_payment_info()
{
}
void delete_payment_info()
{
}
void view_payment_info()
{
}
void add_vehicle_info()
{
}
void edit_vehicle_info()
{
}
void view_vehicle_info()
{
}
