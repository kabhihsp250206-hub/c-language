// 1st question Check weather a number is positive
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num>0){
//         printf("Positive Number");
//     }
// }

// 2nd question Check weather a number is odd or even
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num%2==0){
//         printf("Even Number");
//     }
//     else{
//         printf("Odd Number");
//     }
//     return 0;
// }


// 3rd question Check weather a person is eligible for vote
// #include<stdio.h>
// int main(){
//     int age;
//     int citizenship;
//     printf("Enter age: ");
//     scanf("%d",&age);
//     printf("Enter citizenship(1 for Indian, 0 for Not Indian): ");
//     scanf("%d",&citizenship);
//     if(age>=18){
//         if(citizenship==1){
//             printf("Eligible to Vote");
//         }
//         else{
//             printf("Not Eligible to Vote");
//         }
//     }
//     else{
//             printf("Not Eligible to Vote");
//         }
//     return 0;
// }

// 4th question print grades according to thr marks
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("Enter marks: ");
//     scanf("%d",&marks);
//     if(marks>=90 && marks<=100){
//         printf("Grade= A");
//     }
//     else if(marks>=75 && marks<90){
//         printf("Grade= B");
//     }
//     else if(marks>=60 && marks<75){
//         printf("Grade= C");
//     }
//     else if(marks>=40 && marks<60){
//         printf("Grade= D");
//     }
//     else{
//         printf("Grade= F");
//     }
//     return 0;
// }

// 5th question Display day of week corresponding to the input from 1 to 7
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter day number: ");
//     scanf("%d",&num);
//     switch (num)
//     {
//     case 1:
//         printf("Monday");
//         break;
//     case 2:
//         printf("Tuesday");
//         break;
//     case 3:
//         printf("Wednesday");
//         break;
//     case 4:
//         printf("Thrusday");
//         break;
//     case 5:
//         printf("Friday");
//         break;
//     case 6:
//         printf("Saturday");
//         break;
//     case 7:
//         printf("Sunday");
//         break;
    
//     default:printf("Invalid Day");
//         break;
//     }
//     return 0;
// }

// 6th question print 1 to 10 number
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=10;i++){
//         printf("%d\n",i);
//     }
// }

// 7th question sum of n number
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter N: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("sum= %d",sum);
//     return 0;
// }

// 8th question table of n
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter N: ");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d x %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// 9th question factorial
// #include<stdio.h>
// int main(){
//     int n,fact=1;
//     printf("Enter N: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("Factorial = %d",fact);
//     return 0;
// }

// 10th question Prime number
// #include<stdio.h>
// int main(){
//     int n;
//     int isprime=1;
//     printf("Enter N: ");
//     scanf("%d",&n);
//     if(n<=1){
//         printf("Not a Prime number");
//         return 0;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             isprime=0;
//             break;
//         }
//     }
//     if(isprime==1){
//         printf("Prime Number");
//     }
//     else{
//             printf("Not a Prime Number");
//     }
//     return 0;
// }

// 11th question print first 10 natural number
// #include<stdio.h>
// int main(){
//     int i=1;
//     while (i<=10)
//     {
//         printf("%d\n",i);
//         i++;
//     }  
// }


// 12th question sum of n natural number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter N: ");
//     scanf("%d",&n);
//     int sum=0;
//     int i=1;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }
//     printf("Sum= %d",sum);
// }


// 13th question reverse a number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter N: ");
//     scanf("%d",&n);
//     int rem;
//     int reverse=0;
//     while(n!=0){
//         rem=n%10; // Extract last digit
//         reverse=reverse*10+rem; // build the reversed number
//         n=n/10; // remove the last digit
//     }
//     printf("Reverse= %d",reverse);
// }


// 14th palindrome number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter N: ");
//     scanf("%d",&n);
//     int temp=n;
//     int rem;
//     int reverse=0;
//     while(n!=0){
//         rem=n%10;
//         reverse=reverse*10+rem;
//         n=n/10;
//     }
//     if(temp==reverse){
//         printf("Palindrome Number");
//     }
//     else{
//         printf("Not a Palindrome Number");
//     }
// }

// 15th question armstrong number 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     int temp=n;
//     int sum=0;
//     int rem;
//     while(n!=0){
//         rem=n%10;  //Extracted the last digit
//         rem=rem*rem*rem; //Calculate the cube of each digit
//         sum=sum+rem; // Added cube to the sum
//         n=n/10; //Removed the last digit
//     }
//     if(sum==temp){
//         printf("Armstrong number");
//     }
//     else{
//         printf("Not a Armstrong number");
//     }
// }

// 16th question count number of digit
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     int count=0;
//     if(n==0){
//         printf("Number of digits= 1 ");
//     }
//     else{
//     while(n!=0){
//         count++;
//         n=n/10;
//     }
//     printf("Number of digits= %d ",count);}
// }

// 17th question find the sum of digit
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     int sum=0;
//     int rem;
//     while(n!=0){
//         rem=n%10;
//         sum=sum+rem;
//         n/=10;
//     }
//     printf("Sum of Digits=%d",sum);
// }

// 18th question print the number 1 to 10 using do-while loop
// #include<stdio.h>
// int main(){
//     int n=1;
//     do
//     {
//      printf("%d\n",n);
//      n++;   
//     } while (n<=10);
//     return 0;
// }

// 19th question factorial
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter Number: ");
//     scanf("%d",&n);
//     int fact=1;
//     int i=1;
//     do
//     {
//         fact=fact*i;
//         i++;
//     } while (i<=n);
//     printf("Factorial = %d",fact);
//     return 0;
// }

// 20th question break
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=10;i++){
//         if(i==5){
//             break;
//         }
//         printf("%d\n",i);
//     }

// }

// 21th question continue
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=10;i++){
//         if(i==5){
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }

// 22th question goto 
// #include<stdio.h>
// int main()
// {
//     goto start;

//         printf("This line will never be printed.\n");

//     start:
//         printf("Welcome to C Programming");

//     return 0;
// }