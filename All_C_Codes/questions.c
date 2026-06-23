#include<stdio.h>
#include<math.h>
#include<string.h>

//For 2.
/*int FindMax(int a,int b,int c){
	if (a>b && a>c){
		return a;
	}
	else if (b>a && b>c){
		return b;
	}
	else {
		return c;
	}
}*/


int main(){
	//5. 
	
	
	//4. Entering correct Password
	/*char str[8];
	printf("Enter your Password : ");
	scanf("%s",str);
	while (strcmp(str,"Password")!=0){
		printf("\nYou Entered wrong password!");
		printf("\n\nEnter the correct Password : ");
		scanf("%s",str);
	}
	printf("Access Granted!");*/
	
	
	//3. Square and Cube Table
	/*int i,n,s,q;
	printf("Enter the number till you want the Square and Cube table be shown : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		s=pow(i,2);
		q=pow(i,3);
		printf("\n\nSquare of %d is %d\nCube of %d is %d",i,s,i,q);
	}*/
	
	
	//2. To find max among 3 numbers
	/*int a,b,c;
	printf("Enter 3 numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	printf("Max number among %d, %d, %d is %d",a,b,c,FindMax(a,b,c));*/
	
	
	//1. Grade Calculator
	/*float per;
	printf("Enter your percentage : ");
	scanf("%f",&per);
	if (per>100 || per<0){
		printf("Please enter valid percentage!");
	}
	else if (per<=100 && per>=90) {
		printf("Congratulations! You got \'A\' Grade!");
	}
	else if (per<=89 && per>=80){
		printf("Excellent! You got \'B\' Grade!");
	}
	else if (per<=79 && per>=70){
		printf("Not Bad! You got \'C\' Grade!");
	}
	else if (per<=69 ){
		printf("Need Improvement! You got \'D\' Grade!");
	}
	else{
		printf("\nPlease enter valid percentage!");
	}*/

	return 0;
}