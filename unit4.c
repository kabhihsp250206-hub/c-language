// 1st question Declaration of array
// #include<stdio.h>
// int main(){
//     int a[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }  

// 2nd question sum of all element in the array
// #include<stdio.h>
// int main(){
//     int a[5];
//     int sum=0;
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<5;i++){
//         sum+=a[i];
//     }
//     printf("Sum = %d",sum);
//     return 0;
// } 

// 3rd question Largest element in the array
// #include<stdio.h>
// int main(){
//     int a[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     int max=a[0];
//     for(int i=0;i<5;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     printf("Largest element = %d",max);
//     return 0;
// }  

// 4th question Smallest Element in array
// #include<stdio.h>
// int main(){
//     int a[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     int min=a[0];
//     for(int i=1;i<5;i++){
//         if(a[i]<min){
//             min=a[i];
//         }
//     }
//     printf("Smallest element = %d",min);
//     return 0;
// }  

// 5th question Count how many elements are even and how many are odd
// #include<stdio.h>
// int main(){
//     int a[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     int odd=0,even=0;
//     for(int i=0;i<5;i++){
//         if(a[i]%2==0){
//             even++;
//         }
//         else{
//             odd++;
//         }
//     }
//     printf("Even = %d\n",even);
//     printf("Odd = %d",odd);
//     return 0;
// }  

// 6th question Revers the array
// #include<stdio.h>
// int main(){
//     int a[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=4;i>=0;i--){
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }  

// 7th question Reverse the array by swap
// #include<stdio.h>
// int main(){
//     int a[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     int temp;
//     for(int i=0;i<5/2;i++){
//         temp=a[i];
//         a[i]=a[4-i];
//         a[4-i]=temp;
//     }
//     for(int i=0;i<5;i++){
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }  

// 8th question Second largest element In array
// #include<stdio.h>
// int main(){
//     int a[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     int max=a[0];
//     for(int i=0;i<5;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     int sec_max=a[0];
//     for(int i=0;i<5;i++){
//         if(a[i]< max && a[i]>sec_max){
//             sec_max=a[i];
//         }
//     }
//     printf("Second Largest element = %d",sec_max);
//     return 0;
// } 

// 9th question Linear search
// #include<stdio.h>
// int main(){
//     int a[5];
//     int k;
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the value: ");
//     scanf("%d",&k);
//     for(int i=0;i<5;i++){
//         if(a[i]==k){
//             printf("Index=%d",i);
//             return 0;
//         }
//     }
//     printf("Element Not Found");
// } 

// 10th question Binary Search
// #include<stdio.h>
// int main(){
//     int a[5],start=0,end=4,mid,k,found=0,index;
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the value: ");
//     scanf("%d",&k);
//     while(start<=end){
//         mid=(start+end)/2;
//         if(a[mid]==k){
//             index=mid;
//             found=1;
//             break;
//         }
//         else if(k>a[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     if(found==1){
//         printf("No. Found at index=%d",index);
//     }
//     else{
//         printf("Not Found");
//     }
//     return 0;
// } 

// 11th question buuble sort
// #include<stdio.h>
// int main(){
//     int a[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("%d ",a[i]);
//     }
//     int temp;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5-1-i;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j+1];
//                 a[j+1]=a[j];
//                 a[j]=temp;
//             }
//             else{
//                 continue;
//             }
//         }
//     }
//     printf("\n After sorting \n");
//     for(int i=0;i<5;i++){
//         printf("%d  ",a[i]);
//     }
//     return 0;
// } 

// 12th question inserting element in an array
// #include<stdio.h>
// int main(){
//     int arr[100],n,index,value;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Array before insert: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nEnter the index number: ");
//     scanf("%d",&index);
//     printf("Enter the value you want to insert: ");
//     scanf("%d",&value);
//     for(int i=n;i>index;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[index]=value;
//     n++;
//     printf("Array After insert: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// } 

// 13th question Delete eleement from an array
// #include<stdio.h>
// int main(){
//     int arr[100],n,index;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Array before delete: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nEnter the index number: ");
//     scanf("%d",&index);
//     for(int i=index;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n--;
//     printf("Array After delete: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// } 

// 14th question inset a number after every negative number