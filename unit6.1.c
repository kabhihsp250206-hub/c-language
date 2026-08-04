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
#include<stdio.h>
struct Date{
    int date;
    char month[20];
    int year;
};
struct Student{
    int roll_no;
    char name[50];
    float marks;
    struct Date dob;
};
int main(){
    struct Student s1;
    printf("Enter Roll Number: ");
    scanf("%d",&s1.roll_no);
    printf("Enter Name: ");
    scanf("%s",s1.name);
    printf("Enter Marks: ");
    scanf("%f",&s1.marks);
    printf("Enter Dob: \n");
    printf("Enter Date: ");
    scanf("%d",&s1.dob.date);
    printf("Enter Month: ");
    scanf("%s",s1.dob.month);
    printf("Enter Year: ");
    scanf("%d",&s1.dob.year);
    printf("Student Details\n");
    printf("Roll Number: %d\n",s1.roll_no);
    printf("Name: %s\n",s1.name);
    printf("Marks: %.2f\n",s1.marks);
    printf("Dob: ");
    printf("%d | ",s1.dob.date);
    printf("%s | ",s1.dob.month);
    printf("%d ",s1.dob.year);
    return 0;
}