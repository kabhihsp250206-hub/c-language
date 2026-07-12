#include<stdio.h>
struct stud
{
    int roll_no;
    char name[50];
    float marks;
};
int main(){
    struct stud s1[5];
    for(int i=0;i<5;i++){
        printf("Enter %d student details\n",i+1);
        printf("Enter student roll no: ");
        scanf("%d",&s1[i].roll_no);
        printf("Enter student name: ");
        scanf("%s",&s1[i].name);
        printf("Enter student marks: ");
        scanf("%f",&s1[i].marks);
    }
    printf("Roll no|Name|Marks\n");
    for(int i=0;i<5;i++){
        printf("%d | %s | %.2f \n",s1[i].roll_no,s1[i].name,s1[i].marks);
    }
}