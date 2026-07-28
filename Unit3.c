// // 1st question Function with No Arguments and No Return Value
// // #include<stdio.h>
// // void display(){
// //     printf("Welcome to C Programming");
// // }
// // int main(){
// //     display();
// //     return 0;
// // }


// // 2nd question Function with Arguments and No Return Value
// // #include<stdio.h>
// // void square(int n);
// // int main(){
// //     int n;
// //     printf("Enter number : ");
// //     scanf("%d",&n);
// //     square(n);
// //     return 0;

// // }
// // void square(int n){
// //     n=n*n;
// //     printf("Square = %d",n);
// // }


// // 3rd question Function with No Arguments and Return Value
// // #include<stdio.h>
// // int cube();
// // int main(){
// //     int result;
// //     result = cube();
// //     printf("Cube = %d",result);
// //     return 0;
// // }
// // int cube(){
// //     int n;
// //     printf("Enter number: ");
// //     scanf("%d",&n);
// //     n=n*n*n;
// //     return n;
// // } 


// // 3rd question Function with Arguments and Return Value
// // #include<stdio.h>
// // int maximun(int a,int b);
// // int main(){
// //     int a,b;
// //     printf("Enter first number: ");
// //     scanf("%d",&a);
// //     printf("Enter second number: ");
// //     scanf("%d",&b);
// //     printf("Largest = %d",maximun(a,b));
// //     return 0;
// // }
// // int maximun(int a,int b){
// //     if(a>b){
// //         return a;
// //     }
// //     else {
// //         return b;
// //     }
// // } 


// // 4th question call by value
// // #include<stdio.h>
// // void change(int a);
// // int main(){
// //     int x=20;
// //     printf("Before Function = %d\n",x);
// //     change(x);
// //     printf("After Function = %d\n",x);
// //     return 0;
// // }
// // void change(int a){
// //     a=30;
// //     printf("Inside Function = %d\n",a);
// // }

// // 5th question  call by references
// // #include<stdio.h>
// // void increments(int *a);
// // int main(){
// //     int x=20;
// //     printf("Before Function = %d\n",x);
// //     increments(&x);
// //     printf("After Function = %d\n",x);
// //     return 0;
// // }
// // void increments(int *a){
// //     *a=30;
// //     printf("Inside Function = %d\n",*a);
// // } 

// // 6th question factorial function
// // #include<stdio.h>
// // int factorial(int n);
// // int main(){
// //     int n;
// //     printf("Enter number: ");
// //     scanf("%d",&n);
// //     printf("Factorial = %d",factorial(n));
// //     return 0;
// // }
// // int factorial(int n){
// //     int fact =1;
// //     for(int i=1;i<=n;i++){
// //         fact=fact*i;
// //     }
// //     return fact;
// // } 

// // 7th question exponents
// // #include<stdio.h>
// // int power(int base,int exponent);
// // int main(){
// //     int base,exponent;
// //     printf("Enter base: ");
// //     scanf("%d",&base);
// //     printf("Enter exponent: ");
// //     scanf("%d",&exponent);
// //     int result = power(base,exponent);
// //     printf("Result = %d",result);
// //     return 0;
// // }
// // int power(int base,int exponent){
// //     int result = 1;
// //     for(int i=1;i<=exponent;i++){
// //         result=result*base;
// //     }
// //     return result;
// // }

// // // 8th question sum of digits
// // #include<stdio.h>
// // int sumOfDigits(int n);
// // int main(){
// //     int n;
// //     printf("Enter number: ");
// //     scanf("%d",&n);
// //     printf("Sum of digits = %d",sumOfDigits(n));
// //     return 0;
// // }
// // int sumOfDigits(int n){
// //     int sum=0,rem;
// //     while(n!=0){
// //         rem=n%10;
// //         sum +=rem;
// //         n=n/10; 
// //     }
// //     return sum;
// // } 

// // 9th question reverse a number
// // #include<stdio.h>
// // int reverse(int n);
// // int main(){
// //     int n;
// //     printf("Enter number: ");
// //     scanf("%d",&n);
// //     printf("Revers = %d",reverse(n));
// //     return 0;
// // }
// // int reverse(int n){
// //     int rev=0,rem;
// //     while(n!=0){
// //         rem=n%10;
// //         rev=rev*10+rem;
// //         n/=10;
// //     }
// //     return rev;
// // } 

// // 10th question palidrome
// // #include<stdio.h>
// // int isPalidrome(int n);
// // int main(){
// //     int n;
// //     printf("Enter number: ");
// //     scanf("%d",&n);
// //     if(isPalidrome(n)==1){
// //         printf("Palidrome");
// //     }
// //     else{
// //         printf("Not Palidrome");
// //     }
// //     return 0;
// // }
// // int isPalidrome(int n){
// //     int temp=n,rev=0,rem;
// //     while(n!=0){
// //         rem=n%10;
// //         rev=rev*10+rem;
// //         n/=10;
// //     }
// //     if(temp==rev){
// //         return 1;
// //     }
// //     else{
// //         return 0;
// //     }
// // } 

// // 11th question prime number
// // #include<stdio.h>
// // int isPrime(int n);
// // int main(){
// //     int n;
// //     printf("Enter number: ");
// //     scanf("%d",&n);
// //     if(isPrime(n)==1){
// //         printf("Prime number");
// //     }
// //     else{
// //         printf("Not Prime number");
// //     }
// // }
// // int isPrime(int n){
// //     for(int i=2;i<n;i++){
// //         if(n%i==0){
// //             return 0;
// //         }
// //     }
// //     return 1;
// // } 

