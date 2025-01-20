#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1000

typedef struct
{

    char name[50];

    int rollNo;

    char branch[10];

    char address[100];

    char dob[20];

    char phone[15];

    char email[50];

} Student;

int front = -1, rear = -1;

Student queue[MAX_SIZE];

void add_student()
{

    if (rear == MAX_SIZE - 1)
    {

        printf("ERROR : Storage full \n");

        return;
    }

    Student s;

    printf("Enter student name: ");

    scanf("%s", s.name);

    printf("Enter student roll number: ");

    scanf("%d", &s.rollNo);

    printf("Enter student branch: ");

    scanf("%s", s.branch);

    printf("Enter student address: ");

    scanf("%s", s.address);

    printf("Enter student date of birth: ");

    scanf("%s", s.dob);

    printf("Enter student phone number: ");

    scanf("%s", s.phone);

    printf("Enter student email: ");

    scanf("%s", s.email);

    queue[++rear] = s;

    printf("Student data insert successfully\n");
}

void delete_student()
{

    if (front && rear == -1)
    {

        printf("ERROR : No data found\n");

        return;
    }

    printf("Delete student data:\n");

    Student s = queue[++front];

    printf("Name: %s\n", s.name);

    printf("Roll number: %d\n", s.rollNo);

    printf("Branch: %s\n", s.branch);

    printf("Address: %s\n", s.address);

    printf("Date of birth: %s\n", s.dob);

    printf("Phone number: %s\n", s.phone);

    printf("Email: %s\n\n\n", s.email);
}

void display()
{

    if (front && rear == -1)
    {

        printf("Empty : There is no Record of Student found \n");

        return;
    }

    printf("\n\nStudent data in the queue:\n");

    for (int i = front + 1; i <= rear; i++)
    {

        printf("Name: %s\n", queue[i].name);

        printf("Roll number: %d\n", queue[i].rollNo);

        printf("Branch: %s\n", queue[i].branch);

        printf("Address: %s\n", queue[i].address);

        printf("Date of birth: %s\n", queue[i].dob);

        printf("Phone number: %s\n", queue[i].phone);

        printf("Email: %s\n\n\n", queue[i].email);
    }
}

 void writeToFile()
{

    if (front && rear == -1)
    {

        printf(" empty\n");

        return;
    }

    FILE *fp = fopen("students.txt", "wb");

    if (fp == NULL)
    {
        

        printf("Error opening file\n");

        return;
    }

    for (int i = front + 1; i <= rear; i++)
    {

        fwrite(&queue[i], sizeof(Student), 1, fp);
    }

    fclose(fp);

    printf("Student data written to file successfully\n");
}

void readFromFile()
{

    FILE *fp = fopen("students.bin", "rb");

    if (fp == NULL)
    {

        printf("Error opening file\n");

        return;
    }

    Student s;

    printf("\nStudent data read from file:\n\n");

    while (fread(&s, sizeof(Student), 1, fp) == 1)
    {

        printf("Name: %s\n", s.name);

        printf("Roll number: %d\n", s.rollNo);

        printf("Branch: %s\n", s.branch);

        printf("Address: %s\n", s.address);

        printf("Date of birth: %s\n", s.dob);

        printf("Phone number: %s\n", s.phone);

        printf("Email: %s\n\n\n", s.email);
    }

    fclose(fp);
}

void display_student()
{

    if (front && rear == -1)
    {

        printf("Empty : There is no Record of Student found \n");

        return;
    }

    int i;

    printf("\n\nEnter s.no : ");

    scanf("%d", &i);
    printf("\n\nStudent data in the queue:\n");

    printf("Name: %s\n", queue[i].name);

    printf("Roll number: %d\n", queue[i].rollNo);

    printf("Branch: %s\n", queue[i].branch);

    printf("Address: %s\n", queue[i].address);

    printf("Date of birth: %s\n", queue[i].dob);

    printf("Phone number: %s\n", queue[i].phone);

    printf("Email: %s\n\n\n", queue[i].email);
}



 int main()
{

    int choice;

    while (1)
    {

        printf("|***************************|");

        printf("\n\tMenu\n");

        printf("|1. Enter student data\n");

        printf("|2. Delete student data\n");

        printf("|3. Display all student data\n");

        printf("|4. display student data\n");

        printf("|5. Write student data to file\n");

        printf("|6. Read student data from file\n");

        printf("|7. Exit\n\n");

        printf("|***************************|\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

            add_student();

            break;

        case 2:

            delete_student();

            break;

        case 3:

            display();

            break;

        case 4:

            display_student();

        case 5:

            writeToFile();

            break;

        case 6:

            readFromFile();

            break;

        case 7:

            printf("\tExiting program...\n\n\n");

            exit(0);

            break;

        default:

            printf("Invalid choice\n");

            break;
        }
    }

    return 0;
}