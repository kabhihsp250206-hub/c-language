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

// 11th question wild pointer
// #include<stdio.h>
// int main(){
//     int *p;
//     printf("%p",p);
//     return 0;
// }

// 12th question null pointer
// #include <stdio.h>
// int main()
// {
//     int *p = NULL;
//     if (p == NULL){
//         printf("Pointer is NULL");
//     }
//     else{
//         printf("Pointer is not NULL");
//     }
//     return 0;
// } 

// 13th question danglind pointer 
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *p = (int*)malloc(sizeof(int));
//     *p=10;
//     printf("value = %d\n",*p);
//     free(p);
//     p=NULL;
//     printf("Memory Freed");
//     return 0;
// }

// 14th question generic(void)pointer
// #include<stdio.h>
// int main(){
//     int a=10;
//     float pi=3.14;
//     void *p;
//     p=&a;
//     printf("%d\n",*(int*)p);
//     p=&pi;
//     printf("%.2f",*(float*)p);
//     return 0;
// }

// 15th question allocated memory using malloc 
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *p;
//     int n;
//     printf("Enter Size: ");
//     scanf("%d",&n);
//     p=(int*)malloc(n*sizeof(int));
//     printf("Enter Elements: \n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&p[i]);
//     }
//     printf("Elements are : \n");
//     for(int i=0;i<n;i++){
//         printf("%d\n",p[i]);
//     }
//     free(p);
//     return 0;
// }

// 16th question allocated memory using calloc 
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *p;
//     int n;
//     printf("Enter Size: ");
//     scanf("%d",&n);
//     p = (int*)calloc(n, sizeof(int));
//     if(p == NULL)    {
//         printf("Memory Allocation Failed");
//         return 0;
//     }
//     printf("Enter Elements: \n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&p[i]);
//     }
//     printf("Elements After input : \n");
//     for(int i=0;i<n;i++){
//         printf("%d\n",p[i]);
//     }
//     free(p);
//     return 0;
// }

// 17th question allocated memory using realloc 
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *p;
//     int n,new;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     p=(int *)malloc(n*sizeof(int));
//     if(p==NULL){
//         printf("Memmory not allocated");
//         return 0;
//     }
//     printf("Enter element: \n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&p[i]);
//     }
//     printf("Enter new size: ");
//     scanf("%d",&new);
//     p=(int*)realloc(p,new*sizeof(int));
//     if(p==NULL){
//         printf("Memmory not allocated");
//         return 0;
//     }
//     if(new>n){
//         printf("Enter new element: \n");
//         for(int i=n;i<new;i++){
//             scanf("%d",&p[i]);
//         }
//     }
//     printf("Element are : \n");
//     for(int i=0;i<new;i++){
//         printf("%d\n",p[i]);
//     }
//     free(p);
//     return 0;
// }

// 18th question free dynamically allocated memory 
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *p;
//     int n;
//     printf("Enter Size: ");
//     scanf("%d",&n);
//     p=(int*)malloc(n*sizeof(int));
//     printf("Enter Elements: \n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&p[i]);
//     }
//     printf("Elements are : \n");
//     for(int i=0;i<n;i++){
//         printf("%d\n",p[i]);
//     }
//     free(p);
//     p=NULL;
//     if(p==NULL){
//         printf("Memmory Freed sucessfully");
//     }    
//     return 0;
// } 

// 19th question String declration and input/output 
// #include<stdio.h>
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);
//     printf("You Entered: %s",str);
//     return 0;
// }

// 20th question Read and display string Using scanf()
// #include<stdio.h>
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s",str);
//     printf("You Entered: %s",str);
//     return 0;
// }

// 21th question find a length of a string (without strlen())
// #include<stdio.h>
// int main(){
//     char str[100];
//     int count=0;
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);
//     // for(int i=0;i<100;i++){
//     //     if(str[i]=='\0'){
//     //     break;
//     //     }
//     //     else{
//     //         count++;
//     //     }
//     // }
//     while(str[count]!='\0'){
//         count++;
//     }
//     printf("Length = %d",count);
//     return 0;
// }

// 22th question find length of a string using strlen
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);
//     int len= strlen(str);
//     printf("Length = %d",len);
//     return 0;
// }