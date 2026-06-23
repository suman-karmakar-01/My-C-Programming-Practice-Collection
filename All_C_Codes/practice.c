#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

//For 25th
//enum Days{Sun=1, Mon=2, Tue=3, Wed=4, Thurs=5, Fri=6, Sat=7};

//For 24th
/*struct Student {
	char name[20];
	float per;
};*/

//For 23rd
/*typedef struct{
	char name[20];
	char password[12];
	int number;	
} User;*/

//For 22nd
/*struct Player{
	char name[15];
	int score;
};*/

//For 21st
/*void sort(int num[],int size){
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size-i-1; j++){
			if (num[j]>num[j+1]){
				int temp;
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
}

void printArray(int num[],int size){
	for (int i = 0; i < size; i++){
		printf("%d ", num[i]);
	}
}*/

//For 9th
/*int FindMax(int x, int y){
	//Ternary Operator
	return(x>y) ? x:y;*/
	
	//if else statement 
	/*if (x>y){
		return x;
	}
	else {
		return y;
	}*/


//For 8th
/*double square(double x){
	return x*x;
}*/

//For 7th
/*void hello(char name[],int age){
		printf("\nHello %s",name);
		printf("\nYou are %d years old",age);
		printf("\nBye");
}*/

int main() {
	//33. 
	
	
	
	//32. Read Files
	
	/*FILE *pF = fopen("C:\\Important Stuffs\\C stuff\\hell.txt", "r"); // r to read
	char buffer[255];
	
	//To check whether the file exist or not
	if (pF == NULL){
		printf("The File does not Exist!");
	}
	else {
		//To print all the lines
		while (fgets(buffer, 255, pF) != NULL){
		printf("%s",buffer);
		}
	}
	
	fclose(pF);*/
	
	//31. Writing Files 
	
	//To save the file at my prefered location
	/*FILE *pF = fopen("C:\\Important Stuffs\\test.txt","w");
	fprintf(pF,"Spongbob Squarepants");
	fclose(pF);*/
		
	//To save the file here itself
	/*FILE *pF = fopen("ctextfile.txt", "a"); // a to append and w to write
	
	//fprintf(pF,"Hey, I\'m Sameer!");
	fprintf(pF, "\nI\'m 17 Years Old");
	
	fclose(pF);*/
	
	//To remove
	/*if (remove("ctextfile.txt") == 0){
		printf("Your file has successfully been deleted!");
	}
	else {
		printf("Your file is not deleted yet!");
	}*/
	
	//30. Using Pointers
	
	/*int age = 18;
	int *pAge = &age;
	
	printf("Address of Age : %p\n",&age);
	printf("Address of pAge : %p\n", pAge);
	
	printf("Size of Age : %d bytes\n",sizeof(age));
	printf("Size of Address : %d bytes\n",sizeof(pAge));
	
	printf("Value of Age : %d\n",age);
	printf("Value at stored Address : %d\n",*pAge); //Dereference * is use to get the Value at that Address
	*/
	
	//29. Finding out Memory Block, Mermory Address
	
	/*char a;
	char c[3];
	short b;
	double d;
	//
	printf("%d Bytes\n", sizeof(a));
	printf("%d Bytes\n", sizeof(b));
	printf("%d Bytes\n", sizeof(c));
	printf("%d Bytes\n", sizeof(d));
	//
	printf("%p\n",&a);
	printf("%p\n",&b);
	printf("%p\n",&c);
	printf("%p\n",&d);*/
	
	//28. Quiz Game
	
	/*char questions[][100] = {"1. Which planet is known as the Red Planet?","2. Who was the first President of United States?","3. What is the Largest ocean on Earth?"};
	
	char options[][100] = {"A. Venus","B. Mars", "C. Jupiter", "D. Mercury",
	"A. Thomas Jefferson", "B. Abraham Lincoln", "C. George Washington", "D. John Adams",
	"A. Atlantic Ocean", "B. Pacific Ocean", "C. Indian Ocean", "D. Arctic Ocean"};
	
	char answers[3] = {'B','C','B'};
	
	int numberofquestions = sizeof(questions)/sizeof(questions[0]);
	
	char guess;
	int score;
	
	for(int i = 0; i < numberofquestions; i++){
		sleep(1); //This will delay the next line for 1 sec
		printf("%s\n", questions[i]);
		
		for (int j = (i*4); j < (i*4)+4; j++){
			printf("%s\n", options[j]);
			
		}	
		
		printf("Enter your Guess : ");
		scanf("%c", &guess);
		scanf("%c");  // clears \n from input buffer
		
		guess= toupper(guess);
		
		if (guess == answers[i]){
			sleep(1);
			printf("Correct!\n\n");
			score++;
		}
		else {
			sleep(1);
			printf("Wrong!\n");
			sleep(1);
			printf("The correct answer was %c\n\n", answers[i]);
		}
	}
	printf("Final Score! : %d/%d",score,numberofquestions);*/
	
	//27. a guessing game
	
	/*srand(time(0));
	const int MIN = 1;
	const int MAX = 100;
	int answer,guesses,guess;
	
	answer = (rand() % MAX) + MIN;
	
	do{
		printf("Enter your guess : ");
		scanf("%d", &guess);
		if (guess < answer){
			printf("Too Low!\n");
		}
		else if (guess > answer){
			printf("Too High\n!");
		}
		else {
			printf("Correct\n!");
		}
		guesses++;
	}while(guess!=answer);
	printf("Answer = %d\nNumber of Guesses = %d",answer,guesses);*/
	
	//26. using pseduo random numbers ... this is to get random numbers
	
	/*srand(time(0)); //this helps to generate random number each time else it would have printed that same number repeatedly
	int num1= (rand() % 6) + 1;//this will give random number between 1 to 6 
	int num2= (rand() % 6) + 1;
	int num3= (rand() % 6) + 1; 
	printf("%d\n",num1);
	printf("%d\n",num2);
	printf("%d\n",num3);*/
	
	//25. using enum
	
	/*enum Days today = Sat; //enums are not stings, but they can be treated as integers
	//printf("%d", today);
	if (today == Sun || today == Sat){
		printf("It\'s Weekend!");
	}
	else {
		printf("We need to work Today!");
	}*/
	
	//24. using struct to use array
	
	/*struct Student student1 = {"Anurag", 54.67};
	struct Student student2 = {"Rajveer", 78.2};
	struct Student student3 = {"Sameer", 86};
	struct Student student4 = {"Suman", 88.88};
	
	struct Student students[] = {student1, student2, student3, student4};
	for (int i=0; i< sizeof(students)/sizeof(students[0]);i++){
		printf("%-12s \t", students[i].name);
		printf("%.2f\n",students[i].per);
	};*/
	
	//23. using typedef and struct combined
	
	/*User user1 = {"Anurag","Medhini",69};
	User user2 = {"Sameer", "Minecraft",143};
	User user3 = {"Suman","Single",47};
	
	printf("Name : %s\n",user1.name);
	printf("Password : %s\n",user1.password);
	printf("Number : %d\n\n",user1.number);
	
	printf("Name : %s\n",user2.name);
	printf("Password : %s\n",user2.password);
	printf("Number : %d\n\n",user2.number);
	
	printf("Name : %s\n",user3.name);
	printf("Password : %s\n",user3.password);
	printf("Number : %d\n\n",user3.number);*/
	
	//22. using struct
	
	//struct Player Player1;
	//struct Player Player2;
	
	//strcpy(Player1.name,"Suman");
	//strcpy(Player2.name,"Jay");
	//Player1.score = 10;
	//Player2.score = 7;
	
	//OR
	
	/*struct Player Player1 = {"Suman",10};
	struct Player Player2 = {"Jay",7};
	
	printf("%s\n", Player1.name);
	printf("%d\n", Player1.score);
	printf("%s\n", Player2.name);
	printf("%d\n", Player2.score);*/

	//21. sorting numbers or characters
	
	/*int num[] = {9,2,3,6,4,1,7,8,5};
	int size = sizeof(num)/sizeof(num[0]);
	
	sort(num,size);
	printArray(num,size);*/
	
	//20. swaping characters or strings
	
	/*char x[] = "X";
	char y[] = "Y";
	char temp[10];
	strcpy(temp,x);
	strcpy(x,y);
	strcpy(y,temp);
	printf("x = %s\ny = %s",x,y);*/
	
	//19. using 2D array for strings and running those in loop
	
	/*char cars[][10] = {"BMW","Bugatti","RollsRoyals"};
	for (int i=0; i < sizeof(cars)/sizeof(cars[0]);i++){
		printf("Car : %s\n",cars[i]);
	}*/
	
	//18. using 2D array and and running a nested for loop 
	// sizeof function returns the size of the variable or array
	//sizeof(variable[x]) returns the size of each element 
	
	/*int numbers[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int rows = sizeof(numbers)/sizeof(numbers[0]);
	int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
	printf("Rows : %d\nColumns : %d\n",rows,columns);
	for (int i=0; i<rows; i++){
		for (int j=0; j<columns; j++){
			printf("%d",numbers[i][j]);
		}
		printf("\n");
	}*/
	
	//17. using for loop in array
	
	/*double num[] = {11,22,33,44,55};
	for(int i=0;i<=4;i++){
		printf("Number %.2lf\n",num[i]);
	}*/
	
	//16. using Array 
	
	/*int a[10] = {20,30,40,50};
	a[4]=60;
	printf("%d", a[4]);*/
	
	//15. using Continue and Break 
	//continue = skips rest of the code and forces the next iteration of the loop
	//break = exits a loop/switch
	
	/*for (int i = 1; i<=20; i++){
		if (i==13){
			break;
		}
		printf("%d\n",i);
	}*/
	
	
	//14. Nested loop
	
	/*int rows,columns;
	char symbol;
	printf("Enter the number of Rows : ");
	scanf("%d",&rows);
	printf("Enter the number of Columns : ");
	scanf("%d",&columns);
	scanf("%c");
	printf("Enter a symbol : ");
	scanf("%c",&symbol);
	for (int i=1;i<=rows;i++){
		for (int j=1;j<=columns;j++){
			printf("%c",symbol);
		}
		printf("\n");
	}*/
	
	//13. use of do while loop
	
	/*int num=0;
	int sum=0;
	do{
		printf("Enter a number not 0 : ");
		scanf("%d",&num);
		if (num>0){
			sum+=num;
		}
	}while (num>0);
	printf("Sum = %d",sum);*/
	
	
	//12. to check prime or not
	
	/*printf("To check wheter the number entered is prime or not\n\n");
	int num,i;
	int count=0;
	printf("Enter your number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		num%i;
		if(num%i==0){
			count+=1;
		}
	}
	if (count==2){
		printf("Entered number is prime");
	}
	else{
		printf("Entered number is not prime");
	}*/
	
	//11. while loop
	
	/*char name[25];
	printf("Enter your name : ");
	fgets(name,25,stdin);
	name[strlen(name)-1]='\0';
	
	while (strlen(name)==0){
		printf("You didn\'t entered your name!\n\n");
		printf("Enter your name : ");
		fgets(name,25,stdin);
	}
	
	printf("Hello %s", name);*/
	
	//10. for loop 
	
	/*for(int i = 1; i<=10;i+=1){
		printf("%d\n",i);
	}*/
	
	//9. finding max
	
	/*int max= FindMax(10,20);
	
	printf("Max is %d",max);*/
	
	//8. squareing a number
	
	/*double x = square(3.14);
	printf("%lf",x);*/
	
	//7. defining functions
	
	/*char name[] = "Suman";
	int age = 17;
	hello(name, age);*/
	
	//6. to calculate temp
	
	/*printf("This code is to Convert c to f or f to c\n");
	float f;
	float c;
	char scale;
	printf("Enter your Temperature Scale (\'C\' or \'F\') : ");
	scanf(" %c",&scale);
	
	scale = toupper(scale);
	switch(scale) {
		case 'C':
			printf("Enter the value of C : ");
			scanf("%f",&c);
			printf("C to F value is : %.2f",(9.0/5.0 * c) + 32);
			break;
		case 'F':
			printf("Enter the value of F : ");
			scanf("%f",&f);
			printf("C to F value is : %.2f",(f-32)* 5.0/9.0);
			break;
		default:
			printf("Invalid input! Please try again...");
	}*/
	
	//5. switch, case, default 
	
	/*char grade;
	printf("Enter your letter Grade : ");
	scanf("%c",&grade);
	
	switch(grade) {
		case 'A':
			printf("Perfect!\n");
			break;
		case 'B':
			printf("Good!\n");
			break;
		case 'C':
			printf("Okay!\n");
			break;
		case 'D':
			printf("Improve a bit!\n");
			break;
		case 'E':
			printf("Atleast not F!\n");
			break;
		case 'F':
			printf("You are Fail!\n");
			break;
		default:
			printf("Enter correct grade only");
	}*/
	
	//4. if else
	/*printf("Enter your age before getting Signed Up!");
	int age;
	printf("\nEnter your Age : ");
	scanf("%d=",&age);
	if(age>=18) {
		printf("You are Signed Up!");
	}
	else {
		printf("You are too young for Signing Up!");
	}*/
	
	//3. using double
	
	/*printf("This code is to find the Hypotenuse of a Right angled Triangle\n");
	double a;
	double b;
	double hypo;
	printf("Enter the length of 1st side(in cms) : ");
	scanf("%lf",&a);
	printf("Enter the length of 2nd side(in cms) : ");
	scanf("%lf",&b);
	hypo=sqrt(pow(a,2)+pow(b,2));
	printf("Hypotenuse of the Triangle = %lf cm",hypo);*/
	
	//2nd part 
	
	/*printf("This is to calculate the Circumference of a Circle and Area as well\n");
	int r;
	printf("Enter the Radius of the Circle(in cm) : ");
	scanf("%d",&r);
	const float PI=3.14;
	printf("Circumference of the Circle = %.2f cm\n",2*PI*r);
	printf("Area of the Circle = %.2f cm^2",PI*pow(r,2));*/
	
	//1st part 
	
	/*int class;
	float per;
	char sec;
	char name[20];
	printf("Enter your Name : ");
	scanf("%s",&name);
	printf("Enter your Class : ");
	scanf("%d",&class);
	printf("Enter your Section : ");
	scanf(" %c",&sec);
	printf("Enter your Percentage : ");
	scanf("%f",&per);
	printf("\nStudent Details are as follows : \nName - %s\nClass - %d\nSection - %c\nPercentage - %.2f",name,class,sec,per);*/
	
	return 0;
}