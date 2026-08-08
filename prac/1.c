#include<stdio.h>
struct stud{
    int roll_no;
    char *name;
    float marks;
};
int main(){
    struct stud s1;
    s1.roll_no=101;
    s1.name="Abhishek";
    s1.marks=96.5;
    printf("%d %s %.2f",s1.roll_no,s1.name,s1.marks);
    
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     return 0;
// }