// // 12th question gcd
// // #include<stdio.h>
// // int gcd(int a,int b);
// // int main(){
// //     int a,b;
// //     printf("Enter first number: ");
// //     scanf("%d",&a);
// //     printf("Enter second number: ");
// //     scanf("%d",&b);
// //     printf("GCD = %d",gcd(a,b));
// //     return 0;
// // }
// // int gcd(int a,int b){
// //     int temp;
// //     while(b!=0){
// //         temp=b;
// //         b=a%b;
// //         a=temp;
// //     }
// //     return a;
// // } 

// // 13th question nCr
// // #include<stdio.h>
// // int factorial(int n);
// // int nCr(int n,int r);
// // int main(){
// //     int n,r;
// //     printf("Enter n: ");
// //     scanf("%d",&n);
// //     printf("Enter r: ");
// //     scanf("%d",&r);
// //     int result=nCr(n,r);
// //     printf("nCr = %d ",result);
// //     return 0;
// // }
// // int factorial(int n){
// //     int fact=1;
// //     for(int i=1;i<=n;i++){
// //         fact=fact*i;
// //     }
// //     return fact;
// // }
// // int nCr(int n,int r){
// //     int nfact=factorial(n);
// //     int rfact=factorial(r);
// //     int nrfact=factorial(n-r);
// //     return nfact/(rfact*nrfact);
// // } 

// // 14th question maths function find square roots
// // #include<stdio.h>
// // #include<math.h>
// // int main(){
// //     float n;
// //     printf("Enter a number: ");
// //     scanf("%f",&n);
// //     printf("Square root= %.2f",sqrt(n));
// //     return 0;
// // } 

// // 15th question power
// // #include<stdio.h>
// // #include<math.h>
// // int main(){
// //     int b,ex;
// //     printf("Enter Base: ");
// //     scanf("%d",&b);
// //     printf("Enter Exponent: ");
// //     scanf("%d",&ex);
// //     float res=pow(b,ex);
// //     printf("Result = %.2f",res);
// //     return 0;
// // } 

// // 16th question recursion factorial 
// // #include<stdio.h>
// // int factorial(int n);
// // int main(){
// //     int n;
// //     printf("Enter a number: ");
// //     scanf("%d",&n);
// //     printf("Factorial = %d",factorial(n));
// //     return 0;
// // }
// // int factorial(int n){
// //     if(n==0 || n==1){
// //         return 1;
// //     }
// //     else{
// //         return n*factorial(n-1);
// //     }
// // } 

// // 17th question recursion sum of number
// // #include<stdio.h>
// // int sum(int n);
// // int main(){
// //     int n;
// //     printf("Enter a number: ");
// //     scanf("%d",&n);
// //     printf("Sum = %d",sum(n));
// //     return 0;
// // }
// // int sum(int n){
// //     if(n==0){
// //         return 0;
// //     }
// //     else{
// //         return n + sum(n-1);
// //     }
// // } 

// // 18th question recursion fibonacci number
// // #include<stdio.h>
// // int fibonacci(int n);
// // int main(){
// //     int n;
// //     printf("Enter a number: ");
// //     scanf("%d",&n);
// //     printf("%dth Fibonacci Number = %d",n,fibonacci(n));
// //     return 0;
// // }
// // int fibonacci(int n){
// //     if(n==0){
// //         return 0;
// //     }
// //     else if(n==1){
// //         return 1;
// //     }
// //     else{
// //         return fibonacci(n-1)+fibonacci(n-2);
// //     }
// // } 

// // 19th question recursion power of n
// // #include<stdio.h>
// // int power(int x,int n);
// // int main(){
// //     int n,x;
// //     printf("Enter x: ");
// //     scanf("%d",&x);
// //     printf("Enter n: ");
// //     scanf("%d",&n);
// //     printf("Result = %d",power(x,n));
// //     return 0;
// // }
// // int power(int x,int n){
// //     if(n==0){
// //         return 1;
// //     }
// //     else if(x==0){
// //         return 0;
// //     }
// //     else{
// //         return x * power(x,n-1);
// //     }
// // } 

// // 20th question recursion gcd
// #include<stdio.h>
// int gcd(int a,int b);
// int main(){
//     int a,b;
//     printf("Enter First number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     printf("GCD = %d",gcd(a,b));
//     return 0;
// }
// int gcd(int a,int b){
//     if(b==0){
//         return a;
//     }
//     else {
//         return gcd(b,a%b);
//     }
// }

// 21th question Recursion reverse a number 
// #include<stdio.h>
// int rev=0;
// void reverse(int n);
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     reverse(n);
//     printf("Reverse = %d",rev);
//     return 0;
// }
// void reverse(int n){
//     if(n==0){
//         return ;
//     }
//     rev=rev*10+(n%10);
//     reverse(n/10);
// } 

// 22th question palidrome using recursion
// #include<stdio.h>
// int rev=0,original;
// void reverse(int n);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     original=n;
//     reverse(n);
//     if(rev == original){
//         printf("Palindrome");
//     }
//     else{
//         printf("Not Palindrome");
//     }
//     return 0;
// }
// void reverse(int n){
//     if(n==0){
//         return ;
//     }
//     rev=rev*10+(n%10);
//     reverse(n/10);
// } 

// 23th question sum of digits using recursion 
// #include<stdio.h>
// int sum=0;
// void sumOfdigit(int n);
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     sumOfdigit(n);
//     printf("Sum = %d",sum);
//     return 0;
// }
// void sumOfdigit(int n){
//     if(n==0){
//         return ;
//     }
//     sum=sum+(n%10);
//     sumOfdigit(n/10);
// } 

// 24th question un