// 1st question declare a structure and display students details
// #include<stdio.h>
// struct Students
// {
//     int roll_no;
//     char name[100];
//     float marks;
// };
// int main(){
//     struct Students s1;
//     printf("Enter Roll Number: ");
//     scanf("%d",&s1.roll_no);
//     printf("Enter Name: ");
//     scanf("%s",s1.name);
//     printf("Enter Marks: ");
//     scanf("%f",&s1.marks);
//     printf("Student Details\n");
//     printf("Roll Number: %d\n",s1.roll_no);
//     printf("Name: %s\n",s1.name);
//     printf("Marks: %.2f",s1.marks);
//     return 0;
// }

// 2nd question Initialize a Structure at the Time of Declaration
// #include<stdio.h>
// struct Students
// {
//     int roll_no;
//     char name[100];
//     float marks;
// };
// int main(){
//     struct Students s1={101,"Rahul",95.5};
//     printf("Student Details\n");
//     printf("Roll Number: %d\n",s1.roll_no);
//     printf("Name: %s\n",s1.name);
//     printf("Marks: %.2f",s1.marks);
//     return 0;
// }

// 3rd question Store Details of Multiple Students Using an Array of Structures
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     struct student s[3];
//     for(int i=0;i<3;i++){
//         printf("Enter details of Student %d\n",i+1);
//         printf("Enter Roll Number: ");
//         scanf("%d",&s[i].roll_no);
//         printf("Enter Name: ");
//         scanf("%s",s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f",&s[i].marks);
//     }
//     for(int i=0;i<3;i++){
//         printf("Student %d\n",i+1);
//         printf("Roll Number: %d\n",s[i].roll_no);
//         printf("Name: %s\n",s[i].name);
//         printf("Marks: %.2f\n",s[i].marks);
//     }
//     return 0;
// }

// 4th question Pass a Structure to a Function
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// void display(struct student s){
//     printf("Student Details\n");
//     printf("Roll Number: %d\n",s.roll_no);
//     printf("Name: %s\n",s.name);
//     printf("Marks: %.2f",s.marks);
// }
// int main(){
//     struct student s1;
//     printf("Enter Roll Number: ");
//     scanf("%d",&s1.roll_no);
//     printf("Enter Name: ");
//     scanf("%s",s1.name);
//     printf("Enter Marks: ");
//     scanf("%f",&s1.marks);
//     display(s1);
//     return 0;
// }

// 5th question Pass a Structure using Pointer
// #include<stdio.h>
// struct Student
// {
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     struct Student s;
//     struct Student *p;
//     p=&s;
//     printf("Enter Roll Number: ");
//     scanf("%d",&p->roll_no);
//     printf("Enter Name: ");
//     scanf("%s",p->name);
//     printf("Enter Marks: ");
//     scanf("%f",&p->marks);
//     printf("Student Details\n");
//     printf("Roll Number: %d\n",p->roll_no);
//     printf("Name: %s\n",p->name);
//     printf("Marks: %.2f",p->marks);
//     return 0;
// }

// 6th question Pass Structure to a Function Using Pointer
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// void display(struct student *s){
//     printf("Student Details\n");
//     printf("Roll Number: %d\n",s->roll_no);
//     printf("Name: %s\n",s->name);
//     printf("Marks: %.2f",s->marks);
// }
// int main(){
//     struct student s1;
//     printf("Enter Roll Number: ");
//     scanf("%d",&s1.roll_no);
//     printf("Enter Name: ");
//     scanf("%s",s1.name);
//     printf("Enter Marks: ");
//     scanf("%f",&s1.marks);
//     display(&s1);
//     return 0;
// }

// 7th question Modifying Structure Dta Using a Pointer Function
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// void display(struct student *s){
//     s->marks+=5;
//     printf("Student Details\n");
//     printf("Roll Number: %d\n",s->roll_no);
//     printf("Name: %s\n",s->name);
//     printf("Marks: %.2f",s->marks);
// }
// int main(){
//     struct student s1;
//     printf("Enter Roll Number: ");
//     scanf("%d",&s1.roll_no);
//     printf("Enter Name: ");
//     scanf("%s",s1.name);
//     printf("Enter Marks: ");
//     scanf("%f",&s1.marks);
//     display(&s1);
//     return 0;
// }

