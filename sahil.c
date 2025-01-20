#include<stdio.h>
#include<conio.h>

void addstudent();
void studentrecord();
void searchstudent();
void delete();

struct student{
    char first_name[20];
    char last_name[20];
    int roll_no;
    char Class[10];
    char vill[20];
    float per;

};
  void main()
  {
    int choice;
    while(choice!=5){
        printf("\t\t\t====student management system=====");
        printf("\n\n\t\t\t 1.Add Student Record\n");
        printf("\t\t\t 2. Student Record\n");
         printf("\t\t\t 3. Search Student \n");
        printf("\t\t\t 4.Delete Record\n");
        printf("\t\t\t 5.Exit\n");
        printf("\t\t\t___________________________________\n");
        break;
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:

               addstudent();
          break;
        
        default:
          break;
        }
    }
    }
    void addstudent (){
      char another;
      FILE *fp;
      struct student info;
      printf("\t\t\t====student management system=====\n\n\n");
      fp=fopen("student_info.txt","a");
      printf("\n\t\t Enter first_name :");
      scanf("%s",&info.first_name);
       printf("\n\t\t Enter last_name :");
      scanf("%s",&info.last_name);
      printf("\n\t\t Enter roll_no :");
      scanf("%d",&info.roll_no);
      printf("\n\t\t Enter Class   :");
      scanf("%s",&info.Class);
      printf("\n\t\t Enter address :");
      scanf("%s",&info.vill);
      printf("\n\t\t Enter percentage :");
      scanf("%f",&info.per);
     printf("\n\t\t\t________________________\n");

     if(fp==NULL){
      fprintf(stderr,"\t\t can't open files\n");
     }
     else{
      printf("\t\t\t Record stored successfully\n");
     }
     fwrite(&info.sizeof(struct student ),1,fp);
     fclose(fp);
     printf("\t\t\t Do you want to add another record(y/n):");
     scanf("%s",&another);
    }
    while(another==Y || another==N)
    


