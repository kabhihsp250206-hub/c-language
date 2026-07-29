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

// 14th question update a number at given index
// #include<stdio.h>
// int main(){
//     int arr[100];
//     int n,index,value;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Array before Updation: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nEnter index You want to update: ");
//     scanf("%d",&index);
//     printf("Enter the value you want to update: ");
//     scanf("%d",&value);
//     arr[index]=value;
//     printf("Array after Updation: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// } 

// 15th question 2d array input and output 
// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter row(m): ");
//     scanf("%d",&m);
//     printf("Enter col(n): ");
//     scanf("%d",&n);
//     int mat[m][n];
//     printf("Enter the elment: \n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("The matrix is: \n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",mat[i][j]);
//         }printf("\n");
//     }
//     return 0;
// } 

// 16th question matrix addition
// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][3],c[3][3];
//     printf("First matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Second matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("Resultant matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d  ",c[i][j]);
//         }printf("\n");
//     }
//     return 0;
// } 

// 17th question matrix subtraction
// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][3],c[3][3];
//     printf("First matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Second matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             c[i][j]=a[i][j]-b[i][j];
//         }
//     }
//     printf("Resultant matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d  ",c[i][j]);
//         }printf("\n");
//     }
//     return 0;
// } 

// 18th question matrix multiplication 
// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][3],c[3][3];
//     printf("First matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Second matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             c[i][j]=0;
//             for(int k=0;k<3;k++){
//                 c[i][j]=c[i][j]+a[i][k]*b[k][j];
//             }
//         }
//     }
//     printf("Resultant matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d  ",c[i][j]);
//         }printf("\n");
//     }
//     return 0;
// }

// 19th question Matrix transpose 
// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][3];
//     printf("Matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             b[j][i]=a[i][j];
//         }
//     }
//     printf("Transpose matrix: \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d  ",b[i][j]);
//         }printf("\n");
//     }
//     return 0;
// }

// 20th question Sum of primary and secondary Diagonal
// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter Row: ");
//     scanf("%d",&m);
//     printf("Enter Col: ");
//     scanf("%d",&n);
//     int a[m][n];
//     printf("Enter element: \n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int p_sum=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 p_sum=p_sum+a[i][j];
//             }
//         }
//     }
//     int s_sum=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(i+j==n-1){
//                 s_sum=s_sum+a[i][j];
//             }
//         }
//     }
//     printf("Primary Diagonal Sum = %d\n",p_sum);
//     printf("Secondary Diagonal Sum = %d",s_sum);
//     return 0;
// } 

// 21th question Upper Triangle Matrix 
// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter Row: ");
//     scanf("%d",&m);
//     printf("Enter Col: ");
//     scanf("%d",&n);
//     int a[m][n];
//     printf("Enter element: \n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(i>j){
//                 a[i][j]=0;
//             }
//         }
//     }
//     printf("Resultant matrix: \n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d  ",a[i][j]);
//         }printf("\n");
//     }
//     return 0;
// } 

//  22th question Lower Triangle Matrix 
// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter Row: ");
//     scanf("%d",&m);
//     printf("Enter Col: ");
//     scanf("%d",&n);
//     int a[m][n];
//     printf("Enter element: \n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(i<j){
//                 a[i][j]=0;
//             }
//         }
//     }
//     printf("Resultant matrix: \n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d  ",a[i][j]);
//         }printf("\n");
//     }
//     return 0;
// } 

// 23th question Symmetric Matrix 
// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter Row: ");
//     scanf("%d",&m);
//     printf("Enter Col: ");
//     scanf("%d",&n);
//     int a[m][n];
//     if(m!=n){
//         printf("Symmetric matrix is possible only for square matrices. ");
//         return 0;
//     }
//     printf("Enter element: \n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int flag=1;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(a[i][j]!=a[j][i]){
//                 flag=0;
//             }
//         }
//     }
//     if(flag==1){
//         printf("Symmetric matrix");
//     }
//     else{
//         printf("Not a Symmetric matrix");
//     }
//     return 0;
// } 
