#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

/*?? Question: Student Record Management System (Mini Database in C)

Write a menu-driven program in C to manage student records using structs and typedef.

Requirements:

Define a typedef struct called Student with fields:

Roll number (int)

Name (string)

Age (int)

Marks in 3 subjects (array of 3 floats)

Average marks (float)

The program should provide the following menu options:

Add new student record

Display all student records

Search a student by roll number

Update student details (name/age/marks)

Delete a student record by roll number

Display topper student (highest average)

Sort students by average marks (descending)

Exit

Use:

Functions for each operation (e.g. addStudent(), displayAll(), etc.).

Array of struct to store students (say max 100).

Pointers for string handling and passing structs to functions*/

typedef struct {
	
	int roll_no;
	int age;
	char name[30];
	float marks[3];
	float avgmarks;
	
} student;

int main() {
	
	//Choice Menu
	int choice;
	
	printf("Your Choices are : \n");
	printf("1. Add new student record\n2. Display all student records\n3. Search a student by roll number\n4. Update student details (name/age/marks)\n5. Delete a student record by roll number\n6. Display topper student (highest average)\n7. Sort students by average marks (descending)\n8. Exit\n\n");
	printf("Enter your Choice number : ");
	scanf("%d",&choice);
	
	//Student Details
	student student1;
	student1.roll_no = 10;
	student1.age = 18;
	strcpy(student1.name,"Anurag");
	student1.marks[0] = 45;
	student1.marks[1] = 73.25;
	student1.marks[2] = 81.6;
	student1.avgmarks = (student1.marks[0]+student1.marks[1]+student1.marks[2])/3;
	
	student student2;
	student2.roll_no = 18;
	student2.age = 17;
	strcpy(student2.name,"Sameer");
	student2.marks[0] = 83;
	student2.marks[1] = 81;
	student2.marks[2] = 88;
	student2.avgmarks = (student2.marks[0]+student2.marks[1]+student2.marks[2])/3;
	
	student student3;
	student3.roll_no = 23;
	student3.age = 17;
	strcpy(student3.name,"Suman");
	student3.marks[0] = 89;
	student3.marks[1] = 99;
	student3.marks[2] = 83;
	student3.avgmarks = (student3.marks[0]+student3.marks[1]+student3.marks[2])/3;
	
	//1. Add new Studnets
	
	student student4;
	printf("Enter the Roll number of the Student : ");
	scanf("%d",&student4.roll_no);
	printf("Enter the age of the Student : ");
	scanf("%d",&student4.age);
	printf("Enter the Name of the Student : ");
	scanf("%s",&student4.name);
	printf("Enter the Marks for 1st Subject of the Student : ");
	scanf("%f",&student4.marks[0]);
	printf("Enter the Marks for 2nd Subject of the Student : ");
	scanf("%f",&student4.marks[1]);
	printf("Enter the Marks for 3rd Subject of the Student : ");
	scanf("%f",&student4.marks[2]);
	student4.avgmarks = (student4.marks[0]+student4.marks[1]+student4.marks[2])/3;
	printf("%.2f\n", student4.avgmarks);
	
	//2. Display all student record
	struct student Studentz[] = {student1,student2,student3,student4};
	for(int i=0; i< sizeof(Student)/sizeof(Student[0]); i++){
		printf("%.2f\n",Student[i].avgmarks);
	}
	
	//Temporary stuffs
	/*printf("%.2f\n", student1.avgmarks);
	printf("%.2f\n", student2.avgmarks);
	printf("%.2f\n", student3.avgmarks);*/
	
	
	return 0;
}