// 8th question Nested Structure (Student with Date of Birth)
// #include<stdio.h>
// struct Date{
//     int date;
//     char month[20];
//     int year;
// };
// struct Student{
//     int roll_no;
//     char name[50];
//     float marks;
//     struct Date dob;
// };
// int main(){
//     struct Student s1;
//     printf("Enter Roll Number: ");
//     scanf("%d",&s1.roll_no);
//     printf("Enter Name: ");
//     scanf("%s",s1.name);
//     printf("Enter Marks: ");
//     scanf("%f",&s1.marks);
//     printf("Enter Dob: \n");
//     printf("Enter Date: ");
//     scanf("%d",&s1.dob.date);
//     printf("Enter Month: ");
//     scanf("%s",s1.dob.month);
//     printf("Enter Year: ");
//     scanf("%d",&s1.dob.year);
//     printf("Student Details\n");
//     printf("Roll Number: %d\n",s1.roll_no);
//     printf("Name: %s\n",s1.name);
//     printf("Marks: %.2f\n",s1.marks);
//     printf("Dob: ");
//     printf("%d | ",s1.dob.date);
//     printf("%s | ",s1.dob.month);
//     printf("%d ",s1.dob.year);
//     return 0;
// }

// 9th question Basic Union Program
// #include<stdio.h>
// union Data
// {
//     int i;
//     float f;
//     char ch;
// };
// int main(){
//     union Data d;
//     printf("Enter Integer: ");
//     scanf("%d",&d.i);
//     printf("Enter Float: ");
//     scanf("%f",&d.f);
//     printf("Enter Character: ");
//     scanf(" %c",&d.ch);
//     printf("Interger = %d\n",d.i);
//     printf("Float = %.20f\n",d.f);
//     printf("Character = %c",d.ch);
//     return 0;
// }

// 10th question Compare Memory Size of Structure and Union
// #include <stdio.h>
// struct Student
// {
//     int roll_no;
//     char name[20];
//     float marks;
// };
// union Data
// {
//     int roll_no;
//     char name[20];
//     float marks;
// };
// int main(){
//     printf("Size of Structure = %d\n", sizeof(struct Student));
//     printf("Size of Union = %d", sizeof(union Data));
//     return 0;
// }

// 11th  question Find the Student with the Highest Marks (Array of Structures)
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     int n;
//     printf("Enter Number of Students: ");
//     scanf("%d",&n);
//     struct student s[n];
//     for(int i=0;i<n;i++){
//         printf("Enter details of Student %d\n",i+1);
//         printf("Enter Roll Number: ");
//         scanf("%d",&s[i].roll_no);
//         printf("Enter Name: ");
//         scanf("%s",s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f",&s[i].marks);
//     }
//     int max=0;
//     for(int i=0;i<n;i++){
//         if(s[i].marks>s[max].marks){
//             max=i;
//         }
//     }
//     printf("Student with Highest Marks");
//     printf("Student Details\n");
//     printf("Roll Number: %d\n",s[max].roll_no);
//     printf("Name: %s\n",s[max].name);
//     printf("Marks: %.2f",s[max].marks);
//     return 0;
// }

// 12th  question Find the Student with the Lowest Marks (Array of Structures)
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     int n;
//     printf("Enter Number of Students: ");
//     scanf("%d",&n);
//     struct student s[n];
//     for(int i=0;i<n;i++){
//         printf("Enter details of Student %d\n",i+1);
//         printf("Enter Roll Number: ");
//         scanf("%d",&s[i].roll_no);
//         printf("Enter Name: ");
//         scanf("%s",s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f",&s[i].marks);
//     }
//     int min=0;
//     for(int i=0;i<n;i++){
//         if(s[i].marks<s[min].marks){
//             min=i;
//         }
//     }
//     printf("Student with Lowest Marks");
//     printf("Student Details\n");
//     printf("Roll Number: %d\n",s[min].roll_no);
//     printf("Name: %s\n",s[min].name);
//     printf("Marks: %.2f",s[min].marks);
//     return 0;
// }

