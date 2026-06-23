#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>

//1. Sq and Cube
/*int sq(int x){
	int y=x*x;
	return y;
}
int cu(int x){
	int y=x*x*x;
	return y;
}*/


//2. Armstrong
/*int arm(int x){
	int sum=0,rem;
	while(x!=0){
		rem=x%10;
		sum+=rem*rem*rem;
		x/=10;
	}
	return sum;
}*/

//3. a number can be expressed as the sum of 2 prime numbers
/*int isprime(int x){
	int y=0,z=0;
	for(int i=2;i<=x+1;i++){
		if(x%i==0){
			y++;
		}
		else{
			continue;
		}
	}
	if(y==1){
		z=x;
	}
	return z;
}*/


//4. Sum of digits of Number + Max number among 3
/*int sumofdigit(int x){
	int rem,sum=0;
	while(x!=0){
		rem=x%10;
		sum+=rem;
		x/=10;
	}
	return sum;
}

int maxin3(int x, int y, int z){
	int a;
	if(x>y && x>z){
		a=x;
	}
	else if(y>x && y>z){
		a=y;
	}
	else{
		a=z;
	}
	return a;
}*/


//5. Power Fuction
/*int power(int x, int y){
	int val=1;
	for(int i=1; i<=y; i++){
		val*=x;
	}
	return val;
}*/


int main() {
	
	//7. Frequency of a character in a string
	
	/*char str[] = "aaussuucucuicciocco";
	int rep[50];
	int Hz=0;
	for(int i=0; i<50; i++){
		rep[i] = 0;
	}
	for(int i=0; i< strlen(str); i++){
		Hz=0;
		if(rep[i]==0){
			for(int j=i; j<strlen(str); j++){
				if(str[i]==str[j]){
					Hz++;
					rep[j]=1;
				}	
			}
			printf("%c occurs %d times\n",str[i], Hz);
		}
	}*/
	//OR
	/*char str[] = "aaussuucucuicciocco";
	int n=strlen(str);
	int arr1[256] = {0};
	for(int i=0; i<n; i++){
		arr1[str[i]]++;
	}
	for(int i=0; i<256; i++){
		if(arr1[i]>0){
			printf("%c occurs %d times\n",i, arr1[i]);
		}
	}*/
	
	//6. Take a 1D array of size 15, check if a specific number in that array or not
	
	/*int arr[15] = {2,3,44,67,93,86,20,17,72,23,48,37,68,52,58};
	int n,flag=1;
	printf("Enter any number : ");
	scanf("%d",&n);
	for(int i=0; i<15; i++){
		if(n==arr[i]){
			flag=0;
		}
		else{
			continue;
		}
	}
	if(!flag){
		printf("Yes %d is in the Array!", n);
	}
	else{
		printf("No %d is not in the Array!", n);
	}*/
	
	//5. Count no. of Vowels and Consonants in a string
	
	/*char str[] = "abcdefghijklmnopqrstuvwxyz";
	int vow = 0, con = 0;
	for(int i=0; i<strlen(str);i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			vow++;
		}
		else{
			con++;
		}
	}
	printf("Vowel Count = %d\nConsonant Count = %d", vow, con);*/
	
	//4. If the string is Palindrome or not
	
	/*char str[] = "NAMAN";
	char opp[25];
	int len=strlen(str),isPalindrome=1;
	for (int i=0; i<len/2;i++){
		if (str[i] != str[len-1-i]){
		isPalindrome=0;
		break;
		}
	}
	if(isPalindrome){
		printf("Yes, the string is Palindrome");
	}
	else{
		printf("No, the string is not a Palindrome");
	}*/
	
	//3. Take an array and replace its 5th element with a new one
	
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	arr[5] = 66;
	for(int i=0; i<10; i++){
		printf("%d\n",arr[i]);
	}*/
	
	//2. Take a matrix of size (2x3) and transpose it
	
	/*int matrix[2][3]={{1,2,3},
					{10,20,30}};
	int transpose[3][2];
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			transpose[j][i]=matrix[i][j];
			printf("[%d][%d] = %d\n",j,i,transpose[j][i] );
		}
	}
	
	
	//1. Max and Min of an array elements and their positions
	
	/*int arr[10] = {23,47,92,17,33,79,37,10,25,88};
	int max = -9999, min = 99999,max_pos, min_pos;
	for(int i=0; i<10; i++){
		if(max<arr[i]){
			max=arr[i];
			max_pos=i;
		}
		if(min>arr[i]){
			min=arr[i];
			min_pos=i;
		}
	}
	printf("Max Value = %d , Position = %d\nMin Value = %d , Position = %d", max, max_pos,min,min_pos);*/
	
	
	
	
	
	
	
	
	//14. Take one matrix of size 3 x 2 and another of size 2 x 4. Do matrix multiplication
	
	
	
	//13. Take 2 matrices of 3x4 and add them up
	
	/*int matrix1[3][4] = {{1,2,3,4},{2,4,6,8},{3,6,9,12}};
	int matrix2[3][4] = {{1,2,1,2},{2,3,2,3},{3,4,3,4}};
	int sum[3][4];
	for(int i=0;i<3; i++){
		for(int j=0; j<4; j++){
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("sum[%d][%d] = %d\n",i,j,sum[i][j]);
		}
	}*/
	
	//12. Frequency of Number Repeated 
	
	/*int arr[10] = {2, 3, 2, 1, 6, 6, 4, 6, 4, 8};
	int f;
	int rep[10];
	for(int i=0; i<10; i++){
		rep[i]=0;
	}
	for(int i=0; i<10; i++){
		f=0;
		if(rep[i]==0){
			for(int j=i; j<10; j++){
			if(arr[i]==arr[j]){
				f++;
				rep[j]=1;
			}
		}
			printf("%d occurs %d times\n",arr[i],f);
		}
	}*/
	
	//OR
	
	/*int arr[10] = {2, 3, 2, 1, 6, 6, 4, 6, 4, 8};
	int arr1[10] = {0};
	for(int i=0; i<10; i++){
		arr1[arr[i]]++;
	}
	for(int i=0; i<10; i++){
		if(arr1[i]>0){
			printf("%d occurs %d times\n", i , arr1[i]);
		}
	}*/
	
	//11.check if arr[ 0 ] = arr[ n- 1], arr[1]=arr[n-2] and so on 
	
	/*int arr[10];
	printf("Enter 10 Elements for an Array : \n");
	for (int i=0;i<=9;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0; j<=9; j++){
		if(arr[j]==arr[9-j]){
			printf("%d = %d\n",arr[j],arr[9-j]);
		}
		else{
			printf("%d != %d\n",arr[j],arr[9-j]);
		}
	}*/
	
	//10. To find max andd min element in a array
	
	/*int arr[10] = {11,12,31,4,50,62,75,82,9,100};
	int max = arr[0], min = arr[0];
	for(int i=0; i<10; i++){
		//for max
		if(arr[i]>max){
			max=arr[i];
		}
		//for min
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Max = %d and Min = %d", max,min);*/
	
	//9. Create an array and remove any desired position's element and add a new one
	
	/*int arr[10] = {11,12,31,4,50,62,75,82,9,100};
	int p,n;
	printf("Enter the desired position number from the array which you wanna replace : ");
	scanf("%d",&p);
	printf("Enter the number which you want to insert on that position : ");
	scanf("%d",&n);
	arr[p] = n;
	for(int i=0;i<10;i++){
		printf("arr[%d] = %d\n", i,arr[i]);
	}*/
	
	//8. Copy the array elements to a new array
	
	/*int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	int new_arr[10];
	for(int i=0; i<10; i++){
		new_arr[i] = arr[i];
		printf("new_arr[%d] = %d\n",i,new_arr[i]);
	}*/
	
	//7. Insert a new element in the 4th posiltion
	
	/*int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	arr[4] = 55;
	for(int i=0; i<9; i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}*/
	
	//6. Form the series: 26 12 20 30 42 56 72 90 110
	
	/*int series[9] = {26,12,20,30,42,56,72,90,110};
	for(int i=0; i<9; i++){
		printf("series[%d] = %d\n",i,series[i]);
	}*/
	
	//5. Create a new array with reverse of another array
	
	/*int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	int arr_rev[10];
	for(int i=0;i<10;i++){
		arr_rev[i]=arr[9-i];
		printf("arr_rev[%d] = %d\n", i,arr_rev[i]);
	}
	
	//4. Print the product of odd indexes value
	
	/*int arr[8] = {10,20,30,40,50,60,70,80};
	int prod=1;
	for(int i=1; i<8; i+=2){
		prod*=arr[i];
	}
	printf("Product of all the odd indexes values = %d",prod);*/
	
	//3. Print even indexes and all up those
	
	/*int arr[8] = {10,20,30,40,50,60,70,80};
	int sum=0;
	for(int i=0; i<8; i+=2){
		printf("arr[%d] = %d\n",i,arr[i]);
		sum+=arr[i];
	}
	printf("Sum of all the even indexes values = %d",sum);
	
	//2. Printing values of 2 arrays and their addresses
	
	/*int arr1[5] = {10,20,30,40,50};
	float arr2[5] = {11,22,33,44,55};
	for (int i=0; i<5; i++){
		printf("arr1[%d] --> Value = %d , Address = %u\narr2[%d] --> Value = %.2f , Address = %u\n\n",i,arr1[i],&arr1[i],i,arr2[i],&arr2[i]);
	}*/
	
	//1. Create an array of n numbers and insert those
	
	/*int n;
	printf("Enter your number of elements in the Array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter your %d number of elements : ",n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	//Optional
	for(int i=0; i<n; i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}*/
	
	
	
	
	//5. Find from second up to the fifth power at any number having absolute values less than 10
	
	/*int x;
	printf("Enter your Number : ");
	scanf("%d",&x);
	if(x>-10 && x<10){
		for(int i=2; i<=5; i++){
			printf("%d raised to power of %d = %d\n",x,i,power(x,i));
		}
	}
	else{
		printf("Enter number less than absolute value of 10");
	}*/
	
	//4. Find the sum of digits for three numbers taken from the user and find the maximum of their sum
	
	/*int x,y,z,sum1=0,sum2=0,sum3=0,rem;
	printf("Enter your 1st Number : ");
	scanf("%d",&x);
	printf("Enter your 2nd Number : ");
	scanf("%d",&y);
	printf("Enter your 3rd Number : ");
	scanf("%d",&z);
	
	
	sum1=sumofdigit(x);
	sum2=sumofdigit(y);
	sum3=sumofdigit(z);
	printf("Sum of the Digits of Numbers are %d, %d, %d\n",sum1,sum2,sum3);
	
	printf("%d is the largest sum",maxin3(sum1,sum2,sum3));*/
	
	
	//3. A number can be expressed as the sum of 2 prime numbers

	//34
	/*int x,y,count=0;
	printf("Enter your Number : ");
	scanf("%d",&x);
	for(int i=2;i<=x; i++){
		for (int j=2; j<=x/2; j++){
			if((isprime(i) && isprime(j)) && (isprime(i)+isprime(j)==x)){
				printf("%d + %d = %d\n",isprime(i),isprime(j),x);
			}
			else{
				continue;
			}
		}
	}*/

	//2. Check whether the Number is Armstrong or not
	
	/*int x,rem,sum=0;
	printf("Enter your 3 digit number : ");
	scanf("%d",&x);
	if(arm(x)==x){
		printf("Its an Armstrong Number!");
	}
	else{
		printf("Its not an Armstrong Number!");
	}*/
	
	//1. Find the Square and Cube of any number
	
	
	/*int x;
	printf("Enter your number : ");
	scanf("%d",&x);
	printf("The Square of %d = %d \nThe Cube of %d = %d",x,sq(x),x,cu(x));*/
	
	
	
	
	
	//11.
	
	/*char ch[11] = "aBcDeFgHiJ";
	for(int i=0; i<11; i++){
		for (int j=0; j<=i; j++){
			printf("%c ", ch[i]);
		}
		printf("\n");
	}*/
	
	//10.
	
	/*for(int i=1; i<=6; i++){
		for (int j=1; j<=i; j++){
			printf("  ");
		}
		for (int k=6; k>=i; k--){
			printf("* ");
		}
		printf("\n");
	}*/
	
	//9.
	
	/*char ch[7]= "ABCDEF";
	for (int i=0; i<6; i++){
		for(int j=0; j<i; j++){
			printf(" ");
		}
		for (int k=0; k<=i; k++){
			printf("%c",ch[k]);
		}
		printf("\n");
	}*/
	
	//8.
	
	/*for (int i=1; i<=6; i++){
		for (int j=1; j<=i; j++){
			printf(" ");
		}
		for( int k=1; k<=5; k++){
			printf("* ");
		}
		printf("\n");
	}*/
	
	//7. 
	
	/*for(int i=1; i<=5; i++){
		for(int j=i; j<=5;j++){
			printf(" ");
		}
		for(int j=1; j<2*i; j++){
			if(j==1 || j==2*i-1 || i == 5){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}*/
	
	//6. 
	
	/*for (int i=0; i<=4; i++){
		for (int j=0; j<=i; j++){
			printf("  ");
		}
		for (int k=9; k>2*i; k--){
			printf("* ");
			
		}
		printf("\n");
	}*/
	
	//5. 
	
	/*for(int i=5; i>=1; i--){
		for (int j=1; j<=i; j++){
			printf("%d ",j);
		}
		printf("\n");
	}*/
	
	//4.
	
	/*int num=1;
	for (int i=1; i<=5; i++){
		for (int j=1; j<=i; j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}*/
	
	//3. 
	
	/*for (int i=1; i<=6; i++){
		for (int j=1; j<=i; j++){
			if ((i+j)%2==0){
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}*/
	
	//2. 
	
	/*for (int i=1; i<=5; i++){
		for (int j=i; j<=5; j++){
			printf(" ");
		}
		for (int k=1; k<=i; k++){
			printf("%d ",i);
		}
		printf("\n");
	}*/
	
	//1. Calculator
	
	/*int opt,x,y;
	printf("Enter your 1st Integer : ");
	scanf("%d",&x);
	printf("Enter your 2nd Integer : ");
	scanf("%d",&y);
	printf("Your Options for Operations are : \n1. + \n2. - \n3. * \n");
	printf("Enter your Option Number : ");
	scanf("%d",&opt);
	switch(opt){
		case 1:
			printf("Addition of %d and %d = %d",x,y,x+y);
			break;
		case 2:
			printf("Substraction of %d and %d = %d",x,y,x-y);
			break;
		case 3:
			printf("Multiplication of %d and %d = %d",x,y,x*y);
			break;
		default:
			printf("Please enter a valid Option!");
	}*/
	
	
	
	
	//5. To check Perfect Number
	
	/*int x,sum=0;
	printf("Enter the Number : ");
	scanf("%d",&x);
	for(int i = 1; i<=x/2; i++){
		if(x%i==0){
			sum+=i;
		}
	}
	if(sum==x){
		printf("Its a Perfect Number!");
	}
	else{
		printf("Its not a Perfect Number!");
	}*/
	
	//4. Fibonacci Series
	
	/*int x=0,i=1,nxt;
	printf("%d\n",x);
	do{
		printf("%d\n",i);
		nxt=x+i;
		x=i;
		i=nxt;
	}while(i <= 8);*/
	
	//2. To check Armstrong Number
	
	/*int x,rem,len,sum=0;
	printf("Enter Your Number : ");
	scanf("%d",&x);
	int y=x;
	//printf("Enter the Number of Digits it have : ");
	//scanf("%d",&len);
	while(x != 0){
		rem = x%10;
		//If number of digits given
		//sum += pow(rem,len);
		//If and only if its a 3 digit!
		sum += rem*rem*rem;
		x /= 10;
	}
	if (y==sum){
		printf("It\'s an Armstrong Number!");
	}
	else{
		printf("It\'s not an Armstrong Number!");
	}*/
	
	//1. To check for Palidrome or not
	
	/*int x,rev,rem;
	printf("Enter your Number : ");
	scanf("%d",&x);
	int y=x;
	while (x!=0){
		rem = x%10;
		rev= rev * 10 + rem;
		x /= 10;
	}
	if (y==rev){
		printf("The number is a Palidrome Number!");
	}
	else{
		printf("It\'s not a Palidrome NUmber!");
	}*/
	
	
	
	
	//5. Running the code untill user guesses the right number!
	
	/*int x;
	int i=7;
	do{
		printf("Enter your Number between (1-10) : ");
		scanf("%d",&x);
		if (i !=x){
			printf("Wrong! Try Again!\n");
		}
		else {
			printf("Correct!");
		}
	}while(i !=x);*/
	
	//4. A code to exit when the user says to!
	
	/*int x,y;
	char choice;
	do{
		printf("Enter your 1st number : ");
		scanf("%d",&x);
		printf("Enter your 2nd number : ");
		scanf("%d",&y);
		printf("Sum of %d and %d is %d\n",x,y,x+y);
		printf("Do you want to repeat it again? (Y/N) : ");
		scanf("%c");
		scanf("%c",&choice);
	}while(choice == 'Y');
	printf("Thank You!");
	
	//3. Reverse of the number 
	
	/*int x,y;
	int rem,rev;
	printf("Enter your number : ");
	scanf("%d",&x);
	y=x;
	while(x!=0){
		rev*=10;
		rem=x%10;
		rev+=rem;
		x=x/10;
	}
	printf("Reverse of %d is %d",y,rev);*/
	
	//2. Multiplication Table
	
	/*int x;
	int y=1;
	printf("Enter the number : ");
	scanf("%d",&x);
	do{
		printf("%d x %d = %d\n",x,y,x*y);
		y++;
	}while(y<=10);*/
	
	//1. sum of 1st 'n' terms
	
	/*int n;
	int sum=0;
	printf("Enter the number till where you want to add up : ");
	scanf("%d",&n);
	for(int i=0; i<=n; i++){
		sum +=i;
	}
	printf("Sum of 1st n terms = %d",sum);*/
	
	
	
	
	
	//7. Print from 'B' to 'T' with gap of 2
	
	/*for (char i='B'; i<='T';i+=2){
		printf("%c ",i);
	}*/
	
	//6. Print form 'Z' to 'A'
	
	/*for (char i='Z'; i>='A';i--){
		printf("%c\ ",i);
	}*/
	
	//5. Print 1 to x and also print if its divisible by 4 or not
	
	/*int x,i=1;
	printf("Enter a positive number : ");
	scanf("%d",&x);
	while (i<=x){
		if (i%4==0){
			printf("%d is divisible by 4\n",i);
		}
		else {
			printf("%d is not divisible by 4\n",i);
		}
		i++;
	}*/
	
	//4. Printing from -n to n with increment of 0.5
	
	/*float n;
	printf("Enter your positive floating number : ");
	scanf("%f",&n);
	for (float i=-n; i<=n; i+=0.5){
		printf("%.2f\n",i);
	}*/
	
	//3. Printing series of number accordingly
	
	/*int num;
	printf("Enter any Positive Integer : ");
	scanf("%d", &num);
	if (num<0){
		num=-num;
	}
	if (num%2==0){
		for (int i=-1; i<=num; i++){
			printf("%d\n",i);
		}
	}
	else {
		for (int i=num; i>=-5; i--){
			printf("%d\n",i);
		}
	}*/
	
	//2. Whether its an equilateral, Scalene or Isosceles!
	
	/*int a,b,c;
	printf("Enter the lengths of the triangle : ");
	scanf("%d %d %d", &a,&b,&c);
	if (a+b>c && b+c>a && a+c>b){
		if (a==b && b==c){
			printf("Its an Equilateral Triangle!");
		}
		else if (a==b || b==c || a==c){
			printf("Its an Isosceles Triangle!");
		}
		else {
			printf("Its a Scalene Triangle!");
		}
	}
	else {
		printf("It doesn\'t form a Triangle!");
	}*/
	
	//1. Check if its a triangle
	
	/*int a,b,c;
	printf("Enter the lengths of the triangle : ");
	scanf("%d %d %d", &a,&b,&c);
	if (a+b>c && b+c>a && a+c>b){
		printf("It forms a Triangle!");
	}
	else {
		printf("It doesn\'t form a Triangle!");
	}*/
	
	//9. Claculator
	
	/*char operator;
	printf("Enter your Operator( + - * / ) : ");
	scanf("%c",&operator);
	int a,b,result;
	printf("Enter your 1st number : ");
	scanf("%d",&a);
	printf("Enter your 2nd number : ");
	scanf("%d",&b);
	
	if (operator=='+') {
		result=a+b;
		printf("%d + %d = %d", a,b,result);
	}
	else if (operator=='-'){
		result=a-b;
		printf("%d - %d = %d", a,b,result);
	}
	else if (operator=='*'){
		result=a*b;
		printf("%d * %d = %d", a,b,result);
	}
	else if (operator=='/'){
		result=a/b;
		printf("%d / %d = %d", a,b,result);
	}
	else{
		printf("%c operator is invalid!",operator);
	}*/
	
	//8. Calculate total electricity bill
	
	/*int units;
	float price;
	printf("Enter the number of Units you  got : ");
	scanf("%d",&units);
	if (units<=50 && units>=0){
		price = (units*5) + (0.2*(units*5));
		printf("Bill : %.2f",price);
	}
	else if (units>=51 && units<=150){
		price = (units*10) + (0.2*(units*10));
		printf("Bill : %.2f",price);
	}
	else if (units>=151 && units<=250){
		price = (units*15) + (0.2*(units*15));
		printf("Bill : %.2f",price);
	}
	else if (units>250){
		price = (units*20) + (0.2*(units*20));
		printf("Bill : %.2f",price);
	}
	else {
		printf("Enter a Valid Unit");
	}*/
	
	//7. Grade calculation
	
	/*float per;
	printf("Enter your Percentage : ");
	scanf("%f",&per);
	if (per<=100 && per>=0){
		if (per<=100 && per>=91){
			printf("Grade O!");
		}
		else if (per<=90 && per>=81){
			printf("Grade A!");
		}
		else if (per<=80 && per>=71){
			printf("Grade B!");
		}
		else if (per<=70 && per>=61){
			printf("Grade C!");
		}
		else if (per<=60 && per>=51){
			printf("Grade D!");
		}
		else if (per<=50 && per>=41){
			printf("Grade E!");
		}
		else {
			printf("Fail!");
		}
	}
	else {
		printf("Enter a Valid Percentage!");
	}*/
	
	//6. Is alphabet, digit, or special character
	
	/*char ch;
	printf("Enter your Character : ");
	scanf("%c", &ch);
	if ((ch>='A' && ch<='Z') ||  (ch>='a' && ch<='z')){
		printf("Entered Character is an Alphabet");
	}
	else if (ch>='0' && ch<='9'){
		printf("Entered Character is a Digit");
	}
	else {
		printf("Entered Character is a Special Character");
	}*/
	
	//5. Is vowel or consonant or none of these
	
	/*char a;
	printf("Enter your Character in Upper Case : ");
	scanf("%c",&a);
	if (a>='A' && a<='Z'){
		if (a=='A' || a=='E' || a=='I' || a=='O' || a=='U') {
			printf("Entered Charcter is Vowel!");
		}
		else {
			printf("Entered Character is Consonant!");
		}
	}
	else {
		printf("Entered Character is Neither a Vowel nor a Consonant!");
	}*/
	
	//4. Is alphabet or not
	
	/*char alpha;
	printf("Enter your Character in Upper Case : ");
	scanf("%c",&alpha);
	if ((alpha>='A' && alpha<='Z') ||  (alpha>='a' && alpha<='z')){
		printf("Entered Character is an Alphabet!");
	}
	else {
		printf("Entered Character is not an Alphabet!");
	}*/
	
	//3. Find out smallest and largest among 3 nos.
	
	/*int num1,num2,num3;
	printf("Enter your 1st number : ");
	scanf("%d",&num1);
	printf("Enter your 2nd number : ");
	scanf("%d",&num2);
	printf("Enter your 3rd number : ");
	scanf("%d",&num3);
	if (num1>num2 && num1>num3){
		printf("%d is the Largest among %d, %d\n",num1,num2,num3);
		if (num2>num3){
			printf("%d is the Smallest among %d, %d",num3,num1,num2);
		}
		else {
			printf("%d is the Smallest among %d, %d",num2,num1,num3);
		}
	}
	else if (num2>num1 && num2>num3) {
		printf("%d is Largest among %d, %d\n",num2,num1,num3);
		if (num1>num3){
			printf("%d is the Smallest among %d, %d",num3,num1,num2);
		} 
		else {
			printf("%d is the Smallest among %d, %d",num1,num2,num3);
		}
	}
	else {
		printf("%d is Largest among %d, %d\n",num3,num1,num2);
		if (num1>num2) {
			printf("%d is the Smallest among %d, %d",num2,num1,num3);
		}
		else {
			printf("%d is the Smallest among %d, %d",num1,num2,num3);
		}
	}*/
	
	//2. Find out the larger number between two
	
	/*int num1,num2;
	printf("Enter your 1st number : ");
	scanf("%d",&num1);
	printf("Enter your 2nd number : ");
	scanf("%d",&num2);
	if (num1>num2){
		printf("%d is Greater than %d",num1,num2);
	}
	else {
		printf("%d is Greater than %d",num2,num1);
	}*/
	
	//1. Check if a number is +ve, -ve or zero
	
	/*int num;
	printf("Enter your integer : ");
	scanf("%d",&num);
	if (num>0){
		printf("Entered number is Positive!");
	}
	else if (num<0){
		printf("Entered number is Negative!");
	}
	else {
		printf("Entered number is Zero!");
	}*/   
	
	
	
	//7.
	//To convert number of days into years, months, days
	/*int num,years,months,days;
	printf("Enter the number of Days : ");
	scanf("%d",&num);
	years=num/365;
	months=(num%365)/30;
	days=(num%365)%30;
	printf("\nNumber of years = %d",years);
	printf("\nNumber of months = %d",months);
	printf("\nNumber of days = %d",days);*/
	
	//6.
	
	/*int a;
	printf("Enter any integer number : ");
	scanf("%d",&a);
	return (a<0) ? printf("Absolute value of %d is %d",a,-a):printf("Absolute value of %d is %d",a,a);*/
	
	/*if (a<0) {
		printf("Absolute value of %d is %d",a,-a);
	}
	else{
		printf("Absolute value of %d is %d",a,a);
	}*/
	
	//5.
	
	/*int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	if (a%2==0){
		printf("Entered Number is Even!");
	}
	else {
		printf("Entered Number is Odd!");
	}*/
	
	//4.
	
	/*int a,b,q,r;
	printf("This is to find the Quotient and Remainder of 2 numbers\n\n");
	printf("Enter 2 numbers followed by smaller then larger number : ");
	scanf("%d %d",&a,&b);
	r=b%a;
	q=b/a;
	printf("Quotient is %d and Remainder is %d",q,r);*/
	
	//3.
	
	/*int l,b;
	float ar;
	printf("Enter the length of the rectangle (in cm) : ");
	scanf("%d",&l);
	printf("Enter the breadth of the rectangle (in cm) : ");
	scanf("%d",&b);
	ar=l*b;
	printf("Area of the Rectangle : %.2f cm^2",ar);*/
	
	//2.
	
	/*int r;
	float ar;
	printf("Enter the radius of the circle (in cm) : ");
	scanf("%d",&r);
	ar=3.14*pow(r,2);
	printf("Area of the Circle : %.2f cm^2",ar);*/
	
	//1.
	
	/*int a,b,c,d,e;
	float avg;
	printf("Enter the marks of 5 subjects : ");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	printf("Average of those 5 numbers is %.2f",avg);*/
	
	return 0;
}