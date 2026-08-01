// 1st question print value and address using pointer
// #include<stdio.h>
// int main(){
//     int a=10;
//     int *p;
//     p=&a;
//     printf("Value of a = %d\n",a);
//     printf("Address of a = %p\n",&a);
//     printf("Value stored in p = %p\n",p);
//     printf("Value pointed by p = %d",*p);
//     return 0;
// }

// 2nd question modifying variable using pointer 
// #include<stdio.h>
// int main(){
//     int a=10;
//     int *p=&a;
//     printf("Before Modification = %d\n",*p);
//     *p=50;
//     printf("After Modification = %d\n",*p);
//     return 0;
// } 

// 3rd question swap two number using pointers 
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     printf("Before swapping:\nFirst = %d\nSecond = %d\n",a,b);
//     int *p1,*p2;
//     p1=&a;
//     p2=&b;
//     int temp;
//     temp=*p1;
//     *p1=*p2;
//     *p2=temp;
//     printf("After swapping:\nFirst = %d\nSecond = %d\n",*p1,*p2);
//     return 0;
// } 

// 4th question pointer arithimatic 
// #include<stdio.h>
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int *p=arr;
//     printf("Value = %d\n",*p);
//     printf("Address = %p\n",p);
//     p++;
//     printf("Value = %d\n",*p);
//     printf("Address = %p\n",p);
//     return 0;
// } 

// 5th question array traversal using pointer 
// #include<stdio.h>
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int *p=arr;
//     for(int i=0;i<5;i++){
//         printf("%d\n",*p);
//         p++;
//     }
//     return 0;
// } 

// 6th question sum of array element using pointer 
// #include<stdio.h>
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int *p=arr;
//     int sum=0;
//     for(int i=0;i<5;i++){
//         sum+=*p;
//         p++;
//     }
//     printf("Sum = %d",sum);
//     return 0;
// } 

// 7th question largest element using pointer 
// #include<stdio.h>
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int *p=arr;
//     int max=*p;
//     for(int i=0;i<5;i++){
//         if(*p>max)
//         max=*p;
//         p++;
//     }
//     printf("Largest = %d",max);
//     return 0;
// } 

// 8th question smallest element using pointer 
// #include<stdio.h>
// int main(){
//     int arr[5]={30,50,40,10,20};
//     int *p=arr;
//     int min=*p;
//     for(int i=0;i<5;i++){
//         if(*p<min)
//         min=*p;
//         p++;
//     }
//     printf("Smallest = %d",min);
//     return 0;
// } 

// 9th question reverse an array using pointer 
// #include<stdio.h>
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int *start=arr;
//     int *end=arr+4;
//     int temp;
//     while(start<end){
//         temp=*start;
//         *start=*end;
//         *end=temp;
//         start++;
//         end--;
//     }
//     printf("Reversed Array: \n");
//     for(int i=0;i<5;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// } 

// 10th question passing pointer to function(call by address) 
// #include<stdio.h>
// void increment(int *p);
// int main(){
//     int a=10;
//     printf("Before Function = %d\n",a);
//     increment(&a);
//     printf("After Function = %d",a);
//     return 0;
// }
// void increment(int *p){
//     *p+=5;
//     printf("Inside Function = %d\n",*p);
// }