// 13th question Search a Student by Roll Number
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     int n;
//     printf("Enter Number of Students: ");
//     scanf("%d",&n);
//     struct student s[n];
//     for(int i=0;i<n;i++){
//         printf("Enter details of Student %d\n",i+1);
//         printf("Enter Roll Number: ");
//         scanf("%d",&s[i].roll_no);
//         printf("Enter Name: ");
//         scanf("%s",s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f",&s[i].marks);
//     }
//     int flag=0;
//     int roll_no;
//     printf("Enter Roll Number to Search : ");
//     scanf("%d",&roll_no);
//     for(int i=0;i<n;i++){
//         if(roll_no==s[i].roll_no){
//             flag=1;
//             printf("Student Found\n");
//             printf("Roll Number: %d\n",s[i].roll_no);
//             printf("Name: %s\n",s[i].name);
//             printf("Marks: %.2f",s[i].marks);
//             break;
//         }
//     }
//     if(flag==0){
//         printf("Student Not Found");
//     }
//     return 0;
// }

// 14th question Delete a Student Record by Roll Number
// #include <stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     int n;
//     printf("Enter Number of Students: ");
//     scanf("%d", &n);
//     struct student s[n];
//     for (int i = 0; i < n; i++){
//         printf("Enter details of Student %d\n", i + 1);
//         printf("Enter Roll Number: ");
//         scanf("%d", &s[i].roll_no);
//         printf("Enter Name: ");
//         scanf("%s", s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f", &s[i].marks);
//     }
//     int pos=-1;
//     int roll_no;
//     printf("Enter Roll Number to Delete: ");
//     scanf("%d", &roll_no);
//     for (int i = 0; i < n; i++){
//         if (s[i].roll_no == roll_no){
//             pos = i;
//             break;
//         }
//     }
//     if(pos == -1){
//         printf("Student Not Found");
//         return 0;
//     }
//     for (int i = pos; i < n - 1; i++){
//         s[i] = s[i + 1];
//     }
//     n--;
//     printf("Array after deletion \n");
//     for (int i = 0; i < n; i++){
//         printf("Roll Number: %d\n", s[i].roll_no);
//         printf("Name: %s\n", s[i].name);
//         printf("Marks: %.2f\n", s[i].marks);
//     }
//     return 0;
// }

// 15th question Update a Student Record by Roll Number
// #include <stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     int n;
//     printf("Enter Number of Students: ");
//     scanf("%d", &n);
//     struct student s[n];
//     for (int i = 0; i < n; i++){
//         printf("Enter details of Student %d\n", i + 1);
//         printf("Enter Roll Number: ");
//         scanf("%d", &s[i].roll_no);
//         printf("Enter Name: ");
//         scanf("%s", s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f", &s[i].marks);
//     }
//     int pos=-1;
//     int roll_no;
//     printf("Enter Roll Number to Update: ");
//     scanf("%d", &roll_no);
//     for (int i = 0; i < n; i++){
//         if (s[i].roll_no == roll_no){
//             pos = i;
//             break;
//         }
//     }
//     if(pos == -1){
//         printf("Student Not Found");
//         return 0;
//     }
//     printf("Enter new name: ");
//     scanf("%s",s[pos].name);
//     printf("Enter new marks: ");
//     scanf("%f",&s[pos].marks);
//     printf("Array after Updatation \n");
//     for (int i = 0; i < n; i++){
//         printf("Roll Number: %d\n", s[i].roll_no);
//         printf("Name: %s\n", s[i].name);
//         printf("Marks: %.2f\n", s[i].marks);
//     }
//     return 0;
// } 

