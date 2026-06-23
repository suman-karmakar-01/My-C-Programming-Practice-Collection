#include<stdio.h>
#include<string.h>
#include<time.h>

/*int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}*/

/*struct distance{
	int feet;
	int inch;
};*/

int main(){
	
	//Prime Number
	int x;
	int flag=0;
	printf("Enter any number : ");
	scanf("%d",&x);
	for(int i=2; i<x; i++){
		if(x%i==0){
			flag++;
		}
	}
	if(!flag){
		printf("Its Prime");
	}
	else{
		printf("Its not Prime");
	}
	
	
	//Array Sorting (Insetion)
	/*int arr[10] = {2,4,1,3,8,5,9,6,0,7};
	for(int i = 1; i < 10; i++){
    	int key = arr[i];
    	int j = i - 1;

    	while(j >= 0 && arr[j] > key){
        	arr[j+1] = arr[j];
        	j--;
    	}
    	arr[j+1] = key;
	}
    for(int i=0; i<10; i++){
		printf("%d ", arr[i]);
	}*/

	
	
	//Array Sorting (Bubble)
	/*int arr[10] = {2,4,1,3,8,5,9,6,0,7};
	int temp;
	for(int i=0; i<10;i++){
		for(int j=0; j<9-i; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0; i<10; i++){
		printf("%d ", arr[i]);
	}*/
	
	
	//Array Sorting(Selection)
	/*int arr[10] = {2,4,1,3,8,5,9,6,0,7};
	int temp;
	for(int i=0; i<10;i++){
		for(int j=i; j<10; j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0; i<10; i++){
		printf("%d ", arr[i]);
	}*/
	
	
	
	//Frequency of a string
	/*char str[]="aaaaaaggggggggbklsameerrandibaaztattokesodager";
	int freq[256]={0};
	int len=strlen(str);
	for(int i=0;i<len;i++){
		freq[(unsigned char)str[i]]++;
	}
	for(int i=0;i<256;i++){
		if(freq[i]>0){
			printf("%c occurs %d times\n",i,freq[i]);
		}
	}*/
	
	
	//Frequency of an array
	/*int arr[20]={0,0,0,1,1,1,3,2,2,5,4,3,3,3,5,5,4,4,2,1};
	int freq[20]={0};
	for(int i=0;i<20;i++){
		freq[arr[i]]++;
	}
	for(int i=0;i<20;i++){
		if(freq[i]>0){
			printf("%d occurs %d times\n",i,freq[i]);
		}
	}*/
	
	
	//String is Panildrome or not
	/*char str[20];
	printf("Enter your Stirng : ");
	gets(str);
	int ispalindrome=1;
	int len=strlen(str);
	for(int i=0; i<len;i++){
		if(str[i]!=str[len-i-1]){
			ispalindrome=0;
			break;
		}
	}
	if(ispalindrome){
		printf("Its a Palindrome");
	}
	else{
		printf("Its not a Palindrome");
	}*/
	
	//Number is Palindrome or not
	/*int x;
	int rev=0,rem=0;
	printf("Enter your number : ");
	scanf("%d", &x);
	int y=x;
	while(x!=0){
		rev*=10;
		rem=x%10;
		rev+=rem;
		x/=10;
	}
	if(rev==y){
		printf("It\'s a Palindrome");
	}
	else{
		printf("It\'s not a Palindrome");
	}*/
	
	//To find total distance using structure
	/*struct distance d1,d2,total;
	
	d1.feet=550;
	d1.inch=8;
	
	d2.feet=399;
	d2.inch=7;
	
	total.feet=d1.feet+d2.feet;
	total.inch=d1.inch+d2.inch;
	
	if(total.inch>=12){
		total.feet += total.inch/12;
		total.inch = total.inch%12;
	}
	printf("Total Distance = %dft %dinch",total.feet,total.inch);*/
	
	
	//Length of string without using strlen
	/*char name[10]="Samsung";
	int len=0;
	for(int i=0; name[i]!='\0';i++){
		len++;
	}
	printf("Length = %d",len);*/
	
	
	//GCD of 2 numbers
	/*int a,b;
	printf("Enter 2 numbers : ");
	scanf("%d %d", &a, &b);
	printf("GCD of %d and %d is %d",a,b,gcd(a,b));*/
	
	
	//Availability of Chocolate
	/*char choco[6][15] = {"Kitkat", "DairyMilk", "Hersheys", "Festables","Nescafe", "Munch"};
	char target[20];
	int found=0,j=0;
	printf("Name of the chocolate you wanna find : ");
	scanf("%s",target);
	for(int i=0;i<6; i++){
		while(choco[i][j]==target[j] && choco[i][j] !='\0' && target[j]!='\0'){
			j++;
		}
		if (choco[i][j]=='\0' && target[j]=='\0'){
			found=1;
			break;
		}
	}
	if(found){
		printf("Its available");
	}
	else{
		printf("Its not available");
	}*/
	
	
	//Reverse of a String
	/*char str[20];
	printf("Enter a String : ");
	scanf("%s",str);
	char rev[20];
	int len = strlen(str);
	for(int i=0; i<len; i++){
		rev[len-i-1] = str[i];
	}
	printf("%s",rev);*/
	
	
	//Electrric Bill
	/*int unit,price;
	printf("Enter your Units : ");
	scanf("%d", &unit);
	if(unit>0 || unit>=50){
		price=unit*0.50;
		printf("Your Electric Bill Charge is = $%.2f",price + price*.20);
	}
	else if(unit>50 || unit>=150){
		price=unit*0.75;
		printf("Your Electric Bill Charge is = $%.2f",price + price*.20);
	}
	else if(unit>150 || unit>=250){
		price=unit*1.20;
		printf("Your Electric Bill Charge is = $%.2f",price + price*.20);
	}
	else if(unit>250){
		price=unit*1.50;
		printf("Your Electric Bill Charge is = $%.2f",price + price*.20);
	}
	else{
		printf("Enter valid Unit");
	}*/
	
	
	//Fibonacci Series
	/*int x=1;
	int next=0,prev=0;
	do{
		printf("%d\n",x);
		next=prev+x;
		prev=x;
		x=next;
	}while(x<20);*/
}