// 16th question Sort Student Records by Marks (Descending Order)
// #include <stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     int n;
//     printf("Enter Number of Students: ");
//     scanf("%d", &n);
//     struct student s[n];
//     for (int i = 0; i < n; i++){
//         printf("Enter details of Student %d\n", i + 1);
//         printf("Enter Roll Number: ");
//         scanf("%d", &s[i].roll_no);
//         printf("Enter Name: ");
//         scanf("%s", s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f", &s[i].marks);
//     }
//     struct student temp;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(s[i].marks<s[j].marks){
//                 temp =s[i];
//                 s[i]=s[j];
//                 s[j]=temp;
//             }
//         }
//     }
//     printf("Array after Sorting\n");
//     for (int i = 0; i < n; i++){
//         printf("Roll Number: %d\n", s[i].roll_no);
//         printf("Name: %s\n", s[i].name);
//         printf("Marks: %.2f\n", s[i].marks);
//     }
//     return 0;
// }

// 17th question Count the Number of Students Passed and Failed
// #include <stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     int n;
//     printf("Enter Number of Students: ");
//     scanf("%d", &n);
//     struct student s[n];
//     for (int i = 0; i < n; i++){
//         printf("Enter details of Student %d\n", i + 1);
//         printf("Enter Roll Number: ");
//         scanf("%d", &s[i].roll_no);
//         printf("Enter Name: ");
//         scanf("%s", s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f", &s[i].marks);
//     }
//     int pass=0,fail=0;
//     for(int i=0;i<n;i++){
//         if(s[i].marks>=40){
//             pass++;
//         }
//         else{
//             fail++;
//         }
//     }
//     printf("Total Students Pass = %d\n",pass);
//     printf("Total Students fail = %d\n",fail);
//     return 0;
// }

// 18th question Calculate Sum and Average Marks of All Students
// #include <stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     int n;
//     printf("Enter Number of Students: ");
//     scanf("%d", &n);
//     struct student s[n];
//     for (int i = 0; i < n; i++){
//         printf("Enter details of Student %d\n", i + 1);
//         printf("Enter Roll Number: ");
//         scanf("%d", &s[i].roll_no);
//         printf("Enter Name: ");
//         scanf("%s", s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f", &s[i].marks);
//     }
//     float sum=0;
//     for(int i=0;i<n;i++){
//         sum+=s[i].marks;
//     }
//     float avg=sum/n;
//     printf("Total Marks = %.2f\n",sum);
//     printf("Average Marks = %.2f\n",avg);
//     return 0;
// }

// 19th Display Students Scoring Above Average Marks 
// #include <stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;
// };
// int main(){
//     int n;
//     printf("Enter Number of Students: ");
//     scanf("%d", &n);
//     struct student s[n];
//     for (int i = 0; i < n; i++){
//         printf("Enter details of Student %d\n", i + 1);
//         printf("Enter Roll Number: ");
//         scanf("%d", &s[i].roll_no);
//         printf("Enter Name: ");
//         scanf("%s", s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f", &s[i].marks);
//     }
//     float sum=0;
//     for(int i=0;i<n;i++){
//         sum+=s[i].marks;
//     }
//     float avg=sum/n;
//     printf("Students Scoring Above Average Marks \n");
//     for (int i = 0; i < n; i++){
//         if(s[i].marks>avg){
//             printf("Roll Number: %d\n", s[i].roll_no);
//             printf("Name: %s\n", s[i].name);
//             printf("Marks: %.2f\n", s[i].marks);
//         }
//     }
//     return 0;
// }

// 20th question Store and Display Employee Details
// #include<stdio.h>
// struct Employee
// {
//     int id;
//     char name[100];
//     char department[50];
//     float salay;
// };
// int main(){
//     int n;
//     printf("Enter Number of Employee: ");
//     scanf("%d",&n);
//     struct Employee e[n];
//     for(int i=0;i<n;i++){
//         printf("Enter Id: ");
//         scanf("%d",&e[i].id);
//         printf("Enter Name: ");
//         scanf("%s",e[i].name);
//         printf("Enter Department: ");
//         scanf("%s",e[i].department);
//         printf("Enter Salary: ");
//         scanf("%f",&e[i].salay);
//     }
//     printf("Employees Details\n");
//     for(int i=0;i<n;i++){
//         printf("Employee %d\n",i+1);
//         printf("ID: %d\n",e[i].id);
//         printf("Name: %s\n",e[i].name);
//         printf("Department: %s\n",e[i].department);
//         printf("Salary: %.2f\n",e[i].salay);
//     }
//     return 0